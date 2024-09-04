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
    public Transform ThroughPlatformCheck
    {
        get => GenericNotImplementedError<Transform>.TryGet(throughPlatformCheck, core.transform.parent);
        private set => throughPlatformCheck = value;
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
    public Transform WallCheckBack
    {
        get => GenericNotImplementedError<Transform>.TryGet(wallCheckBack, core.transform.parent);
        private set => wallCheckBack = value;
    }
    public Transform LedgeCheckHorizontal
    {
        get => GenericNotImplementedError<Transform>.TryGet(ledgeCheckHorizontal, core.transform.parent);
        private set => ledgeCheckHorizontal = value;
    }

    public Transform LedgeCheckHorizontalBlock
    {
        get => GenericNotImplementedError<Transform>.TryGet(ledgeCheckHorizontalBlock, core.transform.parent);
        private set => ledgeCheckHorizontalBlock = value;
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

    public Transform CeilingSlideCheck
    {
        get => GenericNotImplementedError<Transform>.TryGet(ceilingSlideCheck, core.transform.parent);
        private set => ceilingSlideCheck = value;
    }
    public float GroundCheckRadius { get => groundCheckRadius; set => groundCheckRadius = value; }
    public float DeathCheckX { get => deathCheckX; set => deathCheckX = value; }
    public float DeathCheckY { get => deathCheckY; set => deathCheckY = value; }
    public float WallCheckDistance { get => wallCheckDistance; set => wallCheckDistance = value; }
    public LayerMask WhatIsGround { get => whatIsGround; set => whatIsGround = value; }


    [SerializeField] private Transform groundCheck;
    [SerializeField] private Transform throughPlatformCheck;
    [SerializeField] private Transform deathCheck;
    [SerializeField] private Transform wallCheck;
    [SerializeField] private Transform wallCheckBack;
    [SerializeField] private Transform ledgeCheckHorizontal;
    [SerializeField] private Transform ledgeCheckHorizontalBlock;
    [SerializeField] private Transform ledgeCheckVertical;
    [SerializeField] private Transform ceilingCheck;
    [SerializeField] private Transform ceilingSlideCheck;

    [SerializeField] private float originalGroundCheckRadius;
    [SerializeField] private float groundCheckRadius;
    [SerializeField] private float ceilingCheckRadius;
    [SerializeField] private float ceilingSlideCheckRadius;
    [SerializeField] private float wallCheckDistance;
    [SerializeField] private float solidLedgeCheckDistance;
    [SerializeField] private float deathCheckX;
    [SerializeField] private float deathCheckY;

    [SerializeField] private float throughPlatformCheckX;
    [SerializeField] private float throughPlatformCheckY;

    [SerializeField] private LayerMask whatIsGround;
    [SerializeField] private LayerMask whatIsThroughPlatform;
    [SerializeField] private LayerMask whatIsSolidPlatform;
    [SerializeField] private LayerMask whatIsSlipperyPlatform;
    [SerializeField] private LayerMask whatIsSugarPlatform;
    [SerializeField] private LayerMask whatIsTrap;


    public bool isTouchingCeilingSolidPlatform;
    public bool isTouchingCeilingGround;
    #endregion
    private void Start()
    {
        originalGroundCheckRadius = groundCheckRadius;
    }
    public bool Ceiling
    {
        get => isTouchingCeilingGround;
    }

    public bool CeilingSlide
    {
        get => Physics2D.OverlapCircle(CeilingSlideCheck.position, ceilingSlideCheckRadius, whatIsGround);
    }

    public bool SolidPlatformCeiling
    {
        get => isTouchingCeilingSolidPlatform;
    }
    public bool Ground
    {
        get => Physics2D.OverlapCircle(GroundCheck.position, groundCheckRadius, whatIsGround);
    }

    public bool ThroughPlatform
    {
        get => Physics2D.OverlapBox(throughPlatformCheck.position, new Vector2(throughPlatformCheckX, throughPlatformCheckY), 0, whatIsThroughPlatform);
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
        //get => Physics2D.OverlapCircle(DeathCheck.position, deathCheckRadius, whatIsTrap);
        get => Physics2D.OverlapBox(DeathCheck.position, new Vector2(deathCheckX, deathCheckY), 0, whatIsTrap);
    }

    public bool WallFront
    {
        get => Physics2D.Raycast(WallCheck.position, Vector2.right * core.Movement.FacingDirection, wallCheckDistance, whatIsGround);
    }

    public bool LedgeHorizontal
    {
        get => Physics2D.Raycast(LedgeCheckHorizontal.position, Vector2.right * core.Movement.FacingDirection, wallCheckDistance, whatIsGround);
    }

    public bool LedgeHorizontalBlock
    {
        get => Physics2D.Raycast(LedgeCheckHorizontalBlock.position, Vector2.right * core.Movement.FacingDirection, solidLedgeCheckDistance, whatIsSolidPlatform);
    }

    public bool LedgeVertical
    {
        get => Physics2D.Raycast(LedgeCheckVertical.position, Vector2.down, wallCheckDistance, whatIsGround);
    }

    public bool WallBack
    {
        get => Physics2D.Raycast(WallCheckBack.position, Vector2.right * -core.Movement.FacingDirection, wallCheckDistance, whatIsGround);
    }
    public bool WallSolidPlatform
    {
        get => Physics2D.Raycast(WallCheck.position, Vector2.right * core.Movement.FacingDirection, wallCheckDistance, whatIsSolidPlatform);
    }
    public bool WallBackSolidPlatform
    {
        get => Physics2D.Raycast(WallCheckBack.position, Vector2.right * -core.Movement.FacingDirection, wallCheckDistance, whatIsSolidPlatform);
    }

    private void OnDrawGizmos()
    {
        Gizmos.color = Color.red;
        Vector2 direction = Vector2.right * WallCheckDistance;
        Vector2 solidCheckDirection = Vector2.right * solidLedgeCheckDistance;
        Gizmos.DrawWireSphere(groundCheck.position, groundCheckRadius);
        Gizmos.DrawWireCube(deathCheck.position, new Vector2(deathCheckX, deathCheckY));
        Gizmos.DrawWireCube(throughPlatformCheck.position, new Vector2(throughPlatformCheckX, throughPlatformCheckY));
        Gizmos.DrawWireSphere(ceilingCheck.position, ceilingCheckRadius);
        Gizmos.DrawWireSphere(ceilingSlideCheck.position, ceilingSlideCheckRadius);
        Gizmos.DrawRay(wallCheck.position, direction);
        Gizmos.DrawRay(wallCheckBack.position, -direction);
        Gizmos.DrawRay(ledgeCheckHorizontal.position, direction);
        Gizmos.DrawRay(ledgeCheckHorizontalBlock.position, solidCheckDirection);
    }

 




}
