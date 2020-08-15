using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class gravBounce : MonoBehaviour
{
	public float speed = 3f;
    private Rigidbody localRgb;

    // Start is called before the first frame update
    void Start(){

        localRgb = GetComponent<Rigidbody>();

        float sx = Random.Range(0, 2) == 0 ? -1 : 1;
        float sy = Random.Range(1, 2) == 0 ? -1 : 1;

        localRgb.velocity = new Vector3 (speed * sx, speed * sy, 0f);
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
