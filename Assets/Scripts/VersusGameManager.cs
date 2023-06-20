using System;
using System.Collections;


using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;


using Photon.Pun;
using Photon.Realtime;


namespace Com.MorganHouston.PaddleBalls
{

    public class VersusGameManager : MonoBehaviourPunCallbacks
    {

        #region Public Fields

        [Tooltip("The prefab to use for representing the player")]
        public GameObject playerPrefab;
        public GameObject life1, life2, life3, p2Life1, p2Life2, p2Life3;
        public static int coins, newCoins;
        public GameObject gameOver, pauseMenu, settingsMenu, counter, pauseBtn, btnMusic, btnSound;
        public static VersusGameManager Instance;

        #endregion


        #region Private Fields

        private bool isSettingsActive = false;

        private static bool playersConnected = false, gameStarted = false, isGameOver = false;

        private GameObject brickWall, brickWall2;

        private static int brickHits, brick2Hits;

        private Collider wall, wall2, switchL, switchR;

        private int readyPlayers = 0;

        private Toggle toggle1, toggle2;

        private Button rematchBtn;

        private bool isPaused;

        #endregion


        #region Photon Callbacks


        /// <summary>
        /// Called when the local player left the room. We need to load the launcher scene.
        /// </summary>
        public override void OnLeftRoom()
        {
            //ActivateSettingsBtns();
            SceneManager.LoadScene(0);

            base.OnLeftRoom();
        }

        public override void OnPlayerEnteredRoom(Player other)
        {
            Debug.LogFormat("OnPlayerEnteredRoom() {0}", other.NickName); // not seen if you're the player connecting


            if (PhotonNetwork.IsMasterClient)
            {
                Debug.LogFormat("OnPlayerEnteredRoom IsMasterClient {0}", PhotonNetwork.IsMasterClient); // called before OnPlayerLeftRoom

                gameOver.gameObject.SetActive(false);
                PlayerManager.ResetLives();
                LoadArena();
            }
        }


        public override void OnPlayerLeftRoom(Player other)
        {
            Debug.LogFormat("OnPlayerLeftRoom() {0}", other.NickName); // seen when other disconnects


            if (PhotonNetwork.IsMasterClient)
            {
                Debug.LogFormat("OnPlayerLeftRoom IsMasterClient {0}", PhotonNetwork.IsMasterClient); // called before OnPlayerLeftRoom

                gameOver.gameObject.SetActive(false);
                PlayerManager.ResetLives();
                PhotonNetwork.LeaveRoom();
            }
        }


        #endregion


        #region RPCs


        #endregion


        #region MonoBehaviour CallBacks


        // Start is called before the first frame update
        void Start()
        {
            Instance = this;
            //StartCoroutine(Wait());
            
            //GameObject.FindGameObjectWithTag("Audio").GetComponent<AudioManager>().PlayMusic();

            // spawn 
            if (playerPrefab == null)
            {
                Debug.LogError("<Color=Red><a>Missing</a></Color> playerPrefab Reference. Please set it up in GameObject 'Game Manager'", this);
            }
            else
            {
                if (PlayerManager.LocalPlayerInstance == null)
                {
                    Debug.LogFormat("We are Instantiating LocalPlayer from {0}", Application.loadedLevelName);
                    // we're in a room. spawn a character for the local player. it gets synced by using PhotonNetwork.Instantiate
                    if (PhotonNetwork.CurrentRoom.PlayerCount == 1)
                    {
                        PhotonNetwork.Instantiate(this.playerPrefab.name, new Vector3(0f, -3.45f, -0.2f), Quaternion.identity, 0);
                    }
                    else if (PhotonNetwork.CurrentRoom.PlayerCount == 2)
                    {
                        PhotonNetwork.Instantiate(this.playerPrefab.name, new Vector3(0f, 3.45f, -0.2f), Quaternion.identity, 0);
                    }
                }
                else
                {
                    Debug.LogFormat("Ignoring scene load for {0}", SceneManagerHelper.ActiveSceneName);
                }

            }

            brickHits = 0;

            brickWall = GameObject.Find("Environment").transform.Find("BrickWall").gameObject;
            brickWall.SetActive(false);
            brickWall2 = GameObject.Find("Environment").transform.Find("BrickWall2").gameObject;
            brickWall2.SetActive(false);
            wall = GameObject.Find("WallL").GetComponent<Collider>();
            wall2 = GameObject.Find("WallR").GetComponent<Collider>();
            switchL = GameObject.FindWithTag("switchL").GetComponent<Collider>();
            switchR = GameObject.FindWithTag("switchR").GetComponent<Collider>();
            toggle1 = GameObject.FindWithTag("Ready").GetComponent<Toggle>();
            toggle2 = GameObject.FindWithTag("Ready2").GetComponent<Toggle>();
            rematchBtn = GameObject.Find("btnRestart").GetComponent<Button>();

            // disable switches
#if UNITY_IOS
            switchL.enabled = false;
            switchR.enabled = false;
#elif UNITY_ANDROID
            switchL.enabled = false;
            switchR.enabled = false;
#else
#endif

            // Collisions to ignore
            Physics.IgnoreLayerCollision(3, 8);

            PlayerData.addPlay();
            PhotonNetwork.InstantiateRoomObject(counter.name, new Vector3(0f, 0f, 0f), Quaternion.identity, 0);

            Time.timeScale = 1;
            PlayerPrefs.SetInt("CoinsC", 0);
            coins = PlayerPrefs.GetInt("CoinsC", 0);
            gameOver.SetActive(false);
            settingsMenu.SetActive(false);
        }

