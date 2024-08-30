using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class cookieBehaviour : MonoBehaviour
{
    public GameObject chunk;
    [Header("Jump towards Player")]
    private Animator anim;
    [SerializeField] private float jumpHeight;
    [SerializeField] private float radius;
    [SerializeField] private LayerMask whatIsPlayer;
    [Header("Knockback")]
    [SerializeField]
    private Vector2 angle;
    [SerializeField]
    private float strength;

    private static readonly string ANIMATION_DETECT = "playerDetected";
    private Rigidbody2D rb;
    private Core coreP;

    private void Start()
    {
        anim = GetComponent<Animator>();
        rb = GetComponent<Rigidbody2D>();
    }

    private void FixedUpdate()
    {
        RangeOfCookie();
    }

    public void LungeAttack()
    {
        if(GameManager.Instance.Rplayer != null)
        {
            float distanceFromPlayer = GameManager.Instance.Rplayer.transform.position.x - transform.position.x;
            rb.bodyType = RigidbodyType2D.Dynamic;
            rb.AddForce(new Vector2(distanceFromPlayer, jumpHeight), ForceMode2D.Impulse);
        }
    }

    private void RangeOfCookie()
    {
        if (GameManager.Instance.Rplayer != null)
        {
            if (Vector2.Distance(transform.position, GameManager.Instance.Rplayer.transform.position) < radius)
            {
                Vector2 playerPos = GameManager.Instance.Rplayer.transform.position - transform.position;
                RaycastHit2D hit = Physics2D.Raycast(transform.position, playerPos, radius, whatIsPlayer);
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

    private void OnCollisionEnter2D(Collision2D other)
    {
        if (other.gameObject.CompareTag("Player"))
        {
            Core core = other.gameObject.GetComponentInChildren<Core>();
            coreP = core;
            Knockback(angle, strength, -coreP.Movement.FacingDirection);
            Invoke("Explosion", 0.15f);
        }
        else if (other.gameObject.layer == LayerMask.NameToLayer("Ground"))
        {
            Explosion();
        }
    }

    public void Knockback(Vector2 angle, float strength, int direction)
    {
        coreP.Movement.SetVelocity(strength, angle, direction);
        coreP.Movement.CanSetVelocity = false;
    }

    private void Explosion()
    {
        Instantiate(chunk, transform.position, chunk.transform.rotation);
        Destroy(gameObject);
    }

    private void OnDestroy()
    {
        if(coreP != null)
        {
            coreP.Movement.CanSetVelocity = true;
            coreP.Movement.SetVelocityX(0);
        }
    }
}
