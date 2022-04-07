using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class totemLandChar : MonoBehaviour
{
    public GameObject totem;

    private void OnEnable()
    {
        totem.SetActive(true);
    }

    private void OnDisable()
    {
        totem.SetActive(false);
    }
}
