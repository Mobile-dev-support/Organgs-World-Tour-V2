using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class candyBehaviour : MonoBehaviour
{
    [Header("JUMP HEIGHT AND JUMP TIME")]
    public float jumpHeight;
    public float jumpTimer;
    private Rigidbody2D RB;
    private float JumpTimerDefault;
    [Header("CHECK")]
    [SerializeField] private float radius;
    [SerializeField] private float deathradius;
    public Transform groundCheck;
    public LayerMask layer;
    public GameObject chunk;
    [Header("SQUISH AND STRETCH")]
    public Vector3 wallSquash = new Vector3(0.6f, 1.66f, 0.1f);

    private void Start()
    {
        RB = GetComponent<Rigidbody2D>();
        JumpTimerDefault = jumpTimer;
    }

    private void OnEnable()
    {
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
            Destroy(gameObject, 0.15f);
        }
        if (other.collider.CompareTag("Player"))
        {
            Debug.Log("Player died because of candy");
            other.gameObject.GetComponent<Player>().StateMachine.ChangeState(other.gameObject.GetComponent<Player>().DeathState);
            Instantiate(chunk, transform.position, chunk.transform.rotation);
            Destroy(gameObject, 0.15f);
        }
    }

    void OnDrawGizmosSelected()
    {
        Gizmos.color = Color.blue * new Color(1, 1, 1, 0.5f);
        Gizmos.DrawWireSphere(groundCheck.position, radius);
    }
}
