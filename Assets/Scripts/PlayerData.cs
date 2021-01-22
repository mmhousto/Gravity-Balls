using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class PlayerData : MonoBehaviour
{
    private static string paddle;
	private static int hiScore, skillHiScore, coins, paddleNum;
    public static int plays;
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
        plays = PlayerPrefs.GetInt("Plays", 0);
        hiScore = PlayerPrefs.GetInt("HighScore", 0);
        skillHiScore = PlayerPrefs.GetInt("SkillHighScore", 0);
        coins = PlayerPrefs.GetInt("Coins", 0);
        ownPaddle1 = PlayerPrefs.GetInt("ownPaddle1", 1);
        ownPaddle2 = PlayerPrefs.GetInt("ownPaddle2", 0);
        ownPaddle3 = PlayerPrefs.GetInt("ownPaddle3", 0);
        ownPaddle4 = PlayerPrefs.GetInt("ownPaddle4", 0);
        ownPaddle5 = PlayerPrefs.GetInt("ownPaddle5", 0);
        paddlePath = PlayerPrefs.GetString("Paddle", "Paddles/begginer-paddle.svg");
        paddleNum = PlayerPrefs.GetInt("selectedPaddle", 0);
        volume = PlayerPrefs.GetString("gameVolume", "medium");
        musicOn = PlayerPrefs.GetInt("music", 1);
    }

    // Update is called once per frame
    void Update()
    {
        plays = PlayerPrefs.GetInt("Plays", 0);
        hiScore = PlayerPrefs.GetInt("HighScore", 0);
        skillHiScore = PlayerPrefs.GetInt("SkillHighScore", 0);
        coins = PlayerPrefs.GetInt("Coins", 0);
        ownPaddle1 = PlayerPrefs.GetInt("ownPaddle1", 1);
        ownPaddle2 = PlayerPrefs.GetInt("ownPaddle2", 0);
        ownPaddle3 = PlayerPrefs.GetInt("ownPaddle3", 0);
        ownPaddle4 = PlayerPrefs.GetInt("ownPaddle4", 0);
        ownPaddle5 = PlayerPrefs.GetInt("ownPaddle5", 0);
        paddlePath = PlayerPrefs.GetString("Paddle", "Paddles/begginer-paddle.svg");
        paddleNum = PlayerPrefs.GetInt("selectedPaddle", 0);
        volume = PlayerPrefs.GetString("gameVolume", "medium");
        musicOn = PlayerPrefs.GetInt("music", 1);
    }

    public static void addPlay(){
        plays += 1;
        PlayerPrefs.SetInt("Plays", plays);
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
