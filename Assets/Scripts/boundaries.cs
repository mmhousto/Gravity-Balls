using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class boundaries : MonoBehaviour
{
	public GameObject wallL;
	public GameObject wallR;
	public GameObject wallTop;
	public GameObject wallBot;
    // Start is called before the first frame update
    void Start() {
    	wallR.transform.position = new Vector3(Screen.width/160f, 0, 0);
        wallL.transform.position = new Vector3(Screen.width/(-160f), 0, 0);
    }

    // Update is called once per frame
    void LateUpdate() {
    }
}
