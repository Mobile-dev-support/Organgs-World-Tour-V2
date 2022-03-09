using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AlcoholTrigger : MonoBehaviour
{
    private void OnTriggerEnter2D(Collider2D other)
    {
        if (other.gameObject.CompareTag("Player"))
        {
            Destroy(gameObject.transform.parent.gameObject, 0.01f);
        }
    }
}