using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerAfterImageSprite : MonoBehaviour
{
    [SerializeField] 
    private float activeTime = 0.1f;
    private float timeActivated;
    private float alpha;
    [SerializeField]
    private float alphaSet = 0.8f;
    [SerializeField]
    private float alphaDecay = 0.85f;

    private GameObject player;

    private SpriteRenderer SR;
    private SpriteRenderer playerSR;

    private Color color;
    public bool isAfterImage;
    [Header("DUST SCALE")]
    public float minScale, maxScale;

    private void OnEnable()
    {
        float random = Random.Range(minScale, maxScale);
        player = GameManager.Instance.Rplayer;
        playerSR = player.GetComponent<SpriteRenderer>();
        SR = GetComponent<SpriteRenderer>();
        alpha = alphaSet;
        timeActivated = Time.time;
        transform.position = player.transform.position;
        transform.rotation = player.transform.rotation;
        if (isAfterImage)
        {
            SR.sprite = playerSR.sprite;
        }
        else
        {
            transform.localScale = new Vector2(random, random);
        }
    }

    private void Update()
    {
        alpha -= alphaDecay * Time.deltaTime;
        color = new Color(1f, 1f, 1f, alpha);
        SR.color = color;

        if(Time.time >= (timeActivated + activeTime))
        {
            if (isAfterImage)
            {
                PlayerAfterImagePool.Instance.AddToPool(gameObject);
            }
            else
            {
                trailPool.Instance.AddToPool(gameObject);
            }

        }

    }
}
