using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class boundaries : MonoBehaviour
{
	public GameObject wallL;
	public GameObject wallR;
    public GameObject switchR, switchL;
	public GameObject wallTop;
	public GameObject wallBot;

    // Start is called before the first frame update
    void Start() {
        Camera cam = Camera.main;
        float height = 2f * cam.orthographicSize;
        float width = height * cam.aspect;
    	wallR.transform.position = new Vector3(width/1.65f, 0, 0);
        wallL.transform.position = new Vector3(-width/1.65f, 0, 0);
        switchR.transform.position = new Vector3(width/1.65f, -3.48f, 0);
        switchL.transform.position = new Vector3(-width/1.65f, -3.48f, 0);
    }

    // Update is called once per frame
    void LateUpdate() {
    }
}
