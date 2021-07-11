using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;

namespace Com.MorganHouston.PaddleBalls
{

    public class BallCollide : MonoBehaviour
    {
        Rigidbody rb;
        public int ballBounces = 0;
        public ParticleSystem ten;
        public AudioSource missBall;
        public AudioSource brickHit;
        public AudioSource tenExplode;

        private static PhotonView PV;

        // Start is called before the first frame update
        void Start()
        {
            PV = GetComponent<PhotonView>();
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

        [PunRPC]
        void BallBounce(int ballBounced)
        {
            ballBounced += 1;
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
                PV.RPC("BallBounce", RpcTarget.All, ballBounces);
            }
        }

        void OnTriggerEnter(Collider collision)
        {
            if (collision.transform.name == "death" && GetComponent<PhotonView>().IsMine)
            {
                PlayerManager.LoseLife(0);
                missBall.Play();
                PhotonNetwork.Destroy(this.gameObject);
                
            }
            else if (collision.transform.name == "death2" && GetComponent<PhotonView>().IsMine)
            {
                PlayerManager.LoseLife(1);
                missBall.Play();
                PhotonNetwork.Destroy(this.gameObject);

            } else if (collision.transform.name == "death3" && GetComponent<PhotonView>().IsMine)
            {
                missBall.Play();
                PhotonNetwork.Destroy(this.gameObject);
            }
        }
    }
}