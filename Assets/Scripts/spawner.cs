using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class spawner : MonoBehaviour
{
	public GameObject gravBall, extendP, extraLife, brickW, coin;
	public Transform node1;
    public GameManager gameManager;
	private bool spawnedBall, spawnedItem, spawnedCoin, spawnedFirstBall;
    private GameObject[] items = new GameObject[3];
    int randItem;
    // Start is called before the first frame update
    void Start()
    {
        spawnedFirstBall = false;
        items[0] = extendP;
        items[1] = extraLife;
        items[2] = brickW;
        StartCoroutine(wait());
        spawnedItem = false;
        spawnedCoin = false;
    }

    IEnumerator wait() {
        yield return new WaitForSeconds(3.1f);
        Spawn(gravBall);
        spawnedFirstBall = true;
    }

    void SpawnRandom() {
        spawnedItem = true;
        randItem = Random.Range(0, items.Length);
        Spawn(items[randItem]);
    }

    private void SpawnCoin(){
        spawnedCoin = true;
        Instantiate(coin, node1.transform.position, node1.transform.rotation);
    }

    private void Spawn(GameObject ball){
    	spawnedBall = true;
    	Instantiate(ball, node1.transform.position, node1.transform.rotation);
    }

    // Update is called once per frame
    void Update()
    {
        if(0 == score.Score % 7 && spawnedItem == false && score.Score != 0 && !gameManager.isGameOver){
            SpawnRandom();
        }
        if ((score.Score % 7) != 0) {
            spawnedItem = false;
        }

        if((0 == score.Score % 10) && (spawnedBall == false) && (score.Score != 0) && !gameManager.isGameOver)
        {
        	Spawn(gravBall);
            SpawnCoin();
        }
        if ((score.Score % 10) != 0) {
            spawnedBall = false;
        }

        if(GameObject.FindWithTag("enemy") == null && spawnedFirstBall == true && !gameManager.isGameOver)
        {
            Spawn(gravBall);
        }
    }
}
