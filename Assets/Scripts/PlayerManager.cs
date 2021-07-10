using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using Photon.Pun;

namespace Com.MorganHouston.PaddleBalls
{

    public class PlayerManager : MonoBehaviourPun
    {
        public MeshRenderer meshRenderer;
        public Material basic, dark, pro, cyan, red, gold, orange, green, lime;
        public float speed = 10f;
        private GameObject threeDPaddle, brickWall;
        private Vector3 touchPosition, tP2;
        private Rigidbody rb;
        private Vector3 direction;
        public float wallZ = 0;
        private bool isActive = false;
        public int selectedPaddle;
        public VersusGameManager versusGameManager;

        [Tooltip("The local player instance. Use this to know if the local player is represented in the Scene")]
        public static GameObject LocalPlayerInstance;

        private GameObject environment;

        private Camera cam;
        public AudioSource coinCollect;
        public AudioSource ballBounce;
        public AudioSource lifeGain;
        public AudioSource extendPaddle;
        public AudioSource breakBrick;
        private static int brickHits;
        private static PhotonView PV;

        void Awake()
        {
            // #Important
            // used in GameManager.cs: we keep track of the localPlayer instance to prevent instantiation when levels are synchronized
            if (photonView.IsMine)
            {
                PlayerManager.LocalPlayerInstance = this.gameObject;
            }
            // #Critical
            // we flag as don't destroy on load so that instance survives level synchronization, thus giving a seamless experience when levels load.
            DontDestroyOnLoad(this.gameObject);

            environment = GameObject.Find("Environment");

            boundaries _boundaries = environment.GetComponent<boundaries>();

            if (_boundaries != null)
            {
                if (photonView.IsMine)
                {
                    _boundaries.SetBoundaries();
                }
            }
            else
            {
                Debug.LogError("<Color=Red><a>Missing</a></Color> boundaries Component on Environment.", this);
            }
        }

        // Start is called before the first frame update
        void Start()
        {
            versusGameManager = GameObject.FindObjectOfType(typeof(VersusGameManager)) as VersusGameManager;

            PV = GetComponent<PhotonView>();
            if (photonView.IsMine)
            {
                cam = Camera.main;

                selectedPaddle = PlayerPrefs.GetInt("selectedPaddle");
                //threeDPaddle = PlayerManager.LocalPlayerInstance.transform.GetChild(0).GetChild(0).gameObject;
                //meshRenderer = threeDPaddle.GetComponent<MeshRenderer>();
                //SetPaddleMat(selectedPaddle);

                AudioListener.volume = PlayerPrefs.GetFloat("gameVolume");
                rb = GetComponent<Rigidbody>();

                this.photonView.RPC("SetPaddleMat", RpcTarget.AllBuffered, selectedPaddle); //SetPaddleMat();
            }


        }

        [PunRPC]
        void SetPaddleMat(int selectedPaddle)
        {
            if (selectedPaddle == 0)
            {
                meshRenderer.material = basic;

            }
            else if (selectedPaddle == 1)
            {
                meshRenderer.material = dark;

            }
            else if (selectedPaddle == 2)
            {
                meshRenderer.material = pro;

            }
            else if (selectedPaddle == 3)
            {
                meshRenderer.material = red;

            }
            else if (selectedPaddle == 4)
            {
                meshRenderer.material = gold;

            }
            else if (selectedPaddle == 5)
            {
                meshRenderer.material = green;

            }
            else if (selectedPaddle == 6)
            {
                meshRenderer.material = orange;

            }
            else if (selectedPaddle == 7)
            {
                meshRenderer.material = cyan;

            }
            else if (selectedPaddle == 8)
            {
                meshRenderer.material = lime;
            }
        }

