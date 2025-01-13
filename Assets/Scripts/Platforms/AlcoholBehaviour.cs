using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AlcoholBehaviour : MonoBehaviour
{
    [Header("JUMP HEIGHT AND JUMP TIME")]
    public float jumpHeight;
    public float jumpTimer;
    private Rigidbody2D RB;
    private float JumpTimerDefault;
    private Animator anim;
    [Header("CHECK")]
    [SerializeField] private float radius;
    public Transform groundCheck;
    public LayerMask layer;
    public GameObject chunk;

    private void Start()
    {
        anim = GetComponent<Animator>();
        RB = GetComponent<Rigidbody2D>();
        JumpTimerDefault = jumpTimer;
    }

    private void FixedUpdate()
    {
        GroundCheck();
    }

    private void GroundCheck()
    {
        Collider2D collider = Physics2D.OverlapCircle(groundCheck.position, radius, layer);
        if (collider)
        {
            jumpTimer -= Time.deltaTime;
            if (jumpTimer < 0)
            {
                anim.SetTrigger("jump");
                RB.linearVelocity = transform.up * jumpHeight;
                jumpTimer = JumpTimerDefault;
            }
        }
    }

    private void OnCollisionEnter2D(Collision2D other)
    {
        if (other.collider.CompareTag("Spikes"))
        {
            Instantiate(chunk, transform.position, chunk.transform.rotation);
            Destroy(gameObject, 0.01f);
        }
        if (other.gameObject.CompareTag("Player"))
        {
            anim.ResetTrigger("jump");
            Destroy(gameObject, 0.01f);
        }
    }

    void OnDrawGizmosSelected()
    {
        Gizmos.color = Color.blue * new Color(1, 1, 1, 0.5f);
        Gizmos.DrawWireSphere(groundCheck.position, radius);
    }
}
