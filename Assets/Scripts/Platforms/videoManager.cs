using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Video;

public class videoManager : MonoBehaviour
{
    [HideInInspector] public VideoPlayer video;
    public VideoClip[] videos;
    public View[] views;
    public View video_canvas;

    private static videoManager _instance;
    public static videoManager Instance { get { return _instance; } }

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

    public void Start()
    {
        video = GetComponent<VideoPlayer>();
        video.clip = videos[0];
        video.loopPointReached += ShowPanel;
    }

    public void ShowPanel(VideoPlayer vp)
    {
        for(int i = 0; i < views.Length; i++)
        {
            views[i].Show();
        }
        video_canvas.Hide();
    }

    public void ShowVideo()
    {
        for (int i = 0; i < views.Length; i++)
        {
            views[i].Hide();
        }
        video.clip = videos[1];
        video.Play();
        video_canvas.Show();
    }
}
