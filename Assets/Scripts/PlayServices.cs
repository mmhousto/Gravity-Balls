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
    // Start is called before the first frame update
    void Start()
    {
        DontDestroyOnLoad(this);
        #if UNITY_IPHONE
        Social.localUser.Authenticate (ProcessAuthentication);
        #elif UNITY_ANDROID
        try
        {
            PlayGamesClientConfiguration config = new PlayGamesClientConfiguration.Builder().Build();
            PlayGamesPlatform.InitializeInstance(config);
            PlayGamesPlatform.DebugLogEnabled = true;
            PlayGamesPlatform.Activate();
            Social.localUser.Authenticate((bool success) => {
                if (success)
                {
                    Debug.Log("Logged In!");
                }
                else
                {
                    Debug.Log("Failed to Login!");
                }
            });
        }
        catch (Exception exception)
        {
            Debug.Log(exception);
        }
        #else
        //do error things here
        #endif
    }

    void ProcessAuthentication(bool success) {
        if(success) {
            Debug.Log ("Authentication successful");
            Social.CreateLeaderboard();
            Social.CreateLeaderboard().id = "AllTimeLeader";

        }
        else
        {
            Debug.Log ("Failed to authenticate");
        }
    }

    public static void AddScoreToLeaderboard()
    {
        if (Social.localUser.authenticated)
        {
            #if UNITY_IPHONE
                Social.ReportScore(playerScore, "AllTimeLeader", success => { });
            #elif UNITY_ANDROID
                Social.ReportScore(playerScore, "CgkIqYy2998KEAIQAA", success => { });
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
                Social.ReportScore(playerScore, "", success => { });
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
