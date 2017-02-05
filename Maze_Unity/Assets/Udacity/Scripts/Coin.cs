using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Coin : MonoBehaviour 
{
    //Create a reference to the CoinPoofPrefab
	public GameObject coinPoofPrefab;

    public void OnCoinClicked() {
		Instantiate (coinPoofPrefab, transform.position, Quaternion.Euler(-90,0,0)); // Instantiate the CoinPoof Prefab where this coin is located
		Destroy(gameObject); // Destroy this coin. 
    }

}
