using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class PlayerData : MonoBehaviour
{
    private static PlayerData _instance;

    public static PlayerData Instance { get { return _instance; } }

    public int hiScore, skillHiScore, coins, paddleNum;
    public int plays, wins, losses;
    public string paddlePath;
    public int ownPaddle1 = 1;
    public int ownPaddle2 = 0;
    public int ownPaddle3 = 0;
    public int ownPaddle4 = 0;
    public int ownPaddle5 = 0;
    private static int musicOn = 1;
    private static string volume = "medium";

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
    }

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
        if (musicOn != PlayerPrefs.GetInt("music", 1))
            musicOn = PlayerPrefs.GetInt("music", 1);
    }

    // Update is called once per frame
    void Update()
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
        if (musicOn != PlayerPrefs.GetInt("music", 1))
            musicOn = PlayerPrefs.GetInt("music", 1);
    }

    public void SetData()
    {
        plays = 0;
        wins = 0;
        losses = 0;
        hiScore = 0;
        skillHiScore = 0;
        coins = 0;
        ownPaddle1 = 1;
        ownPaddle2 = 0;
        ownPaddle3 = 0;
        ownPaddle4 = 0;
        ownPaddle5 = 0;
        paddlePath = "Paddles/begginer-paddle.svg";
        paddleNum = 0;
    }

    public void SetData(SavePlayerData data)
    {
        plays = data.plays;
        wins = data.wins;
        losses = data.losses;
        hiScore = data.hiScore;
        skillHiScore = data.skillHiScore;
        coins = data.coins;
        ownPaddle1 = data.ownPaddle1;
        ownPaddle2 = data.ownPaddle2;
        ownPaddle3 = data.ownPaddle3;
        ownPaddle4 = data.ownPaddle4;
        ownPaddle5 = data.ownPaddle5;
        paddlePath = data.paddlePath;
        paddleNum = data.paddleNum;
    }

    public void SetData(string id)
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
    }

    public void addPlay()
    {
        plays += 1;
        PlayerPrefs.SetInt("Plays", plays);
        PlayServices.AddPlays(plays);
        Debug.Log($"PLAYS: {plays}");
    }

    public void AddWin()
    {
        wins++;
        PlayerPrefs.SetInt("Wins", wins);
        PlayServices.AddWins(wins);
        float winPercent = Mathf.Round((wins / (losses + wins) * 100f) / 100f);
        PlayServices.AddWinPercent(winPercent);
    }

    public void AddLoss()
    {
        losses++;
        PlayerPrefs.SetInt("Losses", losses);
        float winPercent = Mathf.Round((wins / (losses + wins) * 100f) / 100f);
        PlayServices.AddWinPercent(winPercent);
    }

    public static int getMusicOn()
    {
        return musicOn;
    }

    public static string getVolume()
    {
        return volume;
    }

    public int getHiScore()
    {
        return hiScore;
    }

    public int getSkillHiScore()
    {
        return skillHiScore;
    }

    public int getcoins()
    {
        return coins;
    }
}
