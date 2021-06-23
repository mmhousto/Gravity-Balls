using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class VersusGameManager : MonoBehaviour
{
    public static int p1Lives = 3, p2Lives = 3, coins, newCoins;
    public GameObject gameOver, pauseMenu, settingsMenu, counter, pauseBtn, scoreBox;
    private bool isSettingsActive = false;

    private static bool playersConnected = false, gameStarted = false;
    // Start is called before the first frame update
    void Start()
    {
        //playersConnected = PasswordNetworkManager.EveryoneConnected();
        PlayerData.addPlay();
        counter.gameObject.SetActive(false);
        Time.timeScale = 0;
        PlayerPrefs.SetInt("CoinsC", 0);
        coins = PlayerPrefs.GetInt("CoinsC", 0);
        gameOver.gameObject.SetActive(false);
        scoreBox.gameObject.SetActive(false);
    }

    public static void collectCoin()
    {
        coins += 1;
    }

    public void puaseGame()
    {
        Time.timeScale = 0;
        pauseMenu.gameObject.SetActive(true);
        scoreBox.gameObject.SetActive(false);

    }

    public void resumeGame()
    {
        pauseMenu.gameObject.SetActive(false);
        scoreBox.gameObject.SetActive(true);
        Time.timeScale = 1;
    }

    public void restartGame()
    {
        SceneManager.LoadScene("gameVersus");
        counter.gameObject.SetActive(false);
        coinManager.collectedCoins();
        coins = 0;
        PlayerPrefs.SetInt("CoinsC", coins);
    }

    public void toSettings()
    {
        isSettingsActive = true;
        scoreBox.gameObject.SetActive(false);
    }

    public void offSettings()
    {
        isSettingsActive = false;
        scoreBox.gameObject.SetActive(true);
    }

    public void loadMenu()
    {
        Destroy(GameObject.Find("PlayerData"));
        SceneManager.LoadScene(0);
    }
    // Update is called once per frame
    void Update()
    {
        //playersConnected = PasswordNetworkManager.EveryoneConnected();

        if (p1Lives < 1)
        {
            PlayerPrefs.SetInt("CoinsC", coins);
            //PlayServices.AddScoreToSkillLeaderboard();
            pauseBtn.gameObject.SetActive(false);
            gameOver.gameObject.SetActive(true);
            if (isSettingsActive == true)
            {
                gameOver.gameObject.SetActive(false);
            }
            if (isSettingsActive == false)
            {
                gameOver.gameObject.SetActive(true);
            }
            Time.timeScale = 0;
        } else if (p2Lives < 1)
        {
            PlayerPrefs.SetInt("CoinsC", coins);
            //PlayServices.AddScoreToSkillLeaderboard();
            pauseBtn.gameObject.SetActive(false);
            gameOver.gameObject.SetActive(true);
            if (isSettingsActive == true)
            {
                gameOver.gameObject.SetActive(false);
            }
            if (isSettingsActive == false)
            {
                gameOver.gameObject.SetActive(true);
            }
            Time.timeScale = 0;
        }

        /*if (playersConnected && gameStarted == false)
        {
            gameStarted = true;
            counter.gameObject.SetActive(true);
            Time.timeScale = 1;
        }
        else if (playersConnected)
        {
            Time.timeScale = 1;
        }
        else if (!playersConnected)
        {
            counter.gameObject.SetActive(false);
            Time.timeScale = 0;
        }*/

    }

    public static void Death()
    {
        p1Lives -= 1;
    }

    public static void P2Death()
    {
        p2Lives -= 1;
    }
}