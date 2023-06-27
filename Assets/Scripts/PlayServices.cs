using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;
using Unity.Services.Core;
using Unity.Services.Authentication;
using Unity.Services.CloudSave;
#if UNITY_ANDROID
using GooglePlayGames;
using GooglePlayGames.BasicApi;
#endif
using UnityEngine.SocialPlatforms;
using AppleAuth;
using AppleAuth.Native;
using AppleAuth.Enums;
using AppleAuth.Extensions;
using AppleAuth.Interfaces;
using System.Threading.Tasks;
using System.Text;

public class PlayServices : MonoBehaviour
{
    private static PlayServices _instance;

    public static PlayServices Instance { get { return _instance; } }

    static int playerScore;
    public string token;
    public bool loggedIn;
    public bool couldntLogIn;

    private IAppleAuthManager appleAuthManager;
    private bool triedQuickLogin = false;

    // Player Data Object
    private PlayerData player;

    void Awake()
    {
        if (_instance != null && _instance != this)
        {
            Destroy(this.gameObject);
        }
        else
        {
            _instance = this;
            DontDestroyOnLoad(this);
        }

        loggedIn = false;

        if (UnityServices.State == ServicesInitializationState.Initialized)
        {

        }
        else
        {
            InitUGS();
        }

#if UNITY_ANDROID
        PlayGamesPlatform.Activate();
#endif
    }

    // Start is called before the first frame update
    void Start()
    {
        player = GetComponent<PlayerData>();

        // If the current platform is supported initialize apple authentication.
        if (AppleAuthManager.IsCurrentPlatformSupported)
        {
            // Creates a default JSON deserializer, to transform JSON Native responses to C# instances
            IPayloadDeserializer deserializer = new PayloadDeserializer();
            // Creates an Apple Authentication manager with the deserializer
            appleAuthManager = new AppleAuthManager(deserializer);
        }
#if UNITY_IOS
        else
            couldntLogIn = true;
#endif

#if UNITY_ANDROID
        PlayGamesPlatform.Instance.Authenticate(ProcessAuthentication);
#endif

    }

    // Update is called once per frame
    void Update()
    {
#if (UNITY_IOS || UNITY_STANDALONE_OSX)
            // Updates the AppleAuthManager instance to execute
            // pending callbacks inside Unity's execution loop
            if (appleAuthManager != null)
            {
                appleAuthManager.Update();
            }

            // Tries to quick login on Apple, if user previously logged in.
            if (triedQuickLogin == false && appleAuthManager != null)
            {
                GetCredentialState();
                triedQuickLogin = true;
            }
#endif

        playerScore = score.GetScore();
    }

#if UNITY_ANDROID
    private void LoginGooglePlayGames()
    {
        PlayGamesPlatform.Instance.ManuallyAuthenticate(ProcessAuthentication);
    }


#endif

    /// <summary>
    /// Signs user into Apple with Auth from Apple.
    /// </summary>
    public async void SignInApple()
    {
        if (!AuthenticationService.Instance.IsSignedIn)
            AuthenticationService.Instance.SwitchProfile("apple");

        var idToken = await GetAppleIdTokenAsync();

        if (idToken != null)
        {
            await SignInWithAppleAsync(idToken);

        }
        else
        {
            couldntLogIn = true;
        }

    }

    async void SignInGoogle(string code)
    {
        if(code != null)
            await SignInWithGooglePlayGamesAsync(code);
        else
            couldntLogIn = true;
    }

    async void InitUGS()
    {
        await UnityServices.InitializeAsync();
    }

    private void GameCenterLogin()
    {
        Social.localUser.Authenticate(ProcessAuthentication);
    }