        // Update is called once per frame
        void Update()
        {
            // Handles lives
            HandleLives();

            if(isGameOver == true)
            {
                ShowReadyPlayers();
            }
            
        }

        #endregion


        #region Private Methods

        IEnumerator Wait()
        {
            yield return new WaitForSeconds(0.01f);
            DeactivateSettingsBtns();
        }

        void LoadArena()
        {
            if (!PhotonNetwork.IsMasterClient)
            {
                Debug.LogError("PhotonNetwork : Trying to Load a level but we are not the master Client");
            }
            Debug.LogFormat("PhotonNetwork : Loading Level : {0}", PhotonNetwork.CurrentRoom.PlayerCount);
            //ActivateSettingsBtns();
            PhotonNetwork.LoadLevel("Room for " + PhotonNetwork.CurrentRoom.PlayerCount);
        }

        IEnumerator RestartingGame()
        {
            yield return new WaitForSeconds(1f);
            restartGame();
        }


        #endregion


        #region Public Methods

        public void ActivateSettingsBtns()
        {
            btnMusic.gameObject.SetActive(true);
            btnSound.gameObject.SetActive(true);
        }

        public void DeactivateSettingsBtns()
        {
            btnMusic.gameObject.SetActive(false);
            btnSound.gameObject.SetActive(false);
        }

        public void ToSettings()
        {
            if (isPaused)
            {
                settingsMenu.SetActive(true);
                pauseMenu.SetActive(false);
            }
            else if (isGameOver)
            {
                settingsMenu.SetActive(true);
                gameOver.SetActive(false);
            }
        }

        public void BackSettings()
        {
            if (isPaused)
            {
                settingsMenu.SetActive(false);
                pauseMenu.SetActive(true);
            }
            else if (isGameOver)
            {
                settingsMenu.SetActive(false);
                gameOver.SetActive(true);
            }
        }

        public void ShowReadyPlayers()
        {
            switch (readyPlayers)
            {
                case 2:
                    toggle1.isOn = true;
                    toggle2.isOn = true;
                    StartCoroutine(RestartingGame());

                    break;
                case 1:
                    toggle1.isOn = true;
                    toggle2.isOn = false;
                    break;
                case 0:
                    toggle1.isOn = false;
                    toggle2.isOn = false;
                    break;
                default:
                    toggle1.isOn = false;
                    toggle2.isOn = false;
                    break;
            }
        }

        public void PlayerReady()
        {
            photonView.RPC("RpcPlayerReady", RpcTarget.MasterClient);
            rematchBtn.interactable = false;
        }

        [PunRPC]
        public void RpcPlayerReady()
        {
            readyPlayers++;
            Debug.Log(readyPlayers);
        }

        public void Leave()
        {
            PhotonNetwork.LeaveRoom();
        }

        public static void collectCoin()
        {
            coins += 1;
        }

        public void PauseGame()
        {
            Time.timeScale = 0;
            pauseMenu.gameObject.SetActive(true);
            isPaused = true;
        }

        public void ResumeGame()
        {
            pauseMenu.gameObject.SetActive(false);
            Time.timeScale = 1;
            isPaused = false;
        }

