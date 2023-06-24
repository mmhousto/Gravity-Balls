using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class GameManager : MonoBehaviour
{
	public static int lives, coins, newCoins;
	public GameObject life1, life2, life3, life4, life5, life6, gameOver, pauseMenu, settingsMenu, counter, pauseBtn, scoreBox;
    private bool isSettingsActive = false;
    private bool isPaused, isGameOver;

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
        life1.SetActive(true);
        life2.SetActive(true);
        life3.SetActive(true);
        life4.SetActive(true);
        life5.SetActive(true);
        life6.SetActive(false);
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
        SceneManager.LoadScene("gameSingle");
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
        if (isGameOver == false)
        {
            if (lives > 6)
            {
                lives = 6;
            }
            switch (lives)
            {
                case 6:
                    life1.SetActive(true);
                    life2.SetActive(true);
                    life3.SetActive(true);
                    life4.SetActive(true);
                    life5.SetActive(true);
                    life6.SetActive(true);
                    break;
                case 5:
                    life1.SetActive(true);
                    life2.SetActive(true);
                    life3.SetActive(true);
                    life4.SetActive(true);
                    life5.SetActive(true);
                    life6.SetActive(false);
                    break;
                case 4:
                    life1.SetActive(true);
                    life2.SetActive(true);
                    life3.SetActive(true);
                    life4.SetActive(true);
                    life5.SetActive(false);
                    life6.SetActive(false);
                    break;
                case 3:
                    life1.SetActive(true);
                    life2.SetActive(true);
                    life3.SetActive(true);
                    life4.SetActive(false);
                    life5.SetActive(false);
                    life6.SetActive(false);
                    break;
                case 2:
                    life1.SetActive(true);
                    life2.SetActive(true);
                    life3.SetActive(false);
                    life4.SetActive(false);
                    life5.SetActive(false);
                    life6.SetActive(false);
                    break;
                case 1:
                    life1.SetActive(true);
                    life2.SetActive(false);
                    life3.SetActive(false);
                    life4.SetActive(false);
                    life5.SetActive(false);
                    life6.SetActive(false);
                    break;
                case 0:
                    isGameOver = true;
                    isPaused = false;
                    PlayerPrefs.SetInt("CoinsC", coins);
                    PlayServices.AddScoreToLeaderboard();
                    life1.SetActive(false);
                    life2.SetActive(false);
                    life3.SetActive(false);
                    life4.SetActive(false);
                    life5.SetActive(false);
                    life6.SetActive(false);
                    pauseBtn.SetActive(false);
                    pauseMenu.SetActive(false);
                    gameOver.SetActive(true);
                    if (isSettingsActive == true)
                    {
                        gameOver.SetActive(false);
                    }
                    if (isSettingsActive == false)
                    {
                        gameOver.SetActive(true);
                    }
                    Time.timeScale = 0;
                    break;
                default:
                    isGameOver = true;
                    isPaused = false;
                    PlayerPrefs.SetInt("CoinsC", coins);
                    PlayServices.AddScoreToLeaderboard();
                    life1.SetActive(false);
                    life2.SetActive(false);
                    life3.SetActive(false);
                    life4.SetActive(false);
                    life5.SetActive(false);
                    life6.SetActive(false);
                    pauseBtn.SetActive(false);
                    pauseMenu.SetActive(false);
                    gameOver.SetActive(true);
                    if (isSettingsActive == true)
                    {
                        gameOver.SetActive(false);
                    }
                    if (isSettingsActive == false)
                    {
                        gameOver.SetActive(true);
                    }
                    Time.timeScale = 0;
                    break;
            }
        }

    }

    public static void Death() {
    	lives -= 1;
    }
}
