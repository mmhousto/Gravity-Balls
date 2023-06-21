using UnityEngine;
using Photon.Pun;
using Photon.Realtime;

/// <summary>
/// Namespace for me and Paddle Balls
/// Author: Morgan Houston
/// </summary>
namespace Com.MorganHouston.PaddleBalls
{
    public class Launcher : MonoBehaviourPunCallbacks
    {

        #region Private Serializable Fields
        /// <summary>
        /// The maximum number of players per room. When a room is full, it can't be joined by new players, and so new room will be created.
        /// </summary>
        [Tooltip("The maximum number of players per room. When a room is full, it can't be joined by new players, and so new room will be created")]
        [SerializeField]
        private byte maxPlayersPerRoom = 2;

        [Tooltip("The Ui Panel to let the user enter name, connect and play")]
        [SerializeField]
        private GameObject controlPanel;
        [Tooltip("The UI Label to inform the user that the connection is in progress")]
        [SerializeField]
        private GameObject progressLabel;

        private string roomCode = "";


        #endregion

        #region Private Fields

        /// <summary>
        /// This client's version number. Users are separated from each other by gameVersion (which allows you to make breaking changes).
        /// </summary>
        string gameVersion = "1";

        /// <summary>
        /// Keep track of the current process. Since connection is asynchronous and is based on several callbacks from Photon,
        /// we need to keep track of this to properly adjust the behavior when we receive call back by Photon.
        /// Typically this is used for the OnConnectedToMaster() callback.
        /// </summary>
        bool isConnecting;


        #endregion


        #region MonoBehaviour CallBacks


        /// <summary>
        /// MonoBehaviour method called on GameObject by Unity during early initialization phase.
        /// </summary>
        void Awake()
        {
            // #Critical
            // this makes sure we can use PhotonNetwork.LoadLevel() on the master client and all clients in the same room sync their level automatically
            isConnecting = true;
            PhotonNetwork.AutomaticallySyncScene = true;
            PhotonNetwork.GameVersion = gameVersion;
            PhotonNetwork.ConnectUsingSettings();
        }


        /// <summary>
        /// MonoBehaviour method called on GameObject by Unity during initialization phase.
        /// </summary>
        void Start()
        {
            
        }


        #endregion


        #region MonoBehaviourPunCallbacks Callbacks


        public override void OnConnectedToMaster()
        {

            // #Critical: The first we try to do is to join a potential existing room. If there is, good, else, we'll be called back with OnJoinRandomFailed()
            // we don't want to do anything if we are not attempting to join a room.
            // this case where isConnecting is false is typically when you lost or quit the game, when this level is loaded, OnConnectedToMaster will be called, in that case
            // we don't want to do anything.
            if (isConnecting)
            {
                //PhotonNetwork.JoinLobby();
                isConnecting = false;
                progressLabel.SetActive(false);
                controlPanel.SetActive(true);
            }
        }

        /// <summary>
        /// Loads the lobby scene and sets NickName to player's name, after joining successfully.
        /// </summary>
        public override void OnJoinedLobby()
        {
            isConnecting = false;
            progressLabel.SetActive(false);
            controlPanel.SetActive(true);
        }


        public override void OnDisconnected(DisconnectCause cause)
        {
            isConnecting = false;
            progressLabel.SetActive(false);
            controlPanel.SetActive(true);
            Debug.LogWarningFormat("PUN Basics Launcher: OnDisconnected() was called by PUN with reason {0}", cause);
        }


        #endregion


        #region Public Methods


        /// <summary>
        /// Start the connection process.
        /// - If already connected, we attempt joining a random room
        /// - if not yet connected, Connect this application instance to Photon Cloud Network
        /// </summary>
        public void Connect()
        {
            if (string.IsNullOrEmpty(roomCode)) return;

            progressLabel.SetActive(true);
            controlPanel.SetActive(false);
            // we check if we are connected or not, we join if we are , else we initiate the connection to the server.
            if (PhotonNetwork.IsConnected)
            {
                // #Critical we need at this point to attempt joining a Random Room. If it fails, we'll get notified in OnJoinRandomFailed() and we'll create one.
                PhotonNetwork.JoinOrCreateRoom(roomCode, new RoomOptions { MaxPlayers = maxPlayersPerRoom }, TypedLobby.Default);
            }
            else if (PhotonNetwork.IsConnected == false)
            {
                // #Critical, we must first and foremost connect to Photon Online Server.
                // keep track of the will to join a room, because when we come back from the game we will get a callback that we are connected, so we need to know what to do then
                PhotonNetwork.GameVersion = gameVersion;
                isConnecting = PhotonNetwork.ConnectUsingSettings();
                
            }
        }

        public void SetRoomName(string value)
        {
            // #Important
            if (string.IsNullOrEmpty(value))
            {
                return;
            }

            roomCode = value;
        }

        /// <summary>
        /// On failure to join room this method is called
        /// </summary>
        /// <param name="returnCode"></param>
        /// <param name="message"></param>
        public override void OnJoinRandomFailed(short returnCode, string message)
        {
            if (string.IsNullOrEmpty(roomCode)) return;
            // #Critical: we failed to join a random room, maybe none exists or they are all full. No worries, we create a new room with set maxPlayersPerRoom.
            PhotonNetwork.CreateRoom(roomCode, new RoomOptions { MaxPlayers = maxPlayersPerRoom });
        }

        /// <summary>
        /// Is called when a client joins a room
        /// </summary>
        public override void OnJoinedRoom()
        {
            // #Critical: We only load if we are the first player, else we rely on `PhotonNetwork.AutomaticallySyncScene` to sync our instance scene.

            
            if (PhotonNetwork.CurrentRoom.PlayerCount == 1)
            {
                // #Critical
                // Load the Room Level.
                PhotonNetwork.LoadLevel("Room for 1");
            }


        }


        #endregion
    }
}