    /// <summary>
    /// Performs continue with Apple login.
    /// </summary>
    public async void QuickLoginApple()
    {
        //Debug.Log("Quick Login Apple Called");
        if (appleAuthManager == null) return;

        if (!AuthenticationService.Instance.IsSignedIn)
            AuthenticationService.Instance.SwitchProfile("apple");

        var quickLoginArgs = new AppleAuthQuickLoginArgs();

        this.appleAuthManager.QuickLogin(
            quickLoginArgs,
            credential =>
            {
                // Received a valid credential!
                // Try casting to IAppleIDCredential or IPasswordCredential

                // Previous Apple sign in credential
                var appleIdCredential = credential as IAppleIDCredential;

                // Saved Keychain credential (read about Keychain Items)
                var passwordCredential = credential as IPasswordCredential;

                if (appleIdCredential != null)
                {
                    //userID = PlayerPrefs.GetString("AppleUserIdKey", appleIdCredential.User);
                    //userName = PlayerPrefs.GetString("AppleUserNameKey", appleIdCredential.FullName.GivenName);

                }

            },
            error =>
            {
                //Debug.Log("Quick Login Apple Failed");
                SignInApple();
                return;
                // Quick login failed. The user has never used Sign in With Apple on your app. Go to login screen
            });

        var idToken = PlayerPrefs.GetString("AppleTokenIdKey");

        await SignInWithAppleAsync(idToken);

    }

    /// <summary>
    /// Checks if user has logged in with apple before on device, if so continues to quick login.
    /// </summary>
    public void GetCredentialState()
    {
        var userID = PlayerPrefs.GetString("AppleUserIdKey");
        this.appleAuthManager.GetCredentialState(
                    userID,
                    state =>
                    {
                        switch (state)
                        {
                            case CredentialState.Authorized:
                                // User ID is still valid. Login the user.
                                //Debug.Log("User ID is valid!");
                                QuickLoginApple();
                                break;

                            case CredentialState.Revoked:
                                // User ID was revoked. Go to login screen.
                                //Debug.Log("User ID was revoked.");
                                if (AuthenticationService.Instance.IsSignedIn)
                                {
                                    AuthenticationService.Instance.SignOut();
                                }
                                SignInApple();
                                break;

                            case CredentialState.NotFound:
                                // User ID was not found. Go to login screen.
                                //Debug.Log("User ID was not found.");
                                SignInApple();
                                break;
                        }
                    },
                    error =>
                    {
                        // Something went wrong
                        //Debug.Log("Credential Failed");
                        if (AuthenticationService.Instance.IsSignedIn)
                        {
                            AuthenticationService.Instance.SignOut();
                        }
                        SignInApple();
                        return;
                    });
    }

    /// <summary>
    /// Gets the Apple Identity Token to Authenticate the user.
    /// Stores username, userID, Identity Token and email in Player Prefs.
    /// Returns the Identity Token.
    /// </summary>
    /// <returns></returns>
    private Task<string> GetAppleIdTokenAsync()
    {
        var tcs = new TaskCompletionSource<string>();

        if (appleAuthManager == null) return null;

        var loginArgs = new AppleAuthLoginArgs(LoginOptions.IncludeFullName);

        this.appleAuthManager.LoginWithAppleId(
            loginArgs,
            credential =>
            {
                //      Obtained credential, cast it to IAppleIDCredential
                var appleIdCredential = credential as IAppleIDCredential;
                if (appleIdCredential != null)
                {
                    // Apple User ID
                    // You should save the user ID somewhere in the device
                    if (appleIdCredential.User != null)
                    {
                        var userID = appleIdCredential.User;
                        PlayerPrefs.SetString("AppleUserIdKey", userID);
                    }
                    else
                    {
                        var userID = PlayerPrefs.GetString("AppleUserIdKey", "123456");
                    }


                    // Email (Received ONLY in the first login)
                    /*email = appleIdCredential.Email;
                        PlayerPrefs.SetString("AppleUserEmailKey", email);*/

                    // Full name (Received ONLY in the first login)
                    //userName = appleIdCredential.FullName.GivenName;


                    // Identity token
                    var idToken = Encoding.UTF8.GetString(
                        appleIdCredential.IdentityToken,
                        0,
                        appleIdCredential.IdentityToken.Length);

                    tcs.SetResult(idToken);

                    PlayerPrefs.SetString("AppleTokenIdKey", idToken);

                    // Authorization code
                    var AuthCode = Encoding.UTF8.GetString(
                                appleIdCredential.AuthorizationCode,
                                0,
                                appleIdCredential.AuthorizationCode.Length);

                    // And now you have all the information to create/login a user in your system

                }
                else
                {
                    tcs.SetException(new Exception("Retrieving Apple Id Token failed."));
                }
            },
            error =>
            {
                // Something went wrong
                tcs.SetException(new Exception("Retrieving Apple Id Token failed."));
                var authorizationErrorCode = error.GetAuthorizationErrorCode();
                return;
            });

        return tcs.Task;

    }

