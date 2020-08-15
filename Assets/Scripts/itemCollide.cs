using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class itemCollide : MonoBehaviour
{
    Rigidbody rb;

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
            Destroy(gameObject);
        }
    }

    void OnTriggerEnter(Collider collision) {
        if(collision.transform.name == "death"){
            Destroy(gameObject);
    
        }
        
    }
}
