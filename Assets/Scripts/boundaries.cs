using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class boundaries : MonoBehaviour
{
    private float width;

    // Start is called before the first frame update
    void Start() {
        Camera cam = Camera.main;
        float height = 2f * cam.orthographicSize;
        width = height * cam.aspect;
        float gameWidth = width/1.65f;
        Debug.Log(height);
        Debug.Log(width);
        if(width > 7.5) {
            gameObject.transform.localScale = new Vector3(1.55f, 1f, 1f);
        }
        if(width <= 7.5) {
            gameObject.transform.localScale = new Vector3(1.33f, 1f, 1f);
        }
        if(width <= 7.495) {
            gameObject.transform.localScale = new Vector3(1f, 1f, 1f);
        }
        if(width <= 7.4941) {
            gameObject.transform.localScale = new Vector3(1.33f, 1f, 1f);
        }
        if(width <= 7.04) {
            gameObject.transform.localScale = new Vector3(1.25f, 1f, 1f);
        }
        if(width <= 6.67) {
            gameObject.transform.localScale = new Vector3(1.18f, 1f, 1f);
        }
        if(width <= 6.25) {
            gameObject.transform.localScale = new Vector3(1.12f, 1f, 1f);
        }
        if(width <= 6.04) {
            gameObject.transform.localScale = new Vector3(1.08f, 1f, 1f);
        }
        if(width <= 5.634) {
            gameObject.transform.localScale = new Vector3(1.02f, 1f, 1f);
        }
        if(width <= 5.63) {
            gameObject.transform.localScale = new Vector3(1f, 1f, 1f);
        }
        if(width <= 5) {
            gameObject.transform.localScale = new Vector3(0.89f, 1f, 1f);
        }
        if(width <= 4.865) {
            gameObject.transform.localScale = new Vector3(0.86f, 1f, 1f);
        }
        if(width <= 4.75) {
            gameObject.transform.localScale = new Vector3(0.85f, 1f, 1f);
        }
        if(width <= 4.621) {
            gameObject.transform.localScale = new Vector3(0.82f, 1f, 1f);
        }
    }

    // Update is called once per frame
    void Update() {

    }
}