        public void restartGame()
        {
            //counter.gameObject.SetActive(false);
            //pauseBtn.gameObject.SetActive(true);
            //gameOver.gameObject.SetActive(false);
            photonView.RPC("RpcRestartScene", RpcTarget.All);
            //coinManager.collectedCoins();
            //coins = 0;
            //PlayerPrefs.SetInt("CoinsC", coins);
        }

        [PunRPC]
        public void RpcRestartScene()
        {
            PlayerManager.ResetLives();
            PhotonNetwork.LoadLevel("Room for 2");
        }

        public void loadMenu()
        {
            Destroy(GameObject.Find("PlayerData"));
            Destroy(GameObject.Find("PlayServices"));
            SceneManager.LoadScene(0);
        }

        public void HandleLives()
        {
            // Player 1 lives
            switch (PlayerManager.GetP1Lives())
            {
                case 3:
                    isGameOver = false;
                    life1.gameObject.SetActive(true);
                    life2.gameObject.SetActive(true);
                    life3.gameObject.SetActive(true);
                    break;
                case 2:
                    life1.gameObject.SetActive(true);
                    life2.gameObject.SetActive(true);
                    life3.gameObject.SetActive(false);
                    break;
                case 1:
                    life1.gameObject.SetActive(true);
                    life2.gameObject.SetActive(false);
                    life3.gameObject.SetActive(false);
                    break;
                case 0:
                    isGameOver = true;
                    isPaused = false;
                    PlayerPrefs.SetInt("CoinsC", coins);
                    //PlayServices.AddScoreToLeaderboard();
                    life1.gameObject.SetActive(false);
                    life2.gameObject.SetActive(false);
                    life3.gameObject.SetActive(false);
                    pauseBtn.gameObject.SetActive(false);
                    gameOver.gameObject.SetActive(true);
                    settingsMenu.gameObject.SetActive(false);
                    Time.timeScale = 0;
                    break;
                default:
                    isGameOver = true;
                    isPaused = false;
                    PlayerPrefs.SetInt("CoinsC", coins);
                    //PlayServices.AddScoreToLeaderboard();
                    life1.gameObject.SetActive(false);
                    life2.gameObject.SetActive(false);
                    life3.gameObject.SetActive(false);
                    pauseBtn.gameObject.SetActive(false);
                    gameOver.gameObject.SetActive(true);
                    settingsMenu.gameObject.SetActive(false);
                    Time.timeScale = 0;
                    break;
            }

            // Player 2 lives
            switch (PlayerManager.GetP2Lives())
            {
                case 3:
                    isGameOver = false;
                    p2Life1.gameObject.SetActive(true);
                    p2Life2.gameObject.SetActive(true);
                    p2Life3.gameObject.SetActive(true);
                    break;
                case 2:
                    p2Life1.gameObject.SetActive(true);
                    p2Life2.gameObject.SetActive(true);
                    p2Life3.gameObject.SetActive(false);
                    break;
                case 1:
                    p2Life1.gameObject.SetActive(true);
                    p2Life2.gameObject.SetActive(false);
                    p2Life3.gameObject.SetActive(false);
                    break;
                case 0:
                    isGameOver = true;
                    isPaused = false;
                    PlayerPrefs.SetInt("CoinsC", coins);
                    //PlayServices.AddScoreToLeaderboard();
                    p2Life1.gameObject.SetActive(false);
                    p2Life2.gameObject.SetActive(false);
                    p2Life3.gameObject.SetActive(false);
                    pauseBtn.gameObject.SetActive(false);
                    gameOver.gameObject.SetActive(true);
                    settingsMenu.gameObject.SetActive(false);
                    Time.timeScale = 0;
                    break;
                default:
                    isGameOver = true;
                    isPaused = false;
                    PlayerPrefs.SetInt("CoinsC", coins);
                    //PlayServices.AddScoreToLeaderboard();
                    p2Life1.gameObject.SetActive(false);
                    p2Life2.gameObject.SetActive(false);
                    p2Life3.gameObject.SetActive(false);
                    pauseBtn.gameObject.SetActive(false);
                    gameOver.gameObject.SetActive(true);
                    settingsMenu.gameObject.SetActive(false);
                    Time.timeScale = 0;
                    break;
            }

            #endregion
        }
    }
}