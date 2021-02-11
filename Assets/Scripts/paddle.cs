using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class paddle : MonoBehaviour
{
    public Collider wall, wall2, switchL, switchR;
	public bool isPaddle1;
    private SpriteRenderer spriteRenderer;
    public Sprite basic, dark, pro;
	public float speed = 10f;
    private Vector3 touchPosition, tP2;
    private Rigidbody rb;
    private Vector3 direction;
    public GameObject brickWall, paddleP1;
    private GameObject paddle2;
    private bool isActive = false;
    public AudioSource coinCollect;
    public AudioSource ballBounce;
    public AudioSource lifeGain;
    public AudioSource extendPaddle;
    public AudioSource breakBrick;
    private static int brickHits;

    // Start is called before the first frame update
    void Start()
    {
        AudioListener.volume = PlayerPrefs.GetFloat("gameVolume");
        brickHits = 0;
        paddleP1 = GetComponent<GameObject>();
        rb = GetComponent<Rigidbody>();
        Physics.IgnoreCollision(wall, GetComponent<Collider>());
        Physics.IgnoreCollision(wall2, GetComponent<Collider>());
        Physics.IgnoreCollision(brickWall.GetComponent<Collider>(), GetComponent<Collider>());
        spriteRenderer = gameObject.GetComponent<SpriteRenderer>();
        if(PlayerPrefs.GetInt("selectedPaddle") == 0) {
            spriteRenderer.sprite = basic;
        } else if (PlayerPrefs.GetInt("selectedPaddle") == 1) {
            spriteRenderer.sprite = dark;
        } else if (PlayerPrefs.GetInt("selectedPaddle") == 2) {
            spriteRenderer.sprite = pro;
        } else if (PlayerPrefs.GetInt("selectedPaddle") == 3) {
            spriteRenderer.sprite = basic;
            spriteRenderer.color = Color.red;
        } else if (PlayerPrefs.GetInt("selectedPaddle") == 4) {
            spriteRenderer.sprite = basic;
            spriteRenderer.color = Color.yellow;
        } else if (PlayerPrefs.GetInt("selectedPaddle") == 5) {
            spriteRenderer.sprite = basic;
            spriteRenderer.color = Color.green;
        } else if (PlayerPrefs.GetInt("selectedPaddle") == 6) {
            spriteRenderer.sprite = basic;
            spriteRenderer.color = new Color(1, 0.4f, 0, 1);
        } else if (PlayerPrefs.GetInt("selectedPaddle") == 7) {
            spriteRenderer.sprite = basic;
            spriteRenderer.color = Color.cyan;
        }
    }

    void splitPaddles(Transform secondPos) {
        paddle2 = Instantiate(paddleP1, secondPos.transform.position, secondPos.transform.rotation);
    }

    void combinePaddles() {
        Destroy(paddle2);
    }

    void OnTriggerEnter(Collider collision) {
        Camera cam = Camera.main;
        float height = 2f * cam.orthographicSize;
        float width = height * cam.aspect;
        if(collision.transform.name == "switchL") {
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
        if(collision.transform.tag == "extend") {
            transform.localScale += new Vector3(0.08f, 0f, 0f);
            extendPaddle.Play();
            StartCoroutine(waitResize());
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
            brickHits = 0;
            isActive = false;
            brickWall.transform.gameObject.SetActive(false);
    }

    public void EndBrick() {
        brickHits = 0;
        isActive = false;
        brickWall.transform.gameObject.SetActive(false);
    }

    public static void hitBrick() {
        brickHits += 1;
    }

    // Update is called once per frame
    void Update()
    {
        if(isPaddle1) {
        transform.Translate(Input.GetAxis("Horizontal") * speed * Time.deltaTime, 0f, 0f, Space.World);
        if(Input.touchCount > 0) {
            Touch touch = Input.GetTouch(0);
            touchPosition = Camera.main.ScreenToWorldPoint(touch.position); 
            touchPosition.z = 0f;
            touchPosition.y = -3.45f;
            direction.x = (touchPosition.x - transform.position.x);
            rb.velocity = new Vector3(direction.x, 0f, 0f) * speed;
            if(touch.tapCount == 2) {
                tP2 = Camera.main.ScreenToWorldPoint(touch.position);
                tP2.z = 0f;
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
