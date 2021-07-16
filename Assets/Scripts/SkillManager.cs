using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class SkillManager : MonoBehaviour
{
	public static int lives = 1, coins, newCoins;
	public GameObject gameOver, pauseMenu, settingsMenu, counter, pauseBtn, scoreBox;
    private bool isSettingsActive = false;
    private GameObject settingsBtns;
    // Start is called before the first frame update
    void Start()
    {
        settingsBtns = GameObject.FindWithTag("settingsSound");
        
        StartCoroutine(Wait());
        //GameObject.FindGameObjectWithTag("Audio").GetComponent<AudioManager>().PlayMusic();

        PlayerData.addPlay();
        Time.timeScale = 1;
        lives = 1;
        PlayerPrefs.SetInt("CoinsC", 0);
        coins = PlayerPrefs.GetInt("CoinsC", 0);
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
        settingsBtns.gameObject.SetActive(true);
    }

    public void DeactivateSettingsBtns()
    {
        settingsBtns.gameObject.SetActive(false);
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
        SceneManager.LoadScene("gameSkill");
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
        if(lives < 1){
            PlayerPrefs.SetInt("CoinsC", coins);
            PlayServices.AddScoreToSkillLeaderboard();
            pauseBtn.gameObject.SetActive(false);
            gameOver.gameObject.SetActive(true);
            if(isSettingsActive == true) {
        		gameOver.gameObject.SetActive(false);
            }
            if(isSettingsActive == false) {
      	    	gameOver.gameObject.SetActive(true);
            }
        	Time.timeScale = 0;
        }

    }

    public static void Death() {
    	lives -= 1;
    }
}
