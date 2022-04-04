using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CollisionSenses : CoreComponent
{
    #region Check Transforms


    public Transform GroundCheck
    {
        get => GenericNotImplementedError<Transform>.TryGet(groundCheck, core.transform.parent.name);
        private set => groundCheck = value;
    }
    public Transform DeathCheck //death
    {
        get => GenericNotImplementedError<Transform>.TryGet(deathCheck, core.transform.parent.name);
        private set => deathCheck = value;
    }
    public Transform WallCheck
    {
        get => GenericNotImplementedError<Transform>.TryGet(wallCheck, core.transform.parent.name);
        private set => wallCheck = value;
    }
    public Transform LedgeCheckHorizontal
    {
        get => GenericNotImplementedError<Transform>.TryGet(ledgeCheckHorizontal, core.transform.parent.name);
        private set => ledgeCheckHorizontal = value;
    }
    public Transform LedgeCheckVertical
    {
        get => GenericNotImplementedError<Transform>.TryGet(ledgeCheckVertical, core.transform.parent.name);
        private set => ledgeCheckVertical = value;
    }
    public Transform CeilingCheck
    {
        get => GenericNotImplementedError<Transform>.TryGet(ceilingCheck, core.transform.parent.name);
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
        get => Physics2D.OverlapCircleNonAlloc(CeilingCheck.position, ceilingCheckRadius, GameManager.Instance.ground, whatIsGround) > 0;
    }

    public bool SolidPlatformCeiling
    {
        get => Physics2D.OverlapCircleNonAlloc(CeilingCheck.position, ceilingCheckRadius, GameManager.Instance.solidplatforms, whatIsSolidPlatform) > 0;
    }

    public bool Ground
    {
        get => Physics2D.OverlapCircleNonAlloc(GroundCheck.position, groundCheckRadius, GameManager.Instance.ground, whatIsGround) > 0;
    }

    public bool ThroughPlatform
    {
        get => Physics2D.OverlapCircleNonAlloc(GroundCheck.position, groundCheckRadius, GameManager.Instance.throughplatforms, whatIsThroughPlatform) > 0;
    }

    public bool SolidPlatform
    {
        get => Physics2D.OverlapCircleNonAlloc(GroundCheck.position, groundCheckRadius, GameManager.Instance.solidplatforms, whatIsSolidPlatform) > 0;
    }

    public bool SlipperyPlatform
    {
        get => Physics2D.OverlapCircleNonAlloc(GroundCheck.position, groundCheckRadius, GameManager.Instance.slipperyground, whatIsSlipperyPlatform) > 0;
    }

    public bool SugarPlatform
    {
        get => Physics2D.OverlapCircleNonAlloc(GroundCheck.position, groundCheckRadius, GameManager.Instance.sugarplatform, whatIsSugarPlatform) > 0;
    }

    public bool Trap
    {
        get => Physics2D.OverlapCircleNonAlloc(DeathCheck.position, deathCheckRadius, GameManager.Instance.trap, whatIsTrap) > 0;
    }

    public bool WallFront
    {
        get => Physics2D.RaycastNonAlloc(WallCheck.position, Vector2.right * core.Movement.FacingDirection, GameManager.Instance.groundRay, wallCheckDistance, whatIsGround) > 0;
    }

    public bool LedgeHorizontal
    {
        get => Physics2D.RaycastNonAlloc(LedgeCheckHorizontal.position, Vector2.right * core.Movement.FacingDirection, GameManager.Instance.groundRay, wallCheckDistance, whatIsGround) > 0;
    }

    public bool LedgeVertical
    {
        get => Physics2D.RaycastNonAlloc(LedgeCheckVertical.position, Vector2.down, GameManager.Instance.groundRay, wallCheckDistance, whatIsGround) > 0;
    }

    public bool WallBack
    {
        get => Physics2D.RaycastNonAlloc(WallCheck.position, Vector2.right * -core.Movement.FacingDirection, GameManager.Instance.groundRay, wallCheckDistance, whatIsGround) > 0;
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
