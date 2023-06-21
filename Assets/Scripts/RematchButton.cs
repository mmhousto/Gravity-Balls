using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using Photon.Pun;

namespace Com.MorganHouston.PaddleBalls
{
    public class RematchButton : MonoBehaviourPunCallbacks
    {
        public Toggle toggle1;
        public Toggle toggle2;
        public VersusGameManager gameManager;
        [PunRPC]
        private int playersReady = 0;

        private void Update()
        {
            if (VersusGameManager.isGameOver == true)
            {
                ShowReadyPlayers();
            }
        }

        public void OnRematchButtonClicked()
        {
            GetComponent<Button>().interactable = false;
            photonView.TransferOwnership(PhotonNetwork.MasterClient);
            photonView.RPC("UpdateRematchStatus", RpcTarget.AllBuffered);
        }

        public void ShowReadyPlayers()
        {
            switch (playersReady)
            {
                case 2:
                    toggle1.isOn = true;
                    toggle2.isOn = true;
                    gameManager.restartGame();

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

        [PunRPC]
        private void UpdateRematchStatus()
        {
            playersReady++;

        }
    }
}
