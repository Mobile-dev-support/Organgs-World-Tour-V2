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
    private GameObject CinematicsTrigger;
    #region Key Variables
    private int totem_key { get; set; }
    #endregion

    public void Load()
    {
        PlayerPrefs.GetInt("totem_key" + DoorController.Instance.country, totem_key);
    }

    public void Save()
    {
        PlayerPrefs.SetInt("totem_key" + DoorController.Instance.country, totem_key);
    }

    private void OnEnable()
    {
        gameObject.GetComponent<Transform>().
            DOShakeScale(duration, str, vibrato, randomness).SetLoops(-1, LoopType.Yoyo);
    }

    private void Start()
    {
        Load();
        CinematicsTrigger = GameObject.Find("CinematicsTrigger");
        if (PlayerPrefs.HasKey("totem_key" + DoorController.Instance.country)) 
        {
            Destroy(gameObject, 0.01f);
            Destroy(CinematicsTrigger, 0.01f);
            Debug.Log("already have a shard!");
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
            totem_key = 1;
            Save();
            CharacterAudio.Instance.Shard();
            totemlandActivation.Instance.Initialize();
            Destroy(gameObject, 0.01f);
        }
    }
}
