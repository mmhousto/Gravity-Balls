using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
using UnityEngine.SceneManagement;

public class hiScoreLbl : MonoBehaviour
{
	private TextMeshProUGUI ScoreLbl;
	private static int hiScore, skillHiScore;
    private string scene;
    // Start is called before the first frame update
    void Start()
    {
        scene = SceneManager.GetActiveScene().name;
        ScoreLbl = GetComponent<TextMeshProUGUI>();
        hiScore = PlayerPrefs.GetInt("HighScore", 0);
        skillHiScore = PlayerPrefs.GetInt("SkillHighScore", 0);
        
    }

    // Update is called once per frame
    void Update()
    {
        if(scene == "gameSkill") {
            skillHiScore = PlayerPrefs.GetInt("SkillHighScore", 0);
            ScoreLbl.text = skillHiScore.ToString();
        } else {
            hiScore = PlayerPrefs.GetInt("HighScore", 0);
            ScoreLbl.text = hiScore.ToString();
        }
        
    }
}
