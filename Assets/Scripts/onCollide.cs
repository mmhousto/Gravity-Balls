﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class onCollide : MonoBehaviour
{
    Rigidbody rb;
    private int ballBounces = 0;

    // Start is called before the first frame update
    void Start()
    {
        rb = GetComponent<Rigidbody>();
        Physics.IgnoreLayerCollision(8,8);
    }

    // Update is called once per frame
    void Update()
    {
        if(ballBounces > 9){
            Destroy(gameObject);
        }
        
    }

    void OnCollisionEnter(Collision collision) {
    	if(collision.transform.name == "Paddle"){
            score.AddPoint();
            ballBounces += 1;
        }
    }

    void OnTriggerEnter(Collider collision) {
        if(collision.transform.name == "death"){
            ballBounces = 0;
            float sx = Random.Range(0, 2) == 0 ? -1 : 1;
            float sy = Random.Range(1, 2) == 0 ? -1 : 1;
         
            GetComponent<Rigidbody>().velocity = new Vector3(sx * 3f, sy * 3f, 0f);
            transform.Translate(0f, 8f, 0f);
            GameManager.Death();
    
        }
    }
}
