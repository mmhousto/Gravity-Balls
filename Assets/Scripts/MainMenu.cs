using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using Photon.Pun;

public class MainMenu : MonoBehaviour {

	public void GoToMainMenu()
    {
		//Destroy(GameObject.Find("AudioManager"));
		PhotonNetwork.Disconnect();
		Destroy(GameObject.Find("PlayerData"));
		Destroy(GameObject.Find("PlayServices"));
		SceneManager.LoadScene(0);
	}

	public void PlaySolo() {
		//Destroy(GameObject.Find("AudioManager"));
		SceneManager.LoadScene(1); //StartCoroutine(LoadYourAsyncScene("gameSingle"));
	}

	public void PlaySkill() {
		//Destroy(GameObject.Find("AudioManager"));
		SceneManager.LoadScene(2);//StartCoroutine(LoadYourAsyncScene("gameSkill"));
	}

	public void PlayVersus()
	{
		//Destroy(GameObject.Find("AudioManager"));
		SceneManager.LoadScene(3);
	}

	/*IEnumerator LoadYourAsyncScene(string m_Scene)
	{
		// Set the current Scene to be able to unload it later
		Scene currentScene = SceneManager.GetActiveScene();

		// The Application loads the Scene in the background at the same time as the current Scene.
		AsyncOperation asyncLoad = SceneManager.LoadSceneAsync(m_Scene, LoadSceneMode.Additive);

		// Wait until the last operation fully loads to return anything
		while (!asyncLoad.isDone)
		{
			yield return null;
		}

		// Move the GameObject (you attach this in the Inspector) to the newly loaded Scene
		SceneManager.MoveGameObjectToScene(audioManager, SceneManager.GetSceneByName(m_Scene));
		// Unload the previous Scene
		SceneManager.UnloadSceneAsync(currentScene);
	}*/

}
