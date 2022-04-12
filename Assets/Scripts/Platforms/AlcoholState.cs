using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AlcoholState : MonoBehaviour
{
    public GameObject chunk;
    // Start is called before the first frame update
    void OnEnable()
    {
        if (PlayerControls.Instance)
        {
            PlayerControls.Instance.CheckDrunk();
            PlayerControls.Instance.ReverseControl();
        }
    }

    // Update is called once per frame
    void OnDisable()
    {
        Instantiate(chunk, transform.position, chunk.transform.rotation);
    }
}
