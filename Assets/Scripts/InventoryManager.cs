using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEditor;
using UnityEngine.UI;
using TMPro;

// Interface used to select paddles
public interface IUseable<T> {
    void Use(T paddleInt);
}

// Interface used to buy paddles
public interface IBuyable<T> {
    void Buy(T paddlePrice);
}

public class InventoryManager : MonoBehaviour, IUseable<int>, IBuyable<int> {
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
    void Start() {
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
    void Update() {
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
                        if(child.name == "txt") {
                            child.GetComponent<TextMeshProUGUI>().text = "BUY";
                        }
                    }
        		}

        }
        
    }

    /* The Use interface method, used to select paddles you own to play with */
    public void Use(int paddleInt) {
        selectedPaddle = paddlesT[paddleInt];
        PlayerPrefs.SetInt("selectedPaddle", paddleInt);
    }

    /* The Buy interface method, used to buy paddles if sufficient coins */
    public void Buy(int paddleInt) {
        if(coins >= price[paddleInt]) {
            coins -= price[paddleInt];
            PlayerPrefs.SetInt("Coins", coins);
            ownPaddle[paddleInt] = 1;
            PlayerPrefs.SetInt("ownPaddle1", 1);
        } else {
        //not enough coins
        }
    }

    // Basic Paddle
    public void btn1Clicked() {
        // if player owns paddle then select it, else buy. 
        if(ownPaddle[0] == 1) {
            Use(0);// calls use interface method
        } else {
            Buy(0);// calls buy interface mathod
        }

    }

    // Dark Paddle
    public void btn2Clicked() {
        if(ownPaddle[1] == 1) {
            Use(1);
        } else {
            Buy(1);
        }

    }

    // Pro
    public void btn3Clicked() {
        if(ownPaddle[2] == 1) {
            Use(2);
        } else {
            Buy(2);
        }

    }

    // Red
    public void btnRedClicked() {
        if(ownPaddle[3] == 1) {
            Use(3);
        } else {
            Buy(3);
        }

    }

    //Gold
    public void btnGoldClicked() {
        if(ownPaddle[4] == 1) {
            Use(4);
        } else {
            Buy(4);
        }

    }

}
