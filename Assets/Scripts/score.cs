using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
using UnityEngine.SceneManagement;

public class score : MonoBehaviour
{
	private TextMeshProUGUI scoreLabel;
    public TextMeshProUGUI hiScoreLabel;
	public static int Score;
    public static int HiScore, SkillHiScore;
    private string scene;
    void Start()
    {
    	scoreLabel = GetComponent<TextMeshProUGUI>();
    	Score = 0;
        HiScore = PlayerPrefs.GetInt("HighScore", 0);
        SkillHiScore = PlayerPrefs.GetInt("SkillHighScore", 0);
        scene = SceneManager.GetActiveScene().name;
    }

    // Update is called once per frame
    void Update()
    {
        scoreLabel.text = Score.ToString();
        if(scene == "gameSingle") {
            if(Score > HiScore){
                HiScore = Score;
                PlayerPrefs.SetInt("HighScore", HiScore);
            }

        hiScoreLabel.text = HiScore.ToString();

        } else if (scene == "gameSkill") {
            if(Score > SkillHiScore){
                SkillHiScore = Score;
                PlayerPrefs.SetInt("SkillHighScore", SkillHiScore);
            }

        hiScoreLabel.text = SkillHiScore.ToString();

        }
        
    }

    public static int GetScore()
    {
        return Score;
    }

    public static void AddPoint() {
    	Score += 1;
    }
}
