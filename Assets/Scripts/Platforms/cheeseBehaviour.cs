using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class cheeseBehaviour : MonoBehaviour
{
    public GameObject chunk;
    private bool isExploded;
    private bool isTimerOn;
    private bool isFollowing;
    private Rigidbody2D rb;
    [Header("Head towards Player")]
    [SerializeField] private float speed;
    [SerializeField] private float radius;
    [SerializeField] private float timer;
    [SerializeField] private LayerMask whatIsPlayer;

    private void Start()
    {
        rb = GetComponent<Rigidbody2D>();
        isTimerOn = false;
        isExploded = false;
        isFollowing = false;
    }

    private void FixedUpdate()
    {
        RangeOfCheese();
        Explosion();
    }

    public void AttachToPlayer()
    {
        transform.position = Vector2.MoveTowards(transform.position, GameManager.Instance.Rplayer.transform.position, speed);

    }

    private void RangeOfCheese()
    {
        if (GameManager.Instance.Rplayer != null)
        {
            if (Vector2.Distance(transform.position, GameManager.Instance.Rplayer.transform.position) < radius)
            {
                Vector2 direction = GameManager.Instance.Rplayer.transform.position - transform.position;
                RaycastHit2D hit = Physics2D.Raycast(transform.position, direction, radius, whatIsPlayer);
                if (hit.collider == null)
                {
                    return;
                }
                else if (hit.collider.CompareTag("Player"))
                {
                    isTimerOn = true;
                    isFollowing = true;
                }
            }
            if (isFollowing)
            {
                AttachToPlayer();
            }
        }
        if (isTimerOn)
        {
            timer -= Time.deltaTime;
            if (timer < 0)
            {
                isExploded = true;
            }
        }
    }

    private void Explosion()
    {
        if (isExploded)
        {
            Instantiate(chunk, transform.position, chunk.transform.rotation);
            isExploded = false;
            Destroy(gameObject);
        }
    }

    private void OnCollisionEnter2D(Collision2D other)
    {
        if(other.collider.IsTouchingLayers(whatIsPlayer))
        isExploded = true;
    }
}
