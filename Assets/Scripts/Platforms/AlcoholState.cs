using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AlcoholState : MonoBehaviour
{
    public GameObject chunk;

    // Update is called once per frame
    void OnDisable()
    {
        Instantiate(chunk, transform.position, chunk.transform.rotation);
    }
}
