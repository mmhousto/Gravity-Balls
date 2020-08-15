using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class hiScoreLbl : MonoBehaviour
{
	private TextMeshProUGUI ScoreLbl;
	private static int hiScore;
    // Start is called before the first frame update
    void Start()
    {
        ScoreLbl = GetComponent<TextMeshProUGUI>();
        hiScore = PlayerPrefs.GetInt("HighScore", 0);
    }

    // Update is called once per frame
    void Update()
    {
        hiScore = PlayerPrefs.GetInt("HighScore", 0);
        ScoreLbl.text = hiScore.ToString();
    }
}
