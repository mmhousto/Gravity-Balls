using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class SkillManager : MonoBehaviour
{
	public static int lives = 1, coins, newCoins;
	public GameObject gameOver, pauseMenu, settingsMenu, counter, pauseBtn, scoreBox;
    private bool isSettingsActive = false;
    private bool isPaused, isGameOver;

    // Start is called before the first frame update
    void Start()
    {
        
        StartCoroutine(Wait());
        //GameObject.FindGameObjectWithTag("Audio").GetComponent<AudioManager>().PlayMusic();

        PlayerData.addPlay();
        Time.timeScale = 1;
        lives = 1;
        PlayerPrefs.SetInt("CoinsC", 0);
        coins = PlayerPrefs.GetInt("CoinsC", 0);
        gameOver.SetActive(false);
        scoreBox.SetActive(true);
        isPaused = false;
        isGameOver = false;
    }

    IEnumerator Wait()
    {
        yield return new WaitForSeconds(0.01f);
        settingsMenu.SetActive(false);
    }

    public static void collectCoin() {
        coins += 1;
    }

    public void puaseGame(){
        Time.timeScale = 0;
        pauseMenu.SetActive(true);
        scoreBox.SetActive(false);
        isPaused = true;
    }

    public void resumeGame(){
        pauseMenu.SetActive(false);
        scoreBox.SetActive(true);
        Time.timeScale = 1;
        isPaused = false;
    }

    public void restartGame(){
        SceneManager.LoadScene("gameSkill");
        counter.SetActive(true);
        coinManager.collectedCoins();
        coins = 0;
        PlayerPrefs.SetInt("CoinsC", coins);
    }

    public void ToSettings()
    {
        isSettingsActive = true;

        if (isGameOver)
            gameOver.SetActive(false);
        else if (isPaused)
            pauseMenu.SetActive(false);

        settingsMenu.SetActive(true);
        scoreBox.SetActive(false);
    }

    public void OffSettings()
    {
        settingsMenu.SetActive(false);

        if (isGameOver)
            gameOver.SetActive(true);
        else if (isPaused)
            pauseMenu.SetActive(true);

        isSettingsActive = false;
        scoreBox.SetActive(true);
    }

    public void loadMenu(){
        Destroy(GameObject.Find("PlayerData"));
        Destroy(GameObject.Find("PlayServices"));
        SceneManager.LoadScene(0);
    }
    // Update is called once per frame
    void Update()
    {
        if(lives < 1){
            isPaused = false;
            isGameOver = true;
            pauseMenu.SetActive(false);
            PlayerPrefs.SetInt("CoinsC", coins);
            PlayServices.AddScoreToSkillLeaderboard();
            pauseBtn.SetActive(false);
            gameOver.SetActive(true);
            if(isSettingsActive == true) {
        		gameOver.SetActive(false);
            }
            if(isSettingsActive == false) {
      	    	gameOver.SetActive(true);
            }
        	Time.timeScale = 0;
        }

    }

    public static void Death() {
    	lives -= 1;
    }
}
