using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Door : MonoBehaviour 
{
	bool locked = true;// tracks the status of the door being locked or unlocked
	bool closed = true; // tracks the door being closed or opened
	public AudioClip doorOpened; // creates reference to an audio clip that plays when the door is unlocked by the key
	public AudioClip doorClosed; // creates reference to an audio clip that plays when the user tries to open the door without the key
	public AudioSource doorAudioSource; // creates a reference for the audio source that is assigned to the two door audio clips


	void Update() {
		if (!locked && !closed && transform.position.y < 19.5f) { // If door is unlocked, the user clicked on it, & it hasn't been opened already
				transform.Translate (0, 2.5f * Time.deltaTime, 0, Space.World);      
			}

		// Animate the door raising up
	}

	public void Unlock()
	{
		doorAudioSource.clip = doorOpened; // assigns audio source to door opened audio clip
		doorAudioSource.Play(); // plays the door opened audio clip
		locked = !locked; // changes status of locked door to unlocked
	}

	public void openDoor()
	{
		if (!locked) { // first check to make sure door is unlocked
			closed = !closed; // if yes, then change status of door to opened which will trigger the animation in Update()

		} else { // if the door is still locked then the user didn't collect the key so the door doesn't open.
			doorAudioSource.clip = doorClosed; // assigns audio source to door closed audio clip
			doorAudioSource.Play(); // plays the door closed audio clip
		}
	}
}


