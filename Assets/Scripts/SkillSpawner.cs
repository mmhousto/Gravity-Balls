using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SkillSpawner : MonoBehaviour
{
	public GameObject gravBall, coin;
    public SkillManager gameManager;
	public Transform node1;
	private bool spawnedBall, spawnedCoin;
    // Start is called before the first frame update
    void Start()
    {
        StartCoroutine(wait());
        spawnedCoin = false;
    }

    IEnumerator wait() {
        yield return new WaitForSeconds(3.1f);
        Spawn(gravBall);
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

        if(0 == score.Score % 7 && !spawnedCoin && score.Score != 0 && !gameManager.isGameOver){
            SpawnCoin();
        }
        if ((score.Score % 7) != 0 && !gameManager.isGameOver) {
            spawnedCoin = false;
        }

        if((0 == score.Score % 10) && (!spawnedBall) && (score.Score != 0) && !gameManager.isGameOver)
        {
        	Spawn(gravBall);
        }
        if ((score.Score % 10) != 0 && !gameManager.isGameOver) {
            spawnedBall = false;
        }
    }
}
