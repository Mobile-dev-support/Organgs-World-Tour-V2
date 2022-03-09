using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class cookieBehaviour : MonoBehaviour
{
    public GameObject chunk;
    private bool isExploded;
    private Rigidbody2D rb;
    [Header("Jump towards Player")]
    private Animator anim;
    [SerializeField] private float jumpHeight;
    [SerializeField] private float radius;
    [SerializeField] private LayerMask whatIsPlayer;
    private static readonly string ANIMATION_DETECT = "playerDetected";

    private void Start()
    {
        anim = GetComponent<Animator>();
        rb = GetComponent<Rigidbody2D>();
        isExploded = false;
    }

    private void FixedUpdate()
    {
        RangeOfCookie();
        Explosion();
    }

    public void LungeAttack()
    {
        if(GameManager.Instance.Rplayer != null)
        {
            float distanceFromPlayer = GameManager.Instance.Rplayer.transform.position.x - transform.position.x;
            rb.bodyType = RigidbodyType2D.Dynamic;
            rb.AddForce(new Vector2(distanceFromPlayer, jumpHeight), ForceMode2D.Impulse);
        }
        else
        {
            isExploded = true;
        }
    }

    private void RangeOfCookie()
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
                    anim.SetBool(ANIMATION_DETECT, true);
                }
            }
        }
    }

    private void Explosion()
    {
        if (isExploded)
        {
            Instantiate(chunk, transform.position, chunk.transform.rotation);
            isExploded = false;
            Destroy(gameObject, 0.1f);
        }
    }

    private void OnCollisionEnter2D(Collision2D other)
    {
        isExploded = true;
    }
}
