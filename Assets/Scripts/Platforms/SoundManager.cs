using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SoundManager : MonoBehaviour
{
    private static SoundManager _instance;
    public static SoundManager Instance { get { return _instance; } }

    [SerializeField] private AudioSource music;
    [SerializeField] private AudioSource sfx;

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
    #region MainMenu
    public void MusicAudio(AudioClip clip)
    {
        music.clip = clip;
        music.loop = true;
        music.Play();
    }
    public void StopMusicAudio(AudioClip clip)
    {
        music.clip = clip;
        music.loop = false;
        music.Stop();
    }
    public void SFXAudio(AudioClip clip)
    {
        music.clip = clip;
        music.loop = true;
        music.Play();
    }
    public void StopSFXAudio(AudioClip clip)
    {
        music.clip = clip;
        music.loop = false;
        music.Stop();
    }
    public void BeepTimer(AudioClip clip)
    {
        music.PlayOneShot(clip);
    }
    #endregion

    #region Button
    public void ButtonSound(AudioClip clip)
    {
        music.PlayOneShot(clip);
    }
    #endregion

    #region Win Panel
    public void winSound(AudioClip clip)
    {
        music.PlayOneShot(clip);
    }
    #endregion

    #region Background Music

    public void BGMusic(AudioClip clip)
    {
        music.clip = clip;
        music.loop = true;
        music.Play();
    }

    public void OutBGMusic(AudioClip clip)
    {
        music.clip = clip;
        music.loop = false;
        music.Stop();
    }

    #endregion
}
