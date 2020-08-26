using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class PlayerData : MonoBehaviour
{
    private static string paddle;
	private static int hiScore, coins, paddleNum;
	private string paddlePath;
    private int ownPaddle1 = 1;
    private int ownPaddle2 = 0;
    private int ownPaddle3 = 0;
    private int ownPaddle4 = 0;
    private int ownPaddle5 = 0;
    // Start is called before the first frame update
    void Start()
    {
        hiScore = PlayerPrefs.GetInt("HighScore", 0);
        coins = PlayerPrefs.GetInt("Coins", 0);
        ownPaddle1 = PlayerPrefs.GetInt("ownPaddle1", 1);
        ownPaddle2 = PlayerPrefs.GetInt("ownPaddle2", 0);
        ownPaddle3 = PlayerPrefs.GetInt("ownPaddle3", 0);
        ownPaddle4 = PlayerPrefs.GetInt("ownPaddle4", 0);
        ownPaddle5 = PlayerPrefs.GetInt("ownPaddle5", 0);
        paddlePath = PlayerPrefs.GetString("Paddle", "Paddles/begginer-paddle.svg");
        paddleNum = PlayerPrefs.GetInt("selectedPaddle", 0);
    }

    // Update is called once per frame
    void Update()
    {
        hiScore = PlayerPrefs.GetInt("HighScore", 0);
        coins = PlayerPrefs.GetInt("Coins", 0);
        ownPaddle1 = PlayerPrefs.GetInt("ownPaddle1", 1);
        ownPaddle2 = PlayerPrefs.GetInt("ownPaddle2", 0);
        ownPaddle3 = PlayerPrefs.GetInt("ownPaddle3", 0);
        ownPaddle4 = PlayerPrefs.GetInt("ownPaddle4", 0);
        ownPaddle5 = PlayerPrefs.GetInt("ownPaddle5", 0);
        paddlePath = PlayerPrefs.GetString("Paddle", "Paddles/begginer-paddle.svg");
        paddleNum = PlayerPrefs.GetInt("selectedPaddle", 0);
    }

    public static int getHiScore(){
        return hiScore;
    }

    public static int getcoins(){
        return coins;
    }
}
