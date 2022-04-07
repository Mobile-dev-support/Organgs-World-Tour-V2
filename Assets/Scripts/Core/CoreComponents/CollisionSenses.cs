using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CollisionSenses : CoreComponent
{
    #region Check Transforms


    public Transform GroundCheck
    {
        get => GenericNotImplementedError<Transform>.TryGet(groundCheck, core.transform.parent);
        private set => groundCheck = value;
    }
    public Transform DeathCheck //death
    {
        get => GenericNotImplementedError<Transform>.TryGet(deathCheck, core.transform.parent);
        private set => deathCheck = value;
    }
    public Transform WallCheck
    {
        get => GenericNotImplementedError<Transform>.TryGet(wallCheck, core.transform.parent);
        private set => wallCheck = value;
    }
    public Transform LedgeCheckHorizontal
    {
        get => GenericNotImplementedError<Transform>.TryGet(ledgeCheckHorizontal, core.transform.parent);
        private set => ledgeCheckHorizontal = value;
    }
    public Transform LedgeCheckVertical
    {
        get => GenericNotImplementedError<Transform>.TryGet(ledgeCheckVertical, core.transform.parent);
        private set => ledgeCheckVertical = value;
    }
    public Transform CeilingCheck
    {
        get => GenericNotImplementedError<Transform>.TryGet(ceilingCheck, core.transform.parent);
        private set => ceilingCheck = value;
    }
    public float GroundCheckRadius { get => groundCheckRadius; set => groundCheckRadius = value; }
    public float DeathCheckRadius { get => deathCheckRadius; set => deathCheckRadius = value; }
    public float WallCheckDistance { get => wallCheckDistance; set => wallCheckDistance = value; }
    public LayerMask WhatIsGround { get => whatIsGround; set => whatIsGround = value; }


    [SerializeField] private Transform groundCheck;
    [SerializeField] private Transform deathCheck;
    [SerializeField] private Transform wallCheck;
    [SerializeField] private Transform ledgeCheckHorizontal;
    [SerializeField] private Transform ledgeCheckVertical;
    [SerializeField] private Transform ceilingCheck;

    [SerializeField] private float groundCheckRadius;
    [SerializeField] private float ceilingCheckRadius;
    [SerializeField] private float wallCheckDistance;
    [SerializeField] private float deathCheckRadius;

    [SerializeField] private LayerMask whatIsGround;
    [SerializeField] private LayerMask whatIsThroughPlatform;
    [SerializeField] private LayerMask whatIsSolidPlatform;
    [SerializeField] private LayerMask whatIsSlipperyPlatform;
    [SerializeField] private LayerMask whatIsSugarPlatform;
    [SerializeField] private LayerMask whatIsTrap;

    #endregion

    public bool Ceiling
    {
        get => Physics2D.OverlapCircle(CeilingCheck.position, ceilingCheckRadius, whatIsGround);
    }

    public bool SolidPlatformCeiling
    {
        get => Physics2D.OverlapCircle(CeilingCheck.position, ceilingCheckRadius, whatIsSolidPlatform);
    }

    public bool Ground
    {
        get => Physics2D.OverlapCircle(GroundCheck.position, groundCheckRadius, whatIsGround);
    }

    public bool ThroughPlatform
    {
        get => Physics2D.OverlapCircle(GroundCheck.position, groundCheckRadius, whatIsThroughPlatform);
    }

    public bool SolidPlatform
    {
        get => Physics2D.OverlapCircle(GroundCheck.position, groundCheckRadius, whatIsSolidPlatform);
    }

    public bool SlipperyPlatform
    {
        get => Physics2D.OverlapCircle(GroundCheck.position, groundCheckRadius, whatIsSlipperyPlatform);
    }

    public bool SugarPlatform
    {
        get => Physics2D.OverlapCircle(GroundCheck.position, groundCheckRadius, whatIsSugarPlatform);
    }

    public bool Trap
    {
        get => Physics2D.OverlapCircle(DeathCheck.position, deathCheckRadius, whatIsTrap);
    }

    public bool WallFront
    {
        get => Physics2D.Raycast(WallCheck.position, Vector2.right * core.Movement.FacingDirection, wallCheckDistance, whatIsGround);
    }

    public bool LedgeHorizontal
    {
        get => Physics2D.Raycast(LedgeCheckHorizontal.position, Vector2.right * core.Movement.FacingDirection, wallCheckDistance, whatIsGround);
    }

    public bool LedgeVertical
    {
        get => Physics2D.Raycast(LedgeCheckVertical.position, Vector2.down, wallCheckDistance, whatIsGround);
    }

    public bool WallBack
    {
        get => Physics2D.Raycast(WallCheck.position, Vector2.right * -core.Movement.FacingDirection, wallCheckDistance, whatIsGround);
    }

    private void OnDrawGizmos()
    {
        Gizmos.color = Color.red;
        Vector2 direction = Vector2.right * WallCheckDistance;
        Gizmos.DrawWireSphere(groundCheck.position, groundCheckRadius);
        Gizmos.DrawWireSphere(deathCheck.position, deathCheckRadius);
        Gizmos.DrawWireSphere(ceilingCheck.position, ceilingCheckRadius);
        Gizmos.DrawRay(wallCheck.position, direction);
        Gizmos.DrawRay(ledgeCheckHorizontal.position, direction);
    }
}