        void OnTriggerEnter(Collider collision)
        {
            if (!photonView.IsMine)
            {
                return;
            }

            if (photonView.IsMine)
            {
                float height = 2f * Camera.main.orthographicSize;
                float width = height * Camera.main.aspect;
                if (collision.transform.tag == "switchL")
                {
                    if (width > 7.5)
                    {
                        transform.Translate(8.6f, 0f, 0f);
                    }
                    else transform.Translate(width, 0f, 0f);
                }
                else if (collision.transform.tag == "switchR")
                {
                    if (width > 7.5)
                    {
                        transform.Translate(-8.6f, 0f, 0f);
                    }
                    else transform.Translate(-width, 0f, 0f);
                }
            }
        }

        void OnCollisionEnter(Collision collision)
        {
            if (photonView.IsMine)
            {
                if (collision.transform.tag == "extend")
                {
                    if (transform.localScale.x >= 0.25)
                    {
                        extendPaddle.Play();
                    }
                    else
                    {
                        transform.localScale += new Vector3(0.08f, 0f, 0f);
                        extendPaddle.Play();
                        StartCoroutine(waitResize());
                    }
                }
                if (collision.transform.tag == "life")
                {
                    GameManager.lives += 1;
                    lifeGain.Play();
                }
                if (collision.transform.tag == "coin")
                {
                    GameManager.collectCoin();
                    coinCollect.Play();
                }
                if (collision.transform.tag == "enemy")
                {
                    ballBounce.Play();
                }
                if (collision.transform.tag == "brick" && !isActive)
                {
                    isActive = true;
                    //brickWall.transform.gameObject.SetActive(true);
                    //StartCoroutine(brickBreak());
                }
                else if (collision.transform.tag == "brick")
                {
                    StartCoroutine(waitTen());
                    //brickWall.transform.gameObject.SetActive(true);
                    //StartCoroutine(brickBreak());
                }
            }
        }

        IEnumerator waitTen()
        {
            yield return new WaitForSeconds(10);
        }

        IEnumerator waitResize()
        {
            if (photonView.IsMine)
            {
                yield return new WaitForSeconds(15);
                transform.localScale -= new Vector3(0.08f, 0f, 0f);
                extendPaddle.Play();
            }
        }

        IEnumerator brickBreak()
        {
            yield return new WaitForSeconds(10);
            EndBrick();
        }

        public void EndBrick()
        {
            brickHits = 0;
            isActive = false;
            //brickWall.transform.gameObject.SetActive(false);
        }

        public static void hitBrick()
        {
            brickHits += 1;
        }

        private Vector3 GetWorldPosition(float z)
        {
            Ray mousePos = Camera.main.ScreenPointToRay(Input.mousePosition);
            Plane wallBG = new Plane(Vector3.forward, new Vector3(0, 0, z));
            float distance;
            wallBG.Raycast(mousePos, out distance);
            return mousePos.GetPoint(distance);
        }

        private void MovePaddle()
        {
            transform.Translate(Input.GetAxis("Horizontal") * speed * Time.deltaTime, 0f, 0f, Space.World);
            if (Input.touchCount > 0)
            {
                Touch touch = Input.GetTouch(0);
                touchPosition = GetWorldPosition(wallZ);
                touchPosition.z = -.2f;
                touchPosition.y = -3.45f;
                direction.x = (touchPosition.x - transform.position.x);
                rb.velocity = new Vector3(direction.x, 0f, 0f) * speed;
                if (touch.tapCount == 2)
                {
                    tP2 = GetWorldPosition(wallZ);
                    tP2.z = -.2f;
                    tP2.y = -3.45f;
                    transform.position = tP2;
                }

                if (touch.phase == TouchPhase.Ended)
                {
                    rb.velocity = Vector3.zero;
                }
            }

        }

        public static void LoseLife(int player)
        {
            PV.RPC("RpcMinusLife", RpcTarget.All, player);
        }

        [PunRPC]
        public void RpcMinusLife(int player)
        {
            versusGameManager.Death(player);
        }

        // Update is called once per frame
        void Update()
        {
            if (photonView.IsMine == false && PhotonNetwork.IsConnected == true)
            {
                return;
            }
            if (photonView.IsMine)
            {
                MovePaddle();

            }

            if (brickHits > 3)
            {
                EndBrick();
                breakBrick.Play();
            }
        }
    }
}