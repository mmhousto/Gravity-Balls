using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class coinCollide : MonoBehaviour
{
    Rigidbody rb;
    public AudioSource coinCollect;

    // Start is called before the first frame update
    void Start()
    {
        rb = GetComponent<Rigidbody>();
        Physics.IgnoreLayerCollision(8,8);
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    void OnCollisionEnter(Collision collision) {
        if(collision.transform.name == "Paddle") {
            coinCollect.Play();
            Destroy(gameObject);
        } 
    }

    void OnTriggerEnter(Collider collision) {
        if(collision.transform.name == "death"){
            Destroy(gameObject);
    
        }
        
    }
}