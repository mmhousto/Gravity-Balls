using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class countDown : MonoBehaviour
{
	private TextMeshPro text;
    void Start(){
        gameObject.SetActive(true);
    }
    // Start is called before the first frame update
    void OnEnable()
    {
        text = GetComponent<TextMeshPro>();
        StartCoroutine(CountDown());
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    IEnumerator CountDown() {
    	text.SetText("3");
    	yield return new WaitForSeconds(1);
    	text.SetText("2");
    	yield return new WaitForSeconds(1);
    	text.SetText("1");
    	yield return new WaitForSeconds(0.5f);
        text.SetText("Go!");
        yield return new WaitForSeconds(0.5f);
    	gameObject.SetActive(false);
    }
}
