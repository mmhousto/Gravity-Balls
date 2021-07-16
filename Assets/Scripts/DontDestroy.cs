using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DontDestroy : MonoBehaviour
{
    // Start is called before the first frame update
    void Awake(){
    	GameObject[] objs = GameObject.FindGameObjectsWithTag("dontDestroy");
        GameObject[] btns = GameObject.FindGameObjectsWithTag("settingsSound");

        if (objs.Length > 2)
        {
            Destroy(this.gameObject);
        }

        if (btns.Length > 1)
        {
            Destroy(this.gameObject);
        }

        DontDestroyOnLoad(this.gameObject);
    }

    void Update()
    {
        GameObject[] btns = GameObject.FindGameObjectsWithTag("settingsSound");

        if (btns.Length > 1)
        {
            Destroy(this.gameObject);
        }
    }
}
