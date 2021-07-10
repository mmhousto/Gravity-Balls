using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;

namespace Com.MorganHouston.PaddleBalls
{

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
            if (ballBounces > 9 && GetComponent<PhotonView>().IsMine)
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
            if (collision.transform.name == "death" && GetComponent<PhotonView>().IsMine)
            {
                missBall.Play();
                PhotonNetwork.Destroy(this.gameObject);
                PlayerManager.LoseLife(0);

            }
            else if (collision.transform.name == "death2" && GetComponent<PhotonView>().IsMine)
            {
                missBall.Play();
                PhotonNetwork.Destroy(this.gameObject);
                PlayerManager.LoseLife(1);

            } else if (collision.transform.name == "death3" && GetComponent<PhotonView>().IsMine)
            {
                missBall.Play();
                PhotonNetwork.Destroy(this.gameObject);
            }
        }
    }
}