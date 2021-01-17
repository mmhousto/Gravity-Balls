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
    }

    public static void AddScoreToLeaderboard()
    {
        if (Social.localUser.authenticated)
        {
            Social.ReportScore(playerScore, "CgkIqYy2998KEAIQAA", success => { });
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
