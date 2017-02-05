using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Key : MonoBehaviour 
{
	public GameObject keyPoofPrefab; //Creates a reference to the KeyPoofPrefab in the Inspector
	public GameObject door; //Creates a reference to the Door GameObject in the Inspector (so we can call the Unlock method on it)

	public void OnKeyClicked()
	{
		Instantiate (keyPoofPrefab, transform.position, Quaternion.Euler(-90,0,0)); // Instatiate the KeyPoof Prefab where this key is located
		door.GetComponent<Door>().Unlock(); // Calls the Unlock() method on the Door (using the reference to the Door GameObject & getting its script)
		Destroy(gameObject); // Destroys the key
    }

}
