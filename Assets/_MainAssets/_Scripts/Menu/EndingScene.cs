using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EndingScene : MonoBehaviour
{
    public GameObject Lock;
    public GameObject DanceScene2;

    private void LateUpdate()
    {
        if (!Lock.activeInHierarchy)
        {
            DanceScene2.SetActive(true);
        }
    }
}
