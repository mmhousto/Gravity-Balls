using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class MainMenu : MonoBehaviour
{

	public void PlaySolo() {
		Destroy(GameObject.Find("AudioManager"));
		SceneManager.LoadScene(1);
	}

}
