using System;
using System.Collections;


using UnityEngine;
using UnityEngine.SceneManagement;


using Photon.Pun;
using Photon.Realtime;


namespace Com.MorganHouston.PaddleBalls
{

    public class VersusGameManager : MonoBehaviourPunCallbacks
    {

        #region Public Fields

        [Tooltip("The prefab to use for representing the player")]
        public GameObject playerPrefab;

        public static int p1Lives = 3, p2Lives = 3, coins, newCoins;
        public GameObject gameOver, pauseMenu, settingsMenu, counter, pauseBtn;
        public static VersusGameManager Instance;

        #endregion


        #region Private Fields

        private bool isSettingsActive = false;

        private static bool playersConnected = false, gameStarted = false;

        private GameObject brickWall, brickWall2;

        private static int brickHits, brick2Hits;

        private Collider wall, wall2, switchL, switchR;

        #endregion


        #region Photon Callbacks


        /// <summary>
        /// Called when the local player left the room. We need to load the launcher scene.
        /// </summary>
        public override void OnLeftRoom()
        {
            SceneManager.LoadScene(3);

            base.OnLeftRoom();
        }

        public override void OnPlayerEnteredRoom(Player other)
        {
            Debug.LogFormat("OnPlayerEnteredRoom() {0}", other.NickName); // not seen if you're the player connecting


            if (PhotonNetwork.IsMasterClient)
            {
                Debug.LogFormat("OnPlayerEnteredRoom IsMasterClient {0}", PhotonNetwork.IsMasterClient); // called before OnPlayerLeftRoom


                LoadArena();
            }
        }


        public override void OnPlayerLeftRoom(Player other)
        {
            Debug.LogFormat("OnPlayerLeftRoom() {0}", other.NickName); // seen when other disconnects


            if (PhotonNetwork.IsMasterClient)
            {
                Debug.LogFormat("OnPlayerLeftRoom IsMasterClient {0}", PhotonNetwork.IsMasterClient); // called before OnPlayerLeftRoom


                LoadArena();
            }
        }


        #endregion


        #region MonoBehaviour CallBacks


        // Start is called before the first frame update
        void Start()
        {
            Instance = this;

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
            gameOver.gameObject.SetActive(false);
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
            }
            else if (p2Lives < 1)
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

        #endregion


        #region Private Methods


        void LoadArena()
        {
            if (!PhotonNetwork.IsMasterClient)
            {
                Debug.LogError("PhotonNetwork : Trying to Load a level but we are not the master Client");
            }
            Debug.LogFormat("PhotonNetwork : Loading Level : {0}", PhotonNetwork.CurrentRoom.PlayerCount);
            PhotonNetwork.LoadLevel("Room for " + PhotonNetwork.CurrentRoom.PlayerCount);
        }


        #endregion


        #region Public Methods

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

        }

        public void ResumeGame()
        {
            pauseMenu.gameObject.SetActive(false);
            Time.timeScale = 1;
        }

        public void restartGame()
        {
            SceneManager.LoadScene("gameVersus");
            counter.gameObject.SetActive(false);
            //coinManager.collectedCoins();
            //coins = 0;
            //PlayerPrefs.SetInt("CoinsC", coins);
        }

        public void toSettings()
        {
            isSettingsActive = true;
        }

        public void offSettings()
        {
            isSettingsActive = false;
        }

        public void loadMenu()
        {
            Destroy(GameObject.Find("PlayerData"));
            Destroy(GameObject.Find("PlayServices"));
            SceneManager.LoadScene(0);
        }

        public static void Death()
        {
            p1Lives -= 1;
        }

        public static void P2Death()
        {
            p2Lives -= 1;
        }

        #endregion
    }
}