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

	public void PlaySkill() {
		Destroy(GameObject.Find("AudioManager"));
		SceneManager.LoadScene(2);
	}

	public void PlayVersus()
	{
		Destroy(GameObject.Find("AudioManager"));
		SceneManager.LoadScene(3);
	}

}
