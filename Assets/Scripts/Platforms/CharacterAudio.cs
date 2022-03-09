using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DG.Tweening;

public class CharacterAudio : MonoBehaviour
{

    public AudioClip footstep;
    public AudioClip jump;
    public AudioClip walljump;
    public AudioClip slide;
    public AudioClip land;
    public AudioClip coin;
    private AudioSource src;

    private static CharacterAudio _instance;
    public static CharacterAudio Instance { get { return _instance; } }

    private void Awake()
    {
        if (_instance != null && _instance != this)
        {
            Destroy(gameObject);
        }
        else
        {
            _instance = this;
        }
    }

    private void Start()
    {
        src = GetComponent<AudioSource>();
    }

    public void Footstep()
    {
        src.PlayOneShot(footstep);
    }
    public void Coin()
    {
        src.PlayOneShot(coin);
    }

    public void Jump()
    {
        src.PlayOneShot(jump);
        //Debug.Log("jumping");
    }

    public void WallJump()
    {
        src.PlayOneShot(walljump);
        //Debug.Log("wall jumping");
    }

    public void Slide()
    {
        src.PlayOneShot(slide);
       //Debug.Log("sliding");
    }
    public void Land()
    {
        src.PlayOneShot(land);
        //Debug.Log("landed");
    }
}
