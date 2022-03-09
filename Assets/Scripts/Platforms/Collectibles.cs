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
            ScoringMechanism.Instance.coinScore();
            CharacterAudio.Instance.Coin();
            ScoringMechanism.Instance.coinNo += 1;
            Destroy(gameObject);
        }
    }
}