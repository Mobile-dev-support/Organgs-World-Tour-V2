using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DG.Tweening;
using TMPro;

public class LearnAsyouPlay : MonoBehaviour
{
    public TextMeshPro tutorialText;

    private void Start()
    {
        tutorialText.DOFade(0, 0.01f);
    }
    private void OnTriggerEnter2D(Collider2D collision)
    {
        if (collision.gameObject.CompareTag("Player"))
        {
            tutorialText.DOFade(1, 0.5f);
        }
    }

    private void OnTriggerExit2D(Collider2D collision)
    {
        if (collision.gameObject.CompareTag("Player"))
        {
            tutorialText.DOFade(0, 0.5f);
        }
    }
}
