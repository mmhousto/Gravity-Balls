using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class PlayerData : MonoBehaviour
{
    private static string paddle;
	private static int hiScore, skillHiScore, coins, paddleNum;
    public static int plays, wins, losses;
	private string paddlePath;
    private int ownPaddle1 = 1;
    private int ownPaddle2 = 0;
    private int ownPaddle3 = 0;
    private int ownPaddle4 = 0;
    private int ownPaddle5 = 0;
    private static int musicOn = 1;
    private static string volume = "medium";

    // Start is called before the first frame update
    void Start()
    {
        if (plays != PlayerPrefs.GetInt("Plays", 0))
            plays = PlayerPrefs.GetInt("Plays", 0);
        if (wins != PlayerPrefs.GetInt("Wins", 0))
            wins = PlayerPrefs.GetInt("Wins", 0);
        if (losses != PlayerPrefs.GetInt("Losses", 0))
            losses = PlayerPrefs.GetInt("Losses", 0);
        if (hiScore != PlayerPrefs.GetInt("HighScore", 0))
            hiScore = PlayerPrefs.GetInt("HighScore", 0);
        if (skillHiScore != PlayerPrefs.GetInt("SkillHighScore", 0))
            skillHiScore = PlayerPrefs.GetInt("SkillHighScore", 0);
        if (coins != PlayerPrefs.GetInt("Coins", 0))
            coins = PlayerPrefs.GetInt("Coins", 0);
        if (ownPaddle1 != PlayerPrefs.GetInt("ownPaddle1", 0))
            ownPaddle1 = PlayerPrefs.GetInt("ownPaddle1", 1);
        if (ownPaddle2 != PlayerPrefs.GetInt("ownPaddle2", 0))
            ownPaddle2 = PlayerPrefs.GetInt("ownPaddle2", 0);
        if (ownPaddle3 != PlayerPrefs.GetInt("ownPaddle3", 0))
            ownPaddle3 = PlayerPrefs.GetInt("ownPaddle3", 0);
        if (ownPaddle4 != PlayerPrefs.GetInt("ownPaddle4", 0))
            ownPaddle4 = PlayerPrefs.GetInt("ownPaddle4", 0);
        if (ownPaddle5 != PlayerPrefs.GetInt("ownPaddle5", 0))
            ownPaddle5 = PlayerPrefs.GetInt("ownPaddle5", 0);
        if (paddlePath != PlayerPrefs.GetString("Paddle", "Paddles/begginer-paddle.svg"))
            paddlePath = PlayerPrefs.GetString("Paddle", "Paddles/begginer-paddle.svg");
        if (paddleNum != PlayerPrefs.GetInt("selectedPaddle", 0))
            paddleNum = PlayerPrefs.GetInt("selectedPaddle", 0);
        if (volume != PlayerPrefs.GetString("gameVolume", "medium"))
            volume = PlayerPrefs.GetString("gameVolume", "medium");
        if(musicOn != PlayerPrefs.GetInt("music", 1))
            musicOn = PlayerPrefs.GetInt("music", 1);
    }

    // Update is called once per frame
    void Update()
    {
        if(plays != PlayerPrefs.GetInt("Plays", 0))
            plays = PlayerPrefs.GetInt("Plays", 0);
        if(wins != PlayerPrefs.GetInt("Wins", 0))
            wins = PlayerPrefs.GetInt("Wins", 0);
        if (losses != PlayerPrefs.GetInt("Losses", 0))
            losses = PlayerPrefs.GetInt("Losses", 0);
        if (hiScore != PlayerPrefs.GetInt("HighScore", 0))
            hiScore = PlayerPrefs.GetInt("HighScore", 0);
        if (skillHiScore != PlayerPrefs.GetInt("SkillHighScore", 0))
            skillHiScore = PlayerPrefs.GetInt("SkillHighScore", 0);
        if (coins != PlayerPrefs.GetInt("Coins", 0))
            coins = PlayerPrefs.GetInt("Coins", 0);
        if (ownPaddle1 != PlayerPrefs.GetInt("ownPaddle1", 0))
            ownPaddle1 = PlayerPrefs.GetInt("ownPaddle1", 1);
        if (ownPaddle2 != PlayerPrefs.GetInt("ownPaddle2", 0))
            ownPaddle2 = PlayerPrefs.GetInt("ownPaddle2", 0);
        if (ownPaddle3 != PlayerPrefs.GetInt("ownPaddle3", 0))
            ownPaddle3 = PlayerPrefs.GetInt("ownPaddle3", 0);
        if (ownPaddle4 != PlayerPrefs.GetInt("ownPaddle4", 0))
            ownPaddle4 = PlayerPrefs.GetInt("ownPaddle4", 0);
        if (ownPaddle5 != PlayerPrefs.GetInt("ownPaddle5", 0))
            ownPaddle5 = PlayerPrefs.GetInt("ownPaddle5", 0);
        if (paddlePath != PlayerPrefs.GetString("Paddle", "Paddles/begginer-paddle.svg"))
            paddlePath = PlayerPrefs.GetString("Paddle", "Paddles/begginer-paddle.svg");
        if (paddleNum != PlayerPrefs.GetInt("selectedPaddle", 0))
            paddleNum = PlayerPrefs.GetInt("selectedPaddle", 0);
        if (volume != PlayerPrefs.GetString("gameVolume", "medium"))
            volume = PlayerPrefs.GetString("gameVolume", "medium");
        if (musicOn != PlayerPrefs.GetInt("music", 1))
            musicOn = PlayerPrefs.GetInt("music", 1);
    }

    public static void addPlay(){
        plays += 1;
        PlayerPrefs.SetInt("Plays", plays);
        PlayServices.AddPlays(plays);
    }

    public static void AddWin()
    {
        wins++;
        PlayerPrefs.SetInt("Wins", wins);
        PlayServices.AddWins(wins);
        float winPercent = Mathf.Round((wins / (losses + wins) * 100f) / 100f);
        PlayServices.AddWinPercent(winPercent);
    }

    public static void AddLoss()
    {
        losses++;
        PlayerPrefs.SetInt("Losses", losses);
        float winPercent = Mathf.Round((wins / (losses + wins) * 100f)/100f);
        PlayServices.AddWinPercent(winPercent);
    }

    public static int getMusicOn() {
        return musicOn;
    }

    public static string getVolume() {
        return volume;
    }

    public static int getHiScore(){
        return hiScore;
    }

    public static int getSkillHiScore(){
        return skillHiScore;
    }

    public static int getcoins(){
        return coins;
    }
}
