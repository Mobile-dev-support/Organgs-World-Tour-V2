using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DG.Tweening;

public class JumpPad : MonoBehaviour
{
    private bool isKnockbackActive;
    private float knockbackStartTime;
    private Core coreP;
    [Header("Deflector")]
    [SerializeField]
    private Vector2 angle;
    [SerializeField]
    private float strength;
    [SerializeField]
    private int direction;
    [Header("Jump Pad")]
    [SerializeField]
    private float bounce = 20f;
    [Header("Deflector Check")]
    [SerializeField]
    private bool isDeflector;
    private string jumpAnimation = "jump";

    private void Update()
    {
        if(coreP != null)
        CheckKnockback();
    }

    private void OnTriggerEnter2D(Collider2D other)
    {

        if (other.gameObject.CompareTag("Player"))
        {
            gameObject.GetComponent<Animator>().SetTrigger(jumpAnimation);
            Core core = other.GetComponent<Collider2D>().GetComponentInChildren<Core>();
            Rigidbody2D rb = other.GetComponent<Collider2D>().GetComponent<Rigidbody2D>();
            if (!isDeflector)
            {
                Vector2 velocity = rb.velocity;
                velocity.y = bounce;
                rb.velocity = velocity;
            }
            else
            {
                coreP = core;
                Collider2D[] playerOnPlatform = Physics2D.OverlapCircleAll(rb.transform.position, rb.GetComponentInChildren<CollisionSenses>().DeathCheckY);
                foreach (Collider2D collider in playerOnPlatform)
                {
                    if (collider.gameObject.CompareTag("JumpPad"))
                    {
                        Knockback(angle, strength, direction);
                    }
                }
            }
        }
    }
    private void OnTriggerStay2D(Collider2D other)
    {

        if (other.gameObject.CompareTag("Player"))
        {
            gameObject.GetComponent<Animator>().SetTrigger(jumpAnimation);
            Core core = other.GetComponent<Collider2D>().GetComponentInChildren<Core>();
            Rigidbody2D rb = other.GetComponent<Collider2D>().GetComponent<Rigidbody2D>();
            if (!isDeflector)
            {
                Vector2 velocity = rb.velocity;
                velocity.y = bounce;
                rb.velocity = velocity;
            }
            else
            {
                coreP = core;
                Collider2D[] playerOnPlatform = Physics2D.OverlapCircleAll(rb.transform.position, rb.GetComponentInChildren<CollisionSenses>().DeathCheckY);
                foreach (Collider2D collider in playerOnPlatform)
                {
                    if (collider.gameObject.CompareTag("JumpPad"))
                    {
                        Knockback(angle, strength, direction);
                    }
                }
            }
        }
    }

    public void Knockback(Vector2 angle, float strength, int direction)
    {
        coreP.Movement.SetVelocity(strength, angle, direction);
        coreP.Movement.Flip();
        coreP.Movement.CanSetVelocity = false;
        isKnockbackActive = true;
        knockbackStartTime = Time.time;
    }

    private void CheckKnockback()
    {
        if (isKnockbackActive && coreP.Movement.CurrentVelocity.y <= 0.01f && coreP.CollisionSenses.Ground)
        {
            isKnockbackActive = false;
            coreP.Movement.CanSetVelocity = true;
        }
    }
}
