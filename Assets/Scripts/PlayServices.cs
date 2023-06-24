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

public class PlayServices : MonoBehaviour
{
    private static PlayServices _instance;

    public static PlayServices Instance { get { return _instance; } }

    static int playerScore;
    public GameObject signIn, signOut;
    public string token;
    public bool loggedIn;

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
#else
        signIn.SetActive(false);
        signOut.SetActive(false);
#endif
    }

    // Start is called before the first frame update
    void Start()
    {
#if UNITY_IPHONE
        Social.localUser.Authenticate (ProcessAuthentication);

#elif UNITY_ANDROID
        LoginGooglePlayGames();
#endif
    }

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

    async void SignInGoogle(string code)
    {
        await SignInWithGooglePlayGamesAsync(code);
    }

    async void InitUGS()
    {
        await UnityServices.InitializeAsync();
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

    void ProcessAuthentication(bool success) {
        if(success) {
            
        }
        else
        {
            //Debug.Log ("Failed to authenticate");
        }
    }

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

    public async void SavePlayersData(string key, SavePlayerData data)
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
