﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class MainMenu : MonoBehaviour {

	private static GameObject settingsBtns, music, sound;
	private static bool isChangingScenes;

	void Start()
    {
		isChangingScenes = false;
		settingsBtns = GameObject.FindWithTag("settingsSound");
		music = GameObject.FindWithTag("music");
		sound = GameObject.FindWithTag("sound");
		StartCoroutine(Wait());
	}

	void Update()
    {
        if (GameObject.Find("settingsScreen"))
        {
			ActivateSettingsBtns();
        } else if(!GameObject.Find("settingsScreen") && !isChangingScenes)
        {
			DeactivateSettingsBtns();
        }
    }

	IEnumerator Wait()
	{
		yield return new WaitForSeconds(0.01f);
		DeactivateSettingsBtns();
	}

	public static void ActivateSettingsBtns()
    {
		settingsBtns.SetActive(true);
	}

	public static void DeactivateSettingsBtns()
	{
		settingsBtns.SetActive(false);
	}

	public static void VersusSettings()
    {
		isChangingScenes = true;
		settingsBtns.SetActive(true);
		music.SetActive(false);
		sound.SetActive(false);
    }

	public static void MainMenuSettings()
    {
		settingsBtns.SetActive(false);
		music.SetActive(false);
		sound.SetActive(false);
	}

	public void GoToMainMenu()
    {
		isChangingScenes = true;
		settingsBtns.gameObject.SetActive(true);
		//Destroy(GameObject.Find("AudioManager"));
		Destroy(GameObject.Find("PlayerData"));
		Destroy(GameObject.Find("PlayServices"));
		SceneManager.LoadScene(0);
	}

	public void PlaySolo() {
		//Destroy(GameObject.Find("AudioManager"));
		isChangingScenes = true;
		settingsBtns.gameObject.SetActive(true);
		SceneManager.LoadScene(1); //StartCoroutine(LoadYourAsyncScene("gameSingle"));
	}

	public void PlaySkill() {
		//Destroy(GameObject.Find("AudioManager"));
		isChangingScenes = true;
		settingsBtns.gameObject.SetActive(true);
		SceneManager.LoadScene(2);//StartCoroutine(LoadYourAsyncScene("gameSkill"));
	}

	public void PlayVersus()
	{
		isChangingScenes = true;
		settingsBtns.gameObject.SetActive(true);
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
