using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DG.Tweening;

public class Shard : MonoBehaviour
{
    public float duration;
    public float str;
    public int vibrato;
    public float randomness;

    private void OnEnable()
    {
        gameObject.GetComponent<Transform>().
            DOShakeScale(duration, str, vibrato, randomness).SetLoops(-1, LoopType.Yoyo);
    }

    private void Start()
    {
        if (PlayerPrefs.HasKey("totem_key" + DoorController.Instance.country)) 
        {
            Destroy(gameObject, 0.01f);
        }
    }

    private void OnDestroy()
    {
        gameObject.GetComponent<Transform>().DOKill();
    }

    private void OnTriggerEnter2D(Collider2D collision)
    {
        if (collision.gameObject.CompareTag("Player"))
        {
            DoorController.Instance.img.DOColor(Color.white, 0.5f);
            DoorController.Instance.totem_key += 1;
            DoorController.Instance.Save();
            Destroy(gameObject, 0.01f);
        }
    }
}
