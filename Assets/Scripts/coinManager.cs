using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class coinManager : MonoBehaviour
{
	private TextMeshProUGUI coinLbl;
	public static int Coins;
    public static int coinsCollected;
    public static bool collected = false;
    public GameObject gameOver;
    // Start is called before the first frame update
    void Start()
    {
        collected = false;
    	coinLbl = GetComponent<TextMeshProUGUI>();
        Coins = PlayerPrefs.GetInt("Coins", 0);
        coinsCollected = PlayerPrefs.GetInt("CoinsC", 0);
    }

    // Update is called once per frame
    void Update()
    {
        Coins = PlayerPrefs.GetInt("Coins", 0);
        coinsCollected = PlayerPrefs.GetInt("CoinsC", 0);
        coinLbl.text = "+"+coinsCollected.ToString();
        if (gameOver.activeSelf & !collected) {
            collected = true;
            Coins = Coins + coinsCollected;
            PlayerPrefs.SetInt("Coins", Coins);
        }
    }

    public static void collectedCoins(){
        collected = false;
    }

    // public static void AddCoin() {
    //     Coins += 1;
    //     PlayerPrefs.SetInt("Coins", Coins);
    // }

}
