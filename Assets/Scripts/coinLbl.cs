using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class coinLbl : MonoBehaviour
{
	private TextMeshProUGUI coinsLbl;
	private static int coins;
    // Start is called before the first frame update
    void Start()
    {
    	coinsLbl = GetComponent<TextMeshProUGUI>();
        coinsLbl.text = PlayerData.Instance.getcoins().ToString();
    }

    // Update is called once per frame
    void Update()
    {
        coinsLbl.text = PlayerData.Instance.getcoins().ToString();
    }
}
