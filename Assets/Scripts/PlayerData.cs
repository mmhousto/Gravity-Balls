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
    // Start is called before the first frame update
    void Start()
    {
        hiScore = PlayerPrefs.GetInt("HighScore", 0);
        coins = PlayerPrefs.GetInt("Coins", 0);
        paddlePath = PlayerPrefs.GetString("Paddle", "Paddles/begginer-paddle.svg");
        paddleNum = PlayerPrefs.GetInt("selectedPaddle", 0);
    }

    // Update is called once per frame
    void Update()
    {
        hiScore = PlayerPrefs.GetInt("HighScore", 0);
        coins = PlayerPrefs.GetInt("Coins", 0);
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
