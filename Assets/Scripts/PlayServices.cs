using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;
using GooglePlayGames;
using GooglePlayGames.BasicApi;
using UnityEngine.SocialPlatforms;

public class PlayServices : MonoBehaviour
{
    static int playerScore;
    public GameObject signIn, signOut;

    void Awake()
    {
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
        DontDestroyOnLoad(this);
#if UNITY_IPHONE
        Social.localUser.Authenticate (ProcessAuthentication);

#elif UNITY_ANDROID
        PlayGamesPlatform.Instance.Authenticate(SignInInteractivity.CanPromptOnce, (result) =>
        {
            Debug.Log(result);
            switch (result)
            {
                case SignInStatus.Success:
                    Debug.Log("Signed In!");
                    break;
                default:
                    Debug.Log("Error Signing In!");
                    break;
            }
        });
#endif
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
        PlayGamesPlatform.Instance.Authenticate(SignInInteractivity.CanPromptAlways, (result) =>
        {
            Debug.Log(result);
        });
#endif
    }

    public void SignOutAccount()
    {
#if UNITY_ANDROID
        PlayGamesPlatform.Instance.SignOut();
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
