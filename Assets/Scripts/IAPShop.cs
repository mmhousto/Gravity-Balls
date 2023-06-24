using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Purchasing;

public class IAPShop : MonoBehaviour {

	private string coinsX10 = "com.MorganHouston.GravityBalls.coinsX10";
	private string coinsX30 = "com.MorganHouston.GravityBalls.coinsX30";
	private string coinsX50 = "com.MorganHouston.GravityBalls.coinsX50";
	private string coinsX80 = "com.MorganHouston.GravityBalls.coinsX80";
	private string coinsX150 = "com.MorganHouston.GravityBalls.coinsX150";
	private string coinsX500 = "com.MorganHouston.GravityBalls.coinsX500";
	private static int coins;
	public GameObject restorePurchasesBtn;

	void Awake() {
		DisableRestorePurchasesBtn();
	}

	void Start() {
		coins = PlayerData.Instance.getcoins();
	}

	void Update() {
		coins = PlayerData.Instance.getcoins();
	}
    
	public void OnPurchaseComplete(Product product) {
		if (product.definition.id == coinsX10) {
			coins += 10;
			PlayerPrefs.SetInt("Coins", coins);
		}

		if (product.definition.id == coinsX30) {
			coins += 30;
			PlayerPrefs.SetInt("Coins", coins);
		}

		if (product.definition.id == coinsX50) {
			coins += 50;
			PlayerPrefs.SetInt("Coins", coins);
		}

		if (product.definition.id == coinsX80) {
			coins += 80;
			PlayerPrefs.SetInt("Coins", coins);
		}

		if (product.definition.id == coinsX150) {
			coins += 150;
			PlayerPrefs.SetInt("Coins", coins);
		}

		if (product.definition.id == coinsX500) {
			coins += 500;
			PlayerPrefs.SetInt("Coins", coins);
		}

	}

	public void OnPurchaseFailed(Product product, PurchaseFailureReason reason) {
		Debug.Log("Purchase of " + product.definition.id + " failed due to " + reason);
	}

	private void DisableRestorePurchasesBtn() {
		if (Application.platform != RuntimePlatform.IPhonePlayer) {
			restorePurchasesBtn.SetActive(false);
		}
	}


}