    async Task SignInWithAppleAsync(string idToken)
    {
        try
        {
            await AuthenticationService.Instance.SignInWithAppleAsync(idToken);
            //Debug.Log("SignIn is successful.");
            SetPlayerData(AuthenticationService.Instance.PlayerId);

            GameCenterLogin();
        }
        catch (AuthenticationException ex)
        {
            // Compare error code to AuthenticationErrorCodes
            // Notify the player with the proper error message
            //Debug.LogException(ex);
            couldntLogIn = true;
        }
        catch (RequestFailedException ex)
        {
            // Compare error code to CommonErrorCodes
            // Notify the player with the proper error message
            //Debug.LogException(ex);
            couldntLogIn = true;
        }
    }

    async Task SignInWithGooglePlayGamesAsync(string authCode)
    {
        try
        {
            await AuthenticationService.Instance.SignInWithGooglePlayGamesAsync(authCode);
            Debug.Log("SignIn Google is successful.");
            SetPlayerData(AuthenticationService.Instance.PlayerId);
            loggedIn = true;

        }
        catch (AuthenticationException ex)
        {
            // Compare error code to AuthenticationErrorCodes
            // Notify the player with the proper error message
            //Debug.LogException(ex);
            couldntLogIn = true;
        }
        catch (RequestFailedException ex)
        {
            // Compare error code to CommonErrorCodes
            // Notify the player with the proper error message
            //Debug.LogException(ex);
            couldntLogIn = true;
        }
    }

    void ProcessAuthentication(bool success)
    {
        if (success)
        {
#if UNITY_IOS
            loggedIn = true;
#elif UNITY_ANDROID
            PlayGamesPlatform.Instance.RequestServerSideAccess(false, code =>
            {
                SignInGoogle(code);
            });
#endif
        }
        else
        {
            couldntLogIn = true;
        }
    }

#if UNITY_ANDROID
    private void ProcessAuthentication(SignInStatus obj)
    {
        if (obj == SignInStatus.Success)
        {
            PlayGamesPlatform.Instance.RequestServerSideAccess(false, code =>
            {
                SignInGoogle(code);
            });
        }
        else
        {
            couldntLogIn = true;
        }
    }
#endif

    public static void AddScoreToLeaderboard()
    {
        if (Social.localUser.authenticated)
        {
#if UNITY_IOS
                Social.ReportScore(playerScore, "AllTimeLeader", success => { });
#elif UNITY_ANDROID
            PlayGamesPlatform.Instance.ReportScore(playerScore, "CgkItYzmyokEEAIQAg", success => { });
#endif
        }
    }

    public static void AddScoreToSkillLeaderboard()
    {
        if (Social.localUser.authenticated)
        {
#if UNITY_IOS
                Social.ReportScore(playerScore, "SkillLeader", success => { });
#elif UNITY_ANDROID
            PlayGamesPlatform.Instance.ReportScore(playerScore, "CgkItYzmyokEEAIQAw", success => { });
#endif
        }
    }

    public static void AddPlays(int valueToReport)
    {
        if (Social.localUser.authenticated)
        {
#if UNITY_IOS
                Social.ReportScore(valueToReport, "AllTimeGames", success => { });
#elif UNITY_ANDROID
            PlayGamesPlatform.Instance.ReportScore(valueToReport, "CgkItYzmyokEEAIQBg", success => { });
#endif
        }
    }

    public static void AddWins(int valueToReport)
    {
        if (Social.localUser.authenticated)
        {
#if UNITY_IOS
                Social.ReportScore(valueToReport, "AllTimeWins", success => { });
#elif UNITY_ANDROID
            PlayGamesPlatform.Instance.ReportScore(valueToReport, "CgkItYzmyokEEAIQBA", success => { });
#endif
        }
    }

