using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;

public class BallCollide : MonoBehaviour
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
        if (ballBounces > 9)
        {
            tenExplode.Play();
            ten.Emit(6);
            PhotonNetwork.Destroy(this.gameObject);
        }

    }

    void OnCollisionEnter(Collision collision)
    {
        if (collision.transform.tag == "brickWall")
        {
            brickHit.Play();
            paddle.hitBrick();
            PlayerManager.hitBrick();
        }
        if (collision.transform.tag == "NetworkPlayer")
        {
            ballBounces += 1;
        }
    }

    void OnTriggerEnter(Collider collision)
    {
        if (collision.transform.name == "death")
        {
            missBall.Play();
            PhotonNetwork.Destroy(this.gameObject);
            
        } else if (collision.transform.name == "death2")
        {
            missBall.Play();
            PhotonNetwork.Destroy(this.gameObject);

        }
    }
}