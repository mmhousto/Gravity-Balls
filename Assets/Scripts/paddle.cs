using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class paddle : MonoBehaviour
{
    public string soloScene, skillScene, versusScene;
    private Collider wall, wall2, switchL, switchR;
	public bool isPaddle1;
    private MeshRenderer meshRenderer;
    public Material basic, dark, pro, cyan, red, gold, orange, green, lime;
	public float speed = 10f;
    private GameObject threeDPaddle, brickWall;
    private Vector3 touchPosition, tP2;
    private Rigidbody rb;
    private Vector3 direction;
    public GameObject paddleP1;
    private GameObject paddle2;
    public float wallZ = 0;
    private bool isActive = false;

    private Camera cam;
    public AudioSource coinCollect;
    public AudioSource ballBounce;
    public AudioSource lifeGain;
    public AudioSource extendPaddle;
    public AudioSource breakBrick;
    private static int brickHits;

    // Start is called before the first frame update
    void Start()
    {
        // get components
        cam = Camera.main;
        soloScene = "gameSingle";
        skillScene = "gameSkill";
        versusScene = "gameVersus";
        wall = GameObject.Find("WallL").GetComponent<Collider>();
        wall2 = GameObject.Find("WallR").GetComponent<Collider>();
        switchL = GameObject.Find("switchL").GetComponent<Collider>();
        switchR = GameObject.Find("switchR").GetComponent<Collider>();
        brickWall = GameObject.Find("Environment").transform.Find("BrickWall").gameObject;
        brickWall.SetActive(false);

        // disable switches
#if UNITY_IOS
            switchL.enabled = false;
            switchR.enabled = false;
#elif UNITY_ANDROID
            switchL.enabled = false;
            switchR.enabled = false;
#else
#endif

        // set paddle position
        transform.position = new Vector3(0, -3.45f, -.2f);
        
        threeDPaddle = this.gameObject.transform.GetChild(0).GetChild(0).gameObject;
        AudioListener.volume = PlayerPrefs.GetFloat("gameVolume");
        brickHits = 0;
        paddleP1 = GetComponent<GameObject>();
        rb = GetComponent<Rigidbody>();
        Physics.IgnoreCollision(wall, GetComponent<Collider>());
        Physics.IgnoreCollision(wall2, GetComponent<Collider>());
        Physics.IgnoreCollision(brickWall.GetComponent<Collider>(), GetComponent<Collider>());

        meshRenderer = threeDPaddle.GetComponent<MeshRenderer>();
        SetPaddleMat();
        
    }

    void SetPaddleMat()
    {

        if (PlayerPrefs.GetInt("selectedPaddle") == 0)
        {
            meshRenderer.material = basic;

        }
        else if (PlayerPrefs.GetInt("selectedPaddle") == 1)
        {
            meshRenderer.material = dark;

        }
        else if (PlayerPrefs.GetInt("selectedPaddle") == 2)
        {
            meshRenderer.material = pro;

        }
        else if (PlayerPrefs.GetInt("selectedPaddle") == 3)
        {
            meshRenderer.material = red;

        }
        else if (PlayerPrefs.GetInt("selectedPaddle") == 4)
        {
            meshRenderer.material = gold;

        }
        else if (PlayerPrefs.GetInt("selectedPaddle") == 5)
        {
            meshRenderer.material = green;

        }
        else if (PlayerPrefs.GetInt("selectedPaddle") == 6)
        {
            meshRenderer.material = orange;

        }
        else if (PlayerPrefs.GetInt("selectedPaddle") == 7)
        {
            meshRenderer.material = cyan;

        }
        else if (PlayerPrefs.GetInt("selectedPaddle") == 8)
        {
            meshRenderer.material = lime;
        }
    }

    void splitPaddles(Transform secondPos) {
        paddle2 = Instantiate(paddleP1, secondPos.transform.position, secondPos.transform.rotation);
    }

    void combinePaddles() {
        Destroy(paddle2);
    }

    void OnTriggerEnter(Collider collision) {
        float height = 2f * cam.orthographicSize;
        float width = height * cam.aspect;

        if (collision.transform.name == "switchL") {
            if(width > 7.5) {
                transform.Translate(8.6f, 0f, 0f);
            } else transform.Translate(width, 0f, 0f);
        } else if(collision.transform.name == "switchR") {
            if(width > 7.5) {
                transform.Translate(-8.6f, 0f, 0f);
            } else transform.Translate(-width, 0f, 0f);
        }
    }

    void OnCollisionEnter(Collision collision) {
        if (collision.transform.tag == "extend") {
            if(transform.localScale.x >= 0.25){
                extendPaddle.Play();
            } else {
                transform.localScale += new Vector3(0.08f, 0f, 0f);
                extendPaddle.Play();
                StartCoroutine(waitResize());
            }
        }
        if(collision.transform.tag == "life") {
            GameManager.lives += 1;
            lifeGain.Play();
        }
        if(collision.transform.tag == "coin") {
            GameManager.collectCoin();
            coinCollect.Play();
        }
        if(collision.transform.tag == "enemy") {
            ballBounce.Play();
        }
        if(collision.transform.tag == "brick" && !isActive){
            isActive = true;
            brickWall.transform.gameObject.SetActive(true);
            StartCoroutine(brickBreak());
        } else if(collision.transform.tag == "brick") {
            StartCoroutine(waitTen());
            brickWall.transform.gameObject.SetActive(true);
            StartCoroutine(brickBreak());
        }
    }

    IEnumerator waitTen() {
        yield return new WaitForSeconds(10);
    }

    IEnumerator waitResize() {
        yield return new WaitForSeconds(15);
        transform.localScale -= new Vector3(0.08f, 0f, 0f);
        extendPaddle.Play();
    }

    IEnumerator brickBreak() {
        yield return new WaitForSeconds(10);
            EndBrick();
    }

    public void EndBrick() {
        brickHits = 0;
        isActive = false;
        brickWall.transform.gameObject.SetActive(false);
    }

    public static void hitBrick() {
        brickHits += 1;
    }

    private Vector3 GetWorldPosition(float z)
    {
        Ray mousePos = cam.ScreenPointToRay(Input.mousePosition);
        Plane wallBG = new Plane(Vector3.forward, new Vector3(0, 0, z));
        float distance;
        wallBG.Raycast(mousePos, out distance);
        return mousePos.GetPoint(distance);
    }

    // Update is called once per frame
    void Update()
    {
        if(isPaddle1) {
        transform.Translate(Input.GetAxis("Horizontal") * speed * Time.deltaTime, 0f, 0f, Space.World);
        if(Input.touchCount > 0) {
            Touch touch = Input.GetTouch(0);
            touchPosition = GetWorldPosition(wallZ); 
            touchPosition.z = -.2f;
            touchPosition.y = -3.45f;
            direction.x = (touchPosition.x - transform.position.x);
            rb.velocity = new Vector3(direction.x, 0f, 0f) * speed;
            if(touch.tapCount == 2) {
                tP2 = GetWorldPosition(wallZ);
                tP2.z = -.2f;
                tP2.y = -3.45f;
                transform.position = tP2;
            }
            
            if (touch.phase == TouchPhase.Ended){
                rb.velocity = Vector3.zero;
            }
        }
        
        }
        if(brickHits > 3) {
            EndBrick();
            breakBrick.Play();
        }
    }
}
