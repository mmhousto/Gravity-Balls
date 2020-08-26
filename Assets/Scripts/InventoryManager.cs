using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEditor;
using UnityEngine.UI;
using TMPro;

public class InventoryManager : MonoBehaviour
{
	public GameObject Paddle1, Paddle2, Paddle3, Paddle4, Paddle5;
	public GameObject paddleBasic, paddleDark, paddlePro;
	public List<GameObject> paddlesT = new List<GameObject>();
	private TextMeshProUGUI paddleName, priceLbl;
	private int coins;
	private string[] sprites = new string[] {"Paddles/begginer-paddle.svg", "Paddles/paddle-dark.svg", "Paddles/paddle-pro.svg"};
	private int[] price = new int[] {0, 20, 50, 5, 5};
	private int[] ownPaddle = new int[] {1, 0, 0, 0, 0};
    private GameObject selectedPaddle;
    // Start is called before the first frame update
    void Start()
    {
        paddlesT.Add(Paddle1);
        paddlesT.Add(Paddle2);
        paddlesT.Add(Paddle3);
        paddlesT.Add(Paddle4);
        paddlesT.Add(Paddle5);
        coins = PlayerPrefs.GetInt("Coins");
        selectedPaddle = paddlesT[PlayerPrefs.GetInt("selectedPaddle")];
        for(int i = 0; i < ownPaddle.Length; i++) {
            ownPaddle[i] = PlayerPrefs.GetInt("ownPaddle" + (i+1), ownPaddle[i]);
        }
    }
    // Update is called once per frame
    void Update()
    {
        selectedPaddle = paddlesT[PlayerPrefs.GetInt("selectedPaddle")];
        for(int i = 0; i < ownPaddle.Length; i++) {
            ownPaddle[i] = PlayerPrefs.GetInt("ownPaddle" + (i+1), ownPaddle[i]);
        }
        for(int i = 0; i < paddlesT.Count; i++) {
            var children = paddlesT[i].GetComponentsInChildren<Transform>();
        		if(ownPaddle[i] == 1) {
                    foreach (var child in children) {
                        if(child.name == "txt"){
                            if(selectedPaddle == paddlesT[i]){
                                    child.GetComponent<TextMeshProUGUI>().text = "USING";
                                } else {
                                    child.GetComponent<TextMeshProUGUI>().text = "USE";
                                }
                        }
                    }
        		} else {
                    foreach (var child in children) {
                        if(child.name == "txt"){
                            child.GetComponent<TextMeshProUGUI>().text = "BUY";
                        }
                    }
        		}

        }
        
    }

    public void btn1Clicked() {
        if(ownPaddle[0] == 1){
            selectPaddle1();
        } else {
            buyPaddle1();
        }

    }

    public void selectPaddle1() {
    	selectedPaddle = paddlesT[0];
        PlayerPrefs.SetInt("selectedPaddle", 0);
    }

    public void buyPaddle1() {
    	if(coins >= price[0]) {
    		coins -= price[0];
    		PlayerPrefs.SetInt("Coins", coins);
    		ownPaddle[0] = 1;
            PlayerPrefs.SetInt("ownPaddle1", 1);
    	} else {
    	//not enough coins
    	}
    }

    public void btn2Clicked() {
        if(ownPaddle[1] == 1){
            selectPaddle2();
        } else {
            buyPaddle2();
        }

    }

    public void selectPaddle2() {
        selectedPaddle = paddlesT[1];
        PlayerPrefs.SetInt("selectedPaddle", 1);
    }

    public void buyPaddle2() {
        if(coins >= price[1]) {
            coins -= price[1];
            PlayerPrefs.SetInt("Coins", coins);
            ownPaddle[1] = 1;
            PlayerPrefs.SetInt("ownPaddle2", 1);
        } else {
        //not enough coins
        }
    }

    public void btn3Clicked() {
        if(ownPaddle[2] == 1){
            selectPaddle3();
        } else {
            buyPaddle3();
        }

    }

    public void selectPaddle3() {
        selectedPaddle = paddlesT[2];
        PlayerPrefs.SetInt("selectedPaddle", 2);
    }

    public void buyPaddle3() {
        if(coins >= price[2]) {
            coins -= price[2];
            PlayerPrefs.SetInt("Coins", coins);
            ownPaddle[2] = 1;
            PlayerPrefs.SetInt("ownPaddle3", 1);
        } else {
        //not enough coins
        }
    }

    public void btnRedClicked() {
        if(ownPaddle[3] == 1){
            selectPaddleRed();
        } else {
            buyPaddleRed();
        }

    }

    public void selectPaddleRed() {
        selectedPaddle = paddlesT[3];
        PlayerPrefs.SetInt("selectedPaddle", 3);
    }

    public void buyPaddleRed() {
        if(coins >= price[3]) {
            coins -= price[3];
            PlayerPrefs.SetInt("Coins", coins);
            ownPaddle[3] = 1;
            PlayerPrefs.SetInt("ownPaddle4", 1);
        } else {
        //not enough coins
        }
    }

    public void btnGoldClicked() {
        if(ownPaddle[4] == 1){
            selectPaddleGold();
        } else {
            buyPaddleGold();
        }

    }

    public void selectPaddleGold() {
        selectedPaddle = paddlesT[4];
        PlayerPrefs.SetInt("selectedPaddle", 4);
    }

    public void buyPaddleGold() {
        if(coins >= price[4]) {
            coins -= price[4];
            PlayerPrefs.SetInt("Coins", coins);
            ownPaddle[4] = 1;
            PlayerPrefs.SetInt("ownPaddle5", 1);
        } else {
        //not enough coins
        }
    }

}
