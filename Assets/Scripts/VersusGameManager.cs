using System;


using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;


using Photon.Pun;
using Photon.Realtime;
using System.Collections;

namespace Com.MorganHouston.PaddleBalls
{

    public class VersusGameManager : MonoBehaviourPunCallbacks
    {

        #region Public Fields

        [Tooltip("The prefab to use for representing the player")]
        public GameObject playerPrefab;
        public GameObject life1, life2, life3, p2Life1, p2Life2, p2Life3;
        public static int coins, newCoins;
        public GameObject gameOver, pauseMenu, settingsMenu, counter, pauseBtn;
        public static VersusGameManager Instance;

        #endregion


        #region Private Fields

        private bool isSettingsActive = false;

        private static bool playersConnected = false, gameStarted = false;

        public static bool isGameOver = false;

        private GameObject brickWall, brickWall2;

        private static int brickHits, brick2Hits;

        private Collider wall, wall2, switchL, switchR;

        public static int readyPlayers = 0;

        public static int playersSpawned = 0;

        public Toggle toggle1, toggle2;

        public Button rematchBtn;

        private bool isPaused;

        #endregion


        #region Photon Callbacks
        /// <summary>
        /// Called when the local player left the room. We need to load the launcher scene.
        /// </summary>
        public override void OnLeftRoom()
        {
            //ActivateSettingsBtns();
            //SceneManager.LoadScene(0);
            PhotonNetwork.LoadLevel(3);

            base.OnLeftRoom();
        }

        public override void OnDisconnected(DisconnectCause cause)
        {
            //loadMenu();

            base.OnDisconnected(cause);
        }

        public override void OnPlayerEnteredRoom(Player other)
        {
            Debug.LogFormat("OnPlayerEnteredRoom() {0}", other.NickName); // not seen if you're the player connecting


            if (PhotonNetwork.IsMasterClient)
            {
                Debug.LogFormat("OnPlayerEnteredRoom IsMasterClient {0}", PhotonNetwork.IsMasterClient); // called before OnPlayerLeftRoom

                gameOver.SetActive(false);
                PlayerManager.ResetLives();
                playersSpawned = 0;
                LoadArena();
            }
        }


        public override void OnPlayerLeftRoom(Player other)
        {
            Debug.LogFormat("OnPlayerLeftRoom() {0}", other.NickName); // seen when other disconnects

            gameOver.SetActive(false);
            PlayerManager.ResetLives();
            playersSpawned = 0;
            LoadArena();
        }


        #endregion


        #region RPCs


        #endregion


        #region MonoBehaviour CallBacks


        // Start is called before the first frame update
        void Start()
        {
            if (Instance != null) PhotonNetwork.Destroy(this.gameObject);

            Instance = this;
            StartCoroutine(Wait());

            //GameObject.FindGameObjectWithTag("Audio").GetComponent<AudioManager>().PlayMusic();

            // spawn 
            if (playerPrefab == null)
            {
                Debug.LogError("<Color=Red><a>Missing</a></Color> playerPrefab Reference. Please set it up in GameObject 'Game Manager'", this);
            }
            else if (playersSpawned < 1)
            {
                PhotonNetwork.Instantiate(playerPrefab.name, GetSpawnPosition(), Quaternion.identity, 0);
                playersSpawned++;
            }

            brickHits = 0;
            readyPlayers = 0;

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

            if(PhotonNetwork.IsMasterClient)
                PhotonNetwork.InstantiateRoomObject(counter.name, new Vector3(0f, 0f, 0f), Quaternion.identity, 0);

            Time.timeScale = 1;
            PlayerPrefs.SetInt("CoinsC", 0);
            coins = PlayerPrefs.GetInt("CoinsC", 0);
            gameOver.SetActive(false);
        }

        // Update is called once per frame
        void Update()
        {
            // Handles lives
            HandleLives();

            if (isGameOver == true)
            {
                ShowReadyPlayers();
            }
        }

        #endregion


        #region Private Methods

        Vector3 GetSpawnPosition()
        {
            // Determine the spawn position based on whether the client is the host or not
            if (photonView.IsMine)
            {
                return new Vector3(0f, -3.45f, -0.2f); // Spawn position for host
            }
            else
            {
                return new Vector3(0f, 3.45f, -0.2f);
            }
        }

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
            settingsMenu.SetActive(true);
        }

