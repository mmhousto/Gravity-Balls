using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class paddle : MonoBehaviour
{
    public Collider wall, wall2, switchL, switchR;
	public bool isPaddle1;
    private SpriteRenderer spriteRenderer;
    public Sprite basic, dark, pro;
	public float speed = 20f;
    private Vector3 touchPosition, tP2;
    private Rigidbody rb;
    private Vector3 direction;
    public GameObject brickWall, paddleP1;
    private GameObject paddle2;
    private bool isActive = false;

    // Start is called before the first frame update
    void Start()
    {
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
        }
    }

    void splitPaddles(Transform secondPos){
        paddle2 = Instantiate(paddleP1, secondPos.transform.position, secondPos.transform.rotation);
    }

    void combinePaddles(){
        Destroy(paddle2);
    }

    void OnTriggerEnter(Collider collision) {
        if(collision.transform.name == "switchL"){
            transform.Translate(5f, 0f, 0f);
        } else if(collision.transform.name == "switchR"){
            transform.Translate(-5f, 0f, 0f);
        }
    }
    void OnCollisionEnter(Collision collision) {
        if(collision.transform.tag == "extend"){
            transform.localScale += new Vector3(.465f, 0f, 0f);
            StartCoroutine(waitResize());
        }
        if(collision.transform.tag == "life"){
            GameManager.lives += 1;
        }
        if(collision.transform.tag == "coin"){
            GameManager.collectCoin();
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

    IEnumerator waitTen(){
        yield return new WaitForSeconds(10);
    }

    IEnumerator waitResize(){
        yield return new WaitForSeconds(15);
            transform.localScale -= new Vector3(.465f, 0f, 0f);
    }

    IEnumerator brickBreak(){
        yield return new WaitForSeconds(10);
            isActive = false;
            brickWall.transform.gameObject.SetActive(false);
    }

    // Update is called once per frame
    void Update()
    {
        if(isPaddle1){
        transform.Translate(Input.GetAxis("Horizontal") * speed * Time.deltaTime, 0f, 0f, Space.World);
        if(Input.touchCount > 0){
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
    }
}
