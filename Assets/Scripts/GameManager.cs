using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class GameManager : MonoBehaviour
{
	public static int lives, coins, newCoins;
	public GameObject life1, life2, life3, life4, life5, life6, gameOver, pauseMenu, settingsMenu, counter, pauseBtn, scoreBox;
    private GameObject settingsBtns;
    private bool isSettingsActive = false;

    private void Awake()
    {
        settingsBtns = GameObject.FindWithTag("settingsSound");
    }

    // Start is called before the first frame update
    void Start()
    {
        StartCoroutine(Wait());
        //GameObject.FindGameObjectWithTag("Audio").GetComponent<AudioManager>().PlayMusic();

        PlayerData.addPlay();
        Time.timeScale = 1;
        lives = 5;
        PlayerPrefs.SetInt("CoinsC", 0);
        coins = PlayerPrefs.GetInt("CoinsC", 0);
        life1.gameObject.SetActive(true);
        life2.gameObject.SetActive(true);
        life3.gameObject.SetActive(true);
        life4.gameObject.SetActive(true);
        life5.gameObject.SetActive(true);
        life6.gameObject.SetActive(false);
        gameOver.gameObject.SetActive(false);
        scoreBox.gameObject.SetActive(true);
    }

    IEnumerator Wait()
    {
        yield return new WaitForSeconds(0.01f);
        DeactivateSettingsBtns();
    }

    public void ActivateSettingsBtns()
    {
        settingsBtns.SetActive(true);
    }

    public void DeactivateSettingsBtns()
    {
        settingsBtns.SetActive(false);
    }

    public static void collectCoin() {
        coins += 1;
    }

    public void puaseGame(){
        Time.timeScale = 0;
        pauseMenu.gameObject.SetActive(true);
        scoreBox.gameObject.SetActive(false);

    }

    public void resumeGame(){
        pauseMenu.gameObject.SetActive(false);
        scoreBox.gameObject.SetActive(true);
        Time.timeScale = 1;
    }

    public void restartGame(){
        ActivateSettingsBtns();
        SceneManager.LoadScene("gameSingle");
        counter.gameObject.SetActive(true);
        coinManager.collectedCoins();
        coins = 0;
        PlayerPrefs.SetInt("CoinsC", coins);
    }

    public void toSettings()
    {
        isSettingsActive = true;
        ActivateSettingsBtns();
        scoreBox.gameObject.SetActive(false);
    }

    public void offSettings()
    {
        isSettingsActive = false;
        DeactivateSettingsBtns();
        scoreBox.gameObject.SetActive(true);
    }

    public void loadMenu(){
        ActivateSettingsBtns();
        Destroy(GameObject.Find("PlayerData"));
        Destroy(GameObject.Find("PlayServices"));
        SceneManager.LoadScene(0);
    }
    // Update is called once per frame
    void Update()
    {
        if(lives > 6){
        	lives = 6;
        }
        switch(lives) {
        	case 6:
        		life1.gameObject.SetActive(true);
        		life2.gameObject.SetActive(true);
        		life3.gameObject.SetActive(true);
        		life4.gameObject.SetActive(true);
        		life5.gameObject.SetActive(true);
        		life6.gameObject.SetActive(true);
        		break;
        	case 5:
        		life1.gameObject.SetActive(true);
        		life2.gameObject.SetActive(true);
        		life3.gameObject.SetActive(true);
        		life4.gameObject.SetActive(true);
        		life5.gameObject.SetActive(true);
        		life6.gameObject.SetActive(false);
        		break;
        	case 4:
        		life1.gameObject.SetActive(true);
        		life2.gameObject.SetActive(true);
        		life3.gameObject.SetActive(true);
        		life4.gameObject.SetActive(true);
        		life5.gameObject.SetActive(false);
        		life6.gameObject.SetActive(false);
        		break;
        	case 3:
        		life1.gameObject.SetActive(true);
        		life2.gameObject.SetActive(true);
        		life3.gameObject.SetActive(true);
        		life4.gameObject.SetActive(false);
        		life5.gameObject.SetActive(false);
        		life6.gameObject.SetActive(false);
        		break;
        	case 2:
        		life1.gameObject.SetActive(true);
        		life2.gameObject.SetActive(true);
        		life3.gameObject.SetActive(false);
        		life4.gameObject.SetActive(false);
        		life5.gameObject.SetActive(false);
        		life6.gameObject.SetActive(false);
        		break;
        	case 1:
        		life1.gameObject.SetActive(true);
        		life2.gameObject.SetActive(false);
        		life3.gameObject.SetActive(false);
        		life4.gameObject.SetActive(false);
        		life5.gameObject.SetActive(false);
        		life6.gameObject.SetActive(false);
        		break;
        	case 0:
                PlayerPrefs.SetInt("CoinsC", coins);
                PlayServices.AddScoreToLeaderboard();
                life1.gameObject.SetActive(false);
        		life2.gameObject.SetActive(false);
        		life3.gameObject.SetActive(false);
        		life4.gameObject.SetActive(false);
        		life5.gameObject.SetActive(false);
        		life6.gameObject.SetActive(false);
        		pauseBtn.gameObject.SetActive(false);
                gameOver.gameObject.SetActive(true);
                if(isSettingsActive == true) {
        		  gameOver.gameObject.SetActive(false);
                }
                if(isSettingsActive == false) {
                  gameOver.gameObject.SetActive(true);
                }
        		Time.timeScale = 0;
        		break;
        	default:
        		PlayerPrefs.SetInt("CoinsC", coins);
                PlayServices.AddScoreToLeaderboard();
                life1.gameObject.SetActive(false);
        		life2.gameObject.SetActive(false);
        		life3.gameObject.SetActive(false);
        		life4.gameObject.SetActive(false);
        		life5.gameObject.SetActive(false);
        		life6.gameObject.SetActive(false);
        		pauseBtn.gameObject.SetActive(false);
                gameOver.gameObject.SetActive(true);
                if(isSettingsActive == true) {
        		  gameOver.gameObject.SetActive(false);
                }
                if(isSettingsActive == false) {
                  gameOver.gameObject.SetActive(true);
                }
        		Time.timeScale = 0;
        		break;
        }

    }

    public static void Death() {
    	lives -= 1;
    }
}
