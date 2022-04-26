using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Collectibles : MonoBehaviour
{

    private void OnTriggerEnter2D(Collider2D other)
    {
        if (other.gameObject.CompareTag("Player"))
        {
            CharacterAudio.Instance.Coin();
            Destroy(gameObject);
            if (ScoringMechanism.Instance != null)
                ScoringMechanism.Instance.coinScore();
        }
    }
}