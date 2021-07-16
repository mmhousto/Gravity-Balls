using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;

public class VersusSpawner : MonoBehaviourPunCallbacks
{
    public GameObject ball;
    public GameObject coin, brick, extendPaddle;
    //public Transform node1;
    private bool spawnedBall = false;
    private bool spawnedCoin, gameStarted = false, playersConnected = false;
    private GameObject clone;
    // Start is called before the first frame update
    void Start()
    {
        StartCoroutine(wait());
        spawnedCoin = false;
    }

    IEnumerator wait()
    {
        yield return new WaitForSeconds(3.1f);
        SpawnBall();
    }

    private void SpawnCoin()
    {
        PhotonNetwork.InstantiateRoomObject(coin.name, new Vector3(0f, 0f, 0f), Quaternion.identity, 0);
        spawnedCoin = true;
    }

    public void SpawnBall()
    {
        clone = PhotonNetwork.InstantiateRoomObject(ball.name, new Vector3(0f, 0f, 0f), Quaternion.identity, 0);
        spawnedBall = true;
    }

    // Update is called once per frame
    void Update()
    {
        //playersConnected = PasswordNetworkManager.EveryoneConnected();

        gameStarted = true;

        if(!clone && spawnedBall == true && PhotonNetwork.InRoom)
        {
            SpawnBall();
        }

        /*if (0 == score.Score % 7 && !spawnedCoin && score.Score != 0)
        {
            SpawnCoin();
        }
        else if ((score.Score % 7) != 0)
        {
            spawnedCoin = false;
        }

        if ((0 == score.Score % 10) && (!spawnedBall) && (score.Score != 0))
        {
            Spawn(gravBall);
        }
        else if ((score.Score % 10) != 0)
        {
            spawnedBall = false;
        }*/
    }
}