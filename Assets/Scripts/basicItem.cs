using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class basicItem : MonoBehaviour
{
	public float speed = 0.5f;
    private Rigidbody localRgb;

    // Start is called before the first frame update
    void Start()
    {
        float sx = Random.Range(0, 2) == 0 ? -1 : 1;
        float sy = Random.Range(0, 2) == 0 ? -1 : 1;

        GetComponent<Rigidbody>().velocity = new Vector3 (speed * sx, speed * sy, 0f);
        if(SceneManager.GetActiveScene().name == "gameVersus")
        {

        }else
        {
            StartCoroutine(stopXV());
        }
        
    }

    IEnumerator stopXV(){
        yield return new WaitForSeconds(1);
        GetComponent<Rigidbody>().velocity = new Vector3 (0f, GetComponent<Rigidbody>().velocity.y * 2, 0f);
    }

    // Update is called once per frame
    void Update()
    {
        
    }


}
