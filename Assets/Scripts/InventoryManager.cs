using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEditor;
using UnityEngine.UI;
using TMPro;

public class InventoryManager : MonoBehaviour
{
	public GameObject Paddle1, Paddle2, Paddle3;
	public GameObject paddleBasic, paddleDark, paddlePro;
	public List<GameObject> paddlesT = new List<GameObject>();
	private TextMeshProUGUI paddleName, priceLbl;
	private int coins;
	private string[] sprites = new string[] {"Paddles/begginer-paddle.svg", "Paddles/paddle-dark.svg", "Paddles/paddle-pro.svg"};
	private int[] price = new int[] {0, 20, 50};
	private bool[] ownPaddle = new bool[] {true, false, false};
    private GameObject selectedPaddle;
    // Start is called before the first frame update
    void Start()
    {
        paddlesT.Add(Paddle1);
        paddlesT.Add(Paddle2);
        paddlesT.Add(Paddle3);
        GameObject childBtn1 = Paddle1.transform.GetChild(2).gameObject;
        coins = PlayerPrefs.GetInt("Coins");
        selectedPaddle = paddlesT[PlayerPrefs.GetInt("selectedPaddle")];

    }
    // Update is called once per frame
    void Update()
    {
        for(int i = 0; i < paddlesT.Count; i++) {
        		if(ownPaddle[i] == true) {
        			var children = paddlesT[i].GetComponentsInChildren<Transform>();
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
        			var children = paddlesT[i].GetComponentsInChildren<Transform>();
                    foreach (var child in children) {
                        if(child.name == "txt"){
                            child.GetComponent<TextMeshProUGUI>().text = "BUY";
                        }
                    }
        		}

        }
        
    }

    public void btn1Clicked() {
        if(ownPaddle[0] == true){
            selectPaddle1();
        } else {
            buyPaddle1();
        }

    }

    public void selectPaddle1() {
    	selectedPaddle = paddlesT[0];
        PlayerPrefs.SetString("Paddle", "Paddles/begginer-paddle.svg");
        PlayerPrefs.SetInt("selectedPaddle", 0);
    }

    public void buyPaddle1() {
    	if(coins >= price[0]) {
    		coins -= price[0];
    		PlayerPrefs.SetInt("Coins", coins);
    		ownPaddle[0] = true;
    	} else {
    	//not enough coins
    	}
    }

    public void btn2Clicked() {
        if(ownPaddle[1] == true){
            selectPaddle2();
        } else {
            buyPaddle2();
        }

    }

    public void selectPaddle2() {
        selectedPaddle = paddlesT[1];
        PlayerPrefs.SetString("Paddle", "Paddles/paddle-dark.svg");
        PlayerPrefs.SetInt("selectedPaddle", 1);
    }

    public void buyPaddle2() {
        if(coins >= price[1]) {
            coins -= price[1];
            PlayerPrefs.SetInt("Coins", coins);
            ownPaddle[1] = true;
        } else {
        //not enough coins
        }
    }

    public void btn3Clicked() {
        if(ownPaddle[2] == true){
            selectPaddle3();
        } else {
            buyPaddle3();
        }

    }

    public void selectPaddle3() {
        selectedPaddle = paddlesT[2];
        PlayerPrefs.SetString("Paddle", "Paddles/paddle-pro.svg");
        PlayerPrefs.SetInt("selectedPaddle", 2);
    }

    public void buyPaddle3() {
        if(coins >= price[2]) {
            coins -= price[2];
            PlayerPrefs.SetInt("Coins", coins);
            ownPaddle[2] = true;
        } else {
        //not enough coins
        }
    }

}
