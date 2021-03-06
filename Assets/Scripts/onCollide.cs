﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class onCollide : MonoBehaviour
{
    Rigidbody rb;
    private int ballBounces = 0;
    public ParticleSystem ten;
    public AudioSource missBall;
    public AudioSource brickHit;
    public AudioSource tenExplode;

    // Start is called before the first frame update
    void Start()
    {
        rb = GetComponent<Rigidbody>();
        Physics.IgnoreLayerCollision(7, 7);
        Physics.IgnoreLayerCollision(7, 6);
        ten.Stop();
    }

    // Update is called once per frame
    void Update()
    {
        if(ballBounces > 9){
            tenExplode.Play();
            ten.Emit(6);
            Destroy(this.gameObject, 0.5f);
        }
        
    }

    void OnCollisionEnter(Collision collision) {
    	if(collision.transform.tag == "Player"){
            score.AddPoint();
            ballBounces += 1;
        }
        if(collision.transform.tag == "brickWall"){
            brickHit.Play();
            paddle.hitBrick();
        }
    }

    void OnTriggerEnter(Collider collision) {
        if(collision.transform.name == "death"){
            ballBounces = 0;
            float sx = Random.Range(0, 2) == 0 ? -1 : 1;
            float sy = Random.Range(1, 2) == 0 ? -1 : 1;
         
            GetComponent<Rigidbody>().velocity = new Vector3(sx * 3f, sy * 3f, 0f);
            transform.Translate(0f, 8f, 0f);
            missBall.Play();
            GameManager.Death();
            SkillManager.Death();
    
        }
    }
}
