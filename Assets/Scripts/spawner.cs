using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class spawner : MonoBehaviour
{
	public GameObject gravBall, extendP, extraLife, brickW, coin;
	public Transform node1;
	private bool spawnedBall, spawnedItem, spawnedCoin;
    private GameObject[] items = new GameObject[3];
    int randItem;
    // Start is called before the first frame update
    void Start()
    {
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
        spawnedBall = false;
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
        if(0 == score.Score % 7 && !spawnedItem && score.Score != 0){
            SpawnRandom();
        }else if ((score.Score % 7) != 0) {
            spawnedItem = false;
        }

        if((score.Score == 70) && (!spawnedBall)){
            Spawn(gravBall);
            SpawnCoin();
        }

        if((0 == score.Score % 10) && (!spawnedBall) && (score.Score != 0)){
        	Spawn(gravBall);
            SpawnCoin();
        } else if ((score.Score % 10) != 0) {
            spawnedBall = false;
        }
    }
}
