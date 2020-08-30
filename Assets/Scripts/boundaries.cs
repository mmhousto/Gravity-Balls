using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class boundaries : MonoBehaviour
{
	private Vector2 screenBounds;
	public Vector2 wallL;
	public Vector2 wallR;
	public Vector2 wallTop;
	public Vector2 wallBot;
    // Start is called before the first frame update
    void Start() {
    	wallR = new Vector3(Screen.width, Screen.height, Camera.main.transform.position.z);
        
    }

    // Update is called once per frame
    void LateUpdate() {
    }
}
