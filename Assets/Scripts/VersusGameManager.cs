using Photon.Pun;
using Photon.Realtime;
using System.Collections;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

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

        #endregion


        #region Private Fields

        private bool isSettingsActive = false;

        private static bool playersConnected = false, gameStarted = false;

        public static bool isGameOver = false;

        private GameObject brickWall, brickWall2;

        private static int brickHits, brick2Hits;

        public static int readyPlayers = 0;

        public static int playersSpawned = 0;

        public Toggle toggle1, toggle2;

        public Button rematchBtn;

        private bool isPaused;

        private GameObject player;

        #endregion


        #region Photon Callbacks
        /// <summary>
        /// Called when the local player left the room. We need to load the launcher scene.
        /// </summary>
        public override void OnLeftRoom()
        {
            //ActivateSettingsBtns();
            //SceneManager.LoadScene(0);
            if (PhotonNetwork.IsMasterClient)
            {
                PhotonNetwork.DestroyAll();
            }
            else if (player != null)
            {
                PhotonNetwork.Destroy(player);
            }

            PlayerManager.ResetLives();
            isGameOver = false;
            readyPlayers = 0;
            playersSpawned = 0;
            PhotonNetwork.LoadLevel(3);

            base.OnLeftRoom();
        }

        public override void OnDisconnected(DisconnectCause cause)
        {
            PlayerManager.ResetLives();
            isGameOver = false;
            readyPlayers = 0;
            playersSpawned = 0;
            //PhotonNetwork.LoadLevel(3);
            loadMenu();

            base.OnDisconnected(cause);
        }

        public override void OnPlayerEnteredRoom(Player other)
        {


            if (PhotonNetwork.IsMasterClient)
            {

                PlayerManager.ResetLives();
                LoadArena();
            }
        }


        public override void OnPlayerLeftRoom(Player other)
        {

            PhotonNetwork.LeaveRoom();
        }


        #endregion


        #region RPCs


        #endregion


        #region MonoBehaviour CallBacks

        // Start is called before the first frame update
        void Start()
        {
            StartCoroutine(Wait());

            //GameObject.FindGameObjectWithTag("Audio").GetComponent<AudioManager>().PlayMusic();

            // spawn 
            if (playerPrefab == null)
            {
            }
            else if (playersSpawned < 1)
            {
                player = PhotonNetwork.Instantiate(playerPrefab.name, GetSpawnPosition(), GetSpawnRotation(), 0);
                playersSpawned++;
            }

            brickHits = 0;
            readyPlayers = 0;

            brickWall = GameObject.Find("Environment").transform.Find("BrickWall").gameObject;
            brickWall.SetActive(false);
            brickWall2 = GameObject.Find("Environment").transform.Find("BrickWall2").gameObject;
            brickWall2.SetActive(false);
            toggle1 = GameObject.FindWithTag("Ready").GetComponent<Toggle>();
            toggle2 = GameObject.FindWithTag("Ready2").GetComponent<Toggle>();


            // Collisions to ignore
            Physics.IgnoreLayerCollision(3, 8);

            PlayerData.Instance.addPlay();

            if(PhotonNetwork.IsMasterClient)
                PhotonNetwork.InstantiateRoomObject(counter.name, new Vector3(0f, 0f, 0f), Quaternion.identity, 0);

            Time.timeScale = 1;
            PlayerPrefs.SetInt("CoinsC", 0);
            coins = PlayerPrefs.GetInt("CoinsC", 0);
            gameOver.SetActive(false);
            isGameOver = false;
        }

        // Update is called once per frame
        void Update()
        {
            // Handles lives
            if(isGameOver == false)
            {
                HandleLives();
            }
            

            if (isGameOver == true)
            {
                ShowReadyPlayers();
            }

            if (!PhotonNetwork.IsConnectedAndReady || !PhotonNetwork.IsConnected)
            {
                PhotonNetwork.Disconnect();
            }
        }

        private void OnApplicationQuit()
        {
            PhotonNetwork.LeaveRoom();
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

        Quaternion GetSpawnRotation()
        {
            // Determine the spawn position based on whether the client is the host or not
            if (photonView.IsMine)
            {
                return Quaternion.identity; // Spawn position for host
            }
            else
            {
                return Quaternion.Euler(180f, 180f, 0f);
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
                //Debug.LogError("PhotonNetwork : Trying to Load a level but we are not the master Client");
            }
            //Debug.LogFormat("PhotonNetwork : Loading Level : {0}", PhotonNetwork.CurrentRoom.PlayerCount);
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
            photonView.RPC("RpcRematch", RpcTarget.AllViaServer);
        }

        [PunRPC]
        public void RpcRematch()
        {
            readyPlayers++;
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
            //Time.timeScale = 0;
            pauseMenu.SetActive(true);
            isPaused = true;
        }

        public void ResumeGame()
        {
            pauseMenu.SetActive(false);
            //Time.timeScale = 1;
            isPaused = false;
        }

        public void restartGame()
        {
            //counter.SetActive(false);
            //pauseBtn.SetActive(true);
            //gameOver.SetActive(false);
            readyPlayers = 0;
            isGameOver = false;
            PlayerManager.ResetLives();
            PhotonNetwork.LoadLevel("Room for 2");
            //coinManager.collectedCoins();
            //coins = 0;
            //PlayerPrefs.SetInt("CoinsC", coins);
        }

        [PunRPC]
        public void RpcRestartScene()
        {
            readyPlayers = 0;
            playersSpawned = 0;
            isGameOver = false;
            PlayerManager.ResetLives();
            PhotonNetwork.LoadLevel("Room for 2");
        }

        public void loadMenu()
        {
            SceneManager.LoadScene(0);
        }

        private void P1Lose()
        {
            // If p1 loses and you are master client(host) you lose
            // else p1 loses and you are remote client you win
            if (PhotonNetwork.IsMasterClient)
            {
                PlayerData.Instance.AddLoss();
            }
            else
            {
                PlayerData.Instance.AddWin();
            }
        }

        private void P2Lose()
        {
            // If p2 loses and you are master client(host) you win
            // else p2 loses and you are remote client you lose
            if (PhotonNetwork.IsMasterClient)
            {
                PlayerData.Instance.AddWin();
            }
            else
            {
                PlayerData.Instance.AddLoss();
            }
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
                    P1Lose();
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
                    break;
                default:
                    P1Lose();
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
                    P2Lose();
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
                    break;
                default:
                    P2Lose();
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
                    break;
            }

            #endregion
        }
    }
}