    public static void AddWinPercent(float valueToReport)
    {
        if (Social.localUser.authenticated)
        {
            long valueAsLong = (long)(valueToReport * 100);
#if UNITY_IOS
                Social.ReportScore(valueAsLong, "AllTimeWinPercent", success => { });
#elif UNITY_ANDROID
            PlayGamesPlatform.Instance.ReportScore(valueAsLong, "CgkItYzmyokEEAIQBQ", success => { });
#endif
        }
    }


    public void ShowLeaderboard()
    {
        if (Social.localUser.authenticated)
        {
            Social.ShowLeaderboardUI();
        }
        else
        {
            Debug.Log("NOT SIGNED IN!");
        }
    }


    public void SignInAccount()
    {
#if UNITY_ANDROID
        LoginGooglePlayGames();
#elif UNITY_IOS
        SignInApple();
#endif
    }

    /*
     * DEPRECATED
     * 
    public void SignOutAccount()
    {
#if UNITY_ANDROID
        PlayGamesPlatform.Instance.SignOut();
        AuthenticationService.Instance.SignOut();
        Debug.Log("Signed OUT!");
#endif
    }*/

    public void ShowAchievements()
    {
        if (Social.localUser.authenticated)
        {
            Social.ShowAchievementsUI();
        }
    }

    /// <summary>
    /// Loads player data from cloud or creates a new player.
    /// </summary>
    /// <param name="id"></param>
    private async void SetPlayerData(string id)
    {
        SavePlayerData incomingSample = await RetrieveSpecificData<SavePlayerData>(id);

        if (incomingSample != null)
        {
            LoadPlayerData(incomingSample);
        }
        else
        {
            LoadPlayerData(id);
        }


    }

    private void LoadPlayerData(SavePlayerData incomingSample)
    {
        player.SetData(incomingSample);
    }

    /// <summary>
    /// Creates new anonymous player
    /// </summary>
    /// <param name="id"></param>
    private void LoadPlayerData(string id)
    {
        player.SetData(id);
    }

    public void ResetPlayerData()
    {
        player.SetData();
    }

    /// <summary>
    /// Saves player data to cloud if user is signed in.
    /// </summary>
    public async void SaveCloudData()
    {
        if (AuthenticationService.Instance.IsSignedIn)
        {
            SavePlayerData data = new SavePlayerData(player);
            await SavePlayersData(AuthenticationService.Instance.PlayerId, data);
        }
    }

    private async Task SavePlayersData(string key, SavePlayerData data)
    {
        try
        {
            // Although we are only saving a single value here, you can save multiple keys
            // and values in a single batch.
            Dictionary<string, object> oneElement = new Dictionary<string, object>
                {
                    { key, data }
                };

            await CloudSaveService.Instance.Data.ForceSaveAsync(oneElement);

            //Debug.Log($"Successfully saved {key}:{value}");
        }
        catch (CloudSaveValidationException e)
        {
            //Debug.LogError(e);
        }
        catch (CloudSaveException e)
        {
            //Debug.LogError(e);
        }
    }

    /// <summary>
    /// Get data from the cloud.
    /// </summary>
    /// <typeparam name="T"></typeparam>
    /// <param name="key"></param>
    /// <returns></returns>
    private async Task<T> RetrieveSpecificData<T>(string key)
    {
        try
        {
            var results = await CloudSaveService.Instance.Data.LoadAsync(new HashSet<string> { key });

            if (results.TryGetValue(key, out string value))
            {
                return JsonUtility.FromJson<T>(value);
            }
            else
            {
                //Debug.Log($"There is no such key as {key}!");
            }
        }
        catch (CloudSaveValidationException e)
        {
            //Debug.LogError(e);
        }
        catch (CloudSaveException e)
        {
            //Debug.LogError(e);
        }

        return default;
    }

    /*public void UnlockAchievements()
    {
        if (Social.localUser.authenticated)
        {
            Social.ReportProgress("", 100f, success => { });
        }
    }*/


}
