using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TotemlandCharacter : MonoBehaviour
{
    public GameObject character;
    public float invokeTime;

    private void Start()
    {
        Invoke("EnableChar", invokeTime);
    }

    private void OnDestroy()
    {
        character.SetActive(false);
    }

    private void EnableChar()
    {
        if(PlayerPrefs.HasKey("organg_key" + 1))
        {
            character.SetActive(true);
        }
    }
}
