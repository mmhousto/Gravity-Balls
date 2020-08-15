using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class score : MonoBehaviour
{
	private TextMeshProUGUI scoreLabel;
    public TextMeshProUGUI hiScoreLabel;
	public static int Score;
    public static int HiScore;
    void Start()
    {
    	scoreLabel = GetComponent<TextMeshProUGUI>();
    	Score = 0;
        HiScore = PlayerPrefs.GetInt("HighScore", 0);

    }

    // Update is called once per frame
    void Update()
    {
        scoreLabel.text = Score.ToString();
        if(Score > HiScore){
            HiScore = Score;
            PlayerPrefs.SetInt("HighScore", HiScore);

        }
        hiScoreLabel.text = HiScore.ToString();
    }

    public static void AddPoint() {
    	Score += 1;
    }
}