        public void DeactivateSettingsBtns()
        {
            settingsMenu.SetActive(false);
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
                    restartGame();

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

        public void Rematch()
        {
            rematchBtn.interactable = false;
            readyPlayers++;
            PlayerManager.RematchPlayer(readyPlayers);
        }

        [PunRPC]
        public void RpcRematch()
        {
            readyPlayers++;
            
        }

        public void Leave()
        {
            PhotonNetwork.LeaveRoom();
            //PhotonNetwork.Disconnect();
        }

        public static void collectCoin()
        {
            coins += 1;
        }

        public void PauseGame()
        {
            Time.timeScale = 0;
            pauseMenu.SetActive(true);
            isPaused = true;
        }

        public void ResumeGame()
        {
            pauseMenu.SetActive(false);
            Time.timeScale = 1;
            isPaused = false;
        }

        public void restartGame()
        {
            //counter.SetActive(false);
            //pauseBtn.SetActive(true);
            //gameOver.SetActive(false);
            if(PhotonNetwork.IsMasterClient)
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
                    life1.SetActive(true);
                    life2.SetActive(true);
                    life3.SetActive(true);
                    break;
                case 2:
                    life1.SetActive(true);
                    life2.SetActive(true);
                    life3.SetActive(false);
                    break;
                case 1:
                    life1.SetActive(true);
                    life2.SetActive(false);
                    life3.SetActive(false);
                    break;
                case 0:
                    isGameOver = true;
                    isPaused = false;
                    PlayerPrefs.SetInt("CoinsC", coins);
                    //PlayServices.AddScoreToLeaderboard();
                    life1.SetActive(false);
                    life2.SetActive(false);
                    life3.SetActive(false);
                    pauseBtn.SetActive(false);
                    gameOver.SetActive(true);
                    settingsMenu.SetActive(false);
                    Time.timeScale = 0;
                    break;
                default:
                    isGameOver = true;
                    isPaused = false;
                    PlayerPrefs.SetInt("CoinsC", coins);
                    //PlayServices.AddScoreToLeaderboard();
                    life1.SetActive(false);
                    life2.SetActive(false);
                    life3.SetActive(false);
                    pauseBtn.SetActive(false);
                    gameOver.SetActive(true);
                    settingsMenu.SetActive(false);
                    Time.timeScale = 0;
                    break;
            }

            // Player 2 lives
            switch (PlayerManager.GetP2Lives())
            {
                case 3:
                    isGameOver = false;
                    p2Life1.SetActive(true);
                    p2Life2.SetActive(true);
                    p2Life3.SetActive(true);
                    break;
                case 2:
                    p2Life1.SetActive(true);
                    p2Life2.SetActive(true);
                    p2Life3.SetActive(false);
                    break;
                case 1:
                    p2Life1.SetActive(true);
                    p2Life2.SetActive(false);
                    p2Life3.SetActive(false);
                    break;
                case 0:
                    isGameOver = true;
                    isPaused = false;
                    PlayerPrefs.SetInt("CoinsC", coins);
                    //PlayServices.AddScoreToLeaderboard();
                    p2Life1.SetActive(false);
                    p2Life2.SetActive(false);
                    p2Life3.SetActive(false);
                    pauseBtn.SetActive(false);
                    gameOver.SetActive(true);
                    settingsMenu.SetActive(false);
                    pauseMenu.SetActive(false);
                    Time.timeScale = 0;
                    break;
                default:
                    isGameOver = true;
                    isPaused = false;
                    PlayerPrefs.SetInt("CoinsC", coins);
                    //PlayServices.AddScoreToLeaderboard();
                    p2Life1.SetActive(false);
                    p2Life2.SetActive(false);
                    p2Life3.SetActive(false);
                    pauseBtn.SetActive(false);
                    gameOver.SetActive(true);
                    settingsMenu.SetActive(false);
                    pauseMenu.SetActive(false);
                    Time.timeScale = 0;
                    break;
            }

            #endregion
        }
    }
}