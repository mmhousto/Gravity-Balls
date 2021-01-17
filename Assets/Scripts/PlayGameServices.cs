using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using GooglePlayGames;
using GooglePlayGames.BasicApi;
using UnityEngine.SocialPlatforms;


public class PlayGameServices : MonoBehaviour
{

    public static PlayGamesPlatform platform;
    // Start is called before the first frame update
    void Start()
    {
        if(platform == null)
        {
            PlayGamesClientConfiguration config = new PlayGamesClientConfiguration.Builder().Build();
            PlayGamesPlatform.InitializeInstance(config);
            PlayGamesPlatform.DebugLogEnabled = true;

            platform = PlayGamesPlatform.Activate();
        }

        Social.Active.localUser.Authenticate(success =>
        {
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

    // Update is called once per frame
    void Update()
    {
        
    }
}
