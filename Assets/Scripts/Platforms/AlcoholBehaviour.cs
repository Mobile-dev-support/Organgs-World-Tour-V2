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
    [Header("CHECK")]
    [SerializeField] private float radius;
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
                RB.velocity = transform.up * jumpHeight;
                SquishAndStretch();
                jumpTimer = JumpTimerDefault;
            }
        }
    }

    public void SquishAndStretch()
    {
        StartCoroutine(JumpSqueeze(wallSquash.x, wallSquash.y, wallSquash.z, true));
    }

    IEnumerator JumpSqueeze(float xSqueeze, float ySqueeze, float seconds, bool isInstant)
    {
        Vector3 originalSize = Vector3.one;
        Vector3 newSize = new Vector3(xSqueeze, ySqueeze, originalSize.z);
        float t = 0f;
        if (isInstant == false)
        {
            while (t <= 1.0)
            {
                t += Time.deltaTime / seconds;
                gameObject.transform.localScale = Vector3.Lerp(originalSize, newSize, t);
                yield return null;
            }
            t = 0f;
        }
        while (t <= 1.0)
        {
            t += Time.deltaTime / seconds;
            gameObject.transform.localScale = Vector3.Lerp(newSize, originalSize, t);
            yield return null;
        }

    }

    private void OnCollisionEnter2D(Collision2D other)
    {
        if (other.collider.CompareTag("Spikes"))
        {
            Instantiate(chunk, transform.position, chunk.transform.rotation);
            Destroy(gameObject, 0.01f);
        }
    }

    void OnDrawGizmosSelected()
    {
        Gizmos.color = Color.blue * new Color(1, 1, 1, 0.5f);
        Gizmos.DrawWireSphere(groundCheck.position, radius);
    }
}
