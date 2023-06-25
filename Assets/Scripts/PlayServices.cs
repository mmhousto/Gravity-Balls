using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;
using Unity.Services.Core;
using Unity.Services.Authentication;
using Unity.Services.CloudSave;
using GooglePlayGames;
using GooglePlayGames.BasicApi;
using UnityEngine.SocialPlatforms;
using System.Threading.Tasks;
#if UNITY_IOS
using Apple.GameKit;
#endif

public class PlayServices : MonoBehaviour
{
    private static PlayServices _instance;

    public static PlayServices Instance { get { return _instance; } }

    static int playerScore;
    public string token;
    public bool loggedIn;
    string Signature;
    string TeamPlayerID;
    string Salt;
    string PublicKeyUrl;
    string Timestamp;

    // Player Data Object
    private PlayerData player;

    void Awake()
    {
        if(_instance != null && _instance != this)
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
        PlayGamesPlatform.DebugLogEnabled = true;
        PlayGamesPlatform.Activate();
#endif
    }

    // Start is called before the first frame update
    void Start()
    {
        player = GetComponent<PlayerData>();

#if UNITY_IPHONE
        Social.localUser.Authenticate (ProcessAuthentication);

#elif UNITY_ANDROID
        LoginGooglePlayGames();
#endif
    }

#if UNITY_ANDROID
    private void LoginGooglePlayGames()
    {
        PlayGamesPlatform.Instance.Authenticate(SignInInteractivity.CanPromptOnce, (success) =>
        {
            if (success == SignInStatus.Success)
            {
                //Debug.Log("Login with Google Play games successful.");

                token = PlayGamesPlatform.Instance.GetServerAuthCode();
                SignInGoogle(token);
            }
            else
            {
                //"Failed to retrieve Google play games authorization code";
                //Debug.Log("Login Unsuccessful");
            }
        });
    }
#endif

    async void SignInGoogle(string code)
    {
        await SignInWithGooglePlayGamesAsync(code);
    }

    async void InitUGS()
    {
        await UnityServices.InitializeAsync();
    }

#if UNITY_IOS
    public async Task LoginAppleGameCenter()
    {
        if (!GKLocalPlayer.Local.IsAuthenticated)
        {
            // Perform the authentication.
            var player = await GKLocalPlayer.Authenticate();
            Debug.Log($"GameKit Authentication: player {player}");

            // Grab the display name.
            var localPlayer = GKLocalPlayer.Local;
            Debug.Log($"Local Player: {localPlayer.DisplayName}");

            // Fetch the items.
            var fetchItemsResponse = await GKLocalPlayer.Local.FetchItems();

            Signature = Convert.ToBase64String(fetchItemsResponse.GetSignature());
            TeamPlayerID = localPlayer.TeamPlayerId;
            Debug.Log($"Team Player ID: {TeamPlayerID}");

            Salt = Convert.ToBase64String(fetchItemsResponse.GetSalt());
            PublicKeyUrl = fetchItemsResponse.PublicKeyUrl;
            Timestamp = fetchItemsResponse.Timestamp.ToString();


            /*Debug.Log($"GameKit Authentication: signature => {Signature}");
            Debug.Log($"GameKit Authentication: publickeyurl => {PublicKeyUrl}");
            Debug.Log($"GameKit Authentication: salt => {Salt}");
            Debug.Log($"GameKit Authentication: Timestamp => {Timestamp}");*/
            await SignInWithAppleGameCenterAsync(Signature, TeamPlayerID, PublicKeyUrl, Salt, Convert.ToUInt64(Timestamp));
        }
        else
        {
            Debug.Log("AppleGameCenter player already logged in.");
        }
    }
#endif

    async Task SignInWithAppleGameCenterAsync(string signature, string teamPlayerId, string publicKeyURL, string salt, ulong timestamp)
    {
        try
        {
            await AuthenticationService.Instance.SignInWithAppleGameCenterAsync(signature, teamPlayerId, publicKeyURL, salt, timestamp);
            //Debug.Log("SignIn is successful.");
            SetPlayerData(AuthenticationService.Instance.PlayerId);
        }
        catch (AuthenticationException ex)
        {
            // Compare error code to AuthenticationErrorCodes
            // Notify the player with the proper error message
            //Debug.LogException(ex);
        }
        catch (RequestFailedException ex)
        {
            // Compare error code to CommonErrorCodes
            // Notify the player with the proper error message
            //Debug.LogException(ex);
        }
    }

    async Task SignInWithGooglePlayGamesAsync(string authCode)
    {
        try
        {
            await AuthenticationService.Instance.SignInWithGooglePlayGamesAsync(authCode);
            //Debug.Log("SignIn is successful.");
            SetPlayerData(AuthenticationService.Instance.PlayerId);

        }
        catch (AuthenticationException ex)
        {
            // Compare error code to AuthenticationErrorCodes
            // Notify the player with the proper error message
            //Debug.LogException(ex);
        }
        catch (RequestFailedException ex)
        {
            // Compare error code to CommonErrorCodes
            // Notify the player with the proper error message
            //Debug.LogException(ex);
        }
    }

    #if UNITY_IOS

    async void LoginApple()
    {
        await LoginAppleGameCenter();
    }

    void ProcessAuthentication(bool success) {
        if(success) {
            LoginApple();
        }
        else
        {
            //Debug.Log ("Failed to authenticate");
        }
    }
#endif

    public static void AddScoreToLeaderboard()
    {
        if (Social.localUser.authenticated)
        {
#if UNITY_IPHONE
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
#if UNITY_IPHONE
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
#if UNITY_IPHONE
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
#if UNITY_IPHONE
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
#if UNITY_IPHONE
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
#endif
    }

    public void SignOutAccount()
    {
#if UNITY_ANDROID
        PlayGamesPlatform.Instance.SignOut();
        AuthenticationService.Instance.SignOut();
        Debug.Log("Signed OUT!");
#endif
    }

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

    private void ResetPlayerData()
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

    // Update is called once per frame
    void Update()
    {
        playerScore = score.GetScore();
    }
}
