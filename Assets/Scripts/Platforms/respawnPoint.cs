using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class respawnPoint : MonoBehaviour
{
    private void OnTriggerEnter2D(Collider2D other)
    {
        if (other.gameObject.CompareTag("Player"))
        {
            GameManager.Instance.respawnPoint = gameObject.transform;
        }
    }
}
