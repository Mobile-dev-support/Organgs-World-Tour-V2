﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerGroundedState : PlayerState
{
    protected int xInput;
    protected int yInput;

    [SerializeField]protected bool Stunned;
    [SerializeField] protected bool isTouchingCeiling;
    [SerializeField] protected bool isTouchingWall;
    [SerializeField] protected bool isTouchingSolidPlatform;
    [SerializeField] protected bool isTouchingWallBack;
    [SerializeField] protected bool isTouchingWallBackSolidPlatform;
    [SerializeField] protected bool isSlippery;
    [SerializeField] protected bool isSugarPlatform;
    protected bool isCurrentlySliding;
    protected int xState = Animator.StringToHash("xState");
    protected int Candied = Animator.StringToHash("Candied");

    [SerializeField] private bool JumpInput;
    [SerializeField] private bool isGrounded;
    [SerializeField] private bool isDead;
    [SerializeField] private bool isStickingToPlatform;
    private bool isTouchingCeilingSolidPlatform;
    private int istouchingWall = Animator.StringToHash("isTouchingWall");

    private bool isThroughPlatform;



    public PlayerGroundedState(Player player, PlayerStateMachine stateMachine, PlayerData playerData, string animBoolName) : base(player, stateMachine, playerData, animBoolName)
    {
    }

    public override void DoChecks()
    {
        
        base.DoChecks();
        Stunned = player.IsStunned;
        isDead = core.CollisionSenses.Trap;
        isGrounded = core.CollisionSenses.Ground;
        isTouchingWall = core.CollisionSenses.WallFront;
        isTouchingWallBack = core.CollisionSenses.WallBack;
        isTouchingWallBackSolidPlatform = core.CollisionSenses.WallBackSolidPlatform;
        isTouchingSolidPlatform = core.CollisionSenses.WallSolidPlatform;
        isThroughPlatform = core.CollisionSenses.ThroughPlatform;
        isTouchingCeiling = core.CollisionSenses.Ceiling;
        isSlippery = core.CollisionSenses.SlipperyPlatform;
        isStickingToPlatform = core.CollisionSenses.SolidPlatform;
        isTouchingCeilingSolidPlatform = core.CollisionSenses.SolidPlatformCeiling;
        isSugarPlatform = core.CollisionSenses.SugarPlatform;
        player.Anim.SetBool(istouchingWall, isTouchingWall);

        if (isSugarPlatform)
        {
            if(player.defaultValues.animationState != OliverStates.Cheesed && player.defaultValues.animationState != OliverStates.Drunk && player.defaultValues.animationState != OliverStates.AfterShock)
            {
                player.defaultValues.animationState = OliverStates.Candied;
                player.Anim.SetFloat(Candied, 0.5f);
            }
            if (player.defaultValues.animationState != OliverStates.AfterShock)
            {
                    
                    player.candyTime += Time.deltaTime;
                    player.candyMeter.gameObject.SetActive(true);
                    player.candyMeter.value = player.candyTime / playerData.candyTimer;
                    if (player.candyTime >= playerData.candyTimer)
                    {
                        player.candyMeter.gameObject.SetActive(false);
                        player.candyTime = 0;
                        player.defaultValues.animationState = OliverStates.AfterShock;
                    }
            }
        }
        else if (!isSugarPlatform)
        {
            if (player.candyTime > 0)
            {
                player.candyMeter.value = player.candyTime / playerData.candyTimer;
                player.candyTime -= Time.deltaTime;
            }
            else
            {
                player.candyMeter.gameObject.SetActive(false);
            }

            if (player.defaultValues.animationState != OliverStates.Cheesed && player.defaultValues.animationState != OliverStates.Drunk && player.defaultValues.animationState != OliverStates.AfterShock)
                player.defaultValues.animationState = OliverStates.Normal;
        }

        if (isSlippery && !isTouchingWall)
        {
            player.defaultValues.movementVelocity = playerData.speedOnIce;
        }
        else if(!isSlippery && !player.afterShock && !player.isDrinking)
        {
            player.defaultValues.movementVelocity = playerData.NormalMovementVelocity;
            player.Anim.SetFloat(xState, 0.0f);
            player.Anim.SetFloat(Candied, 0.0f);
        }
    }

    public override void Enter()
    {
        base.Enter();
        player.JumpState.ResetAmountOfJumpsLeft();
    }

    public override void Exit()
    {
        base.Exit();
    }

    public override void LogicUpdate()
    {
        Debug.Log("IstouchingCeiling:" + isTouchingCeiling);
        base.LogicUpdate();
        xInput = player.InputHandler.NormInputX;
        yInput = player.InputHandler.NormInputY;
        JumpInput = player.InputHandler.JumpInput;
        if (JumpInput && player.JumpState.CanJump() && !isDead && !player.afterShock && !player.IsStunned)
        {
            player.slideCooldown = 0;
            stateMachine.ChangeState(player.JumpState);
        }
        else if (!isGrounded && !isSlippery && !isStickingToPlatform && !isThroughPlatform && !isSugarPlatform && !isDead)
        {
            player.InAirState.StartCoyoteTime();
            stateMachine.ChangeState(player.InAirState);
        }
        else if (isDead || (!isCurrentlySliding && (isTouchingCeiling || isTouchingCeilingSolidPlatform) && (isGrounded || isSlippery || isStickingToPlatform || isSugarPlatform))
            || player.transform.rotation.z != 0 || isTouchingWall && isTouchingWallBack || isTouchingWall && isTouchingWallBackSolidPlatform || isTouchingSolidPlatform && isTouchingWallBack)
        {
            Debug.Log("Player died because of touching ceiling");
            Debug.Log("isDead:" + isDead);
            Debug.Log("IstouchingCeiling:" + isTouchingCeiling);
            Debug.Log("isTouchingCeilingSolidPlatform:" + isTouchingCeilingSolidPlatform);
            Debug.Log("isGrounded:" + isGrounded);
            Debug.Log("isSlippery:" + isSlippery);
            Debug.Log("isStickingToPlatform:" + isStickingToPlatform);
            Debug.Log("isSugarPlatform:" + isSugarPlatform);
            stateMachine.ChangeState(player.DeathState);
        }
        
        /*if (isSugarPlatform)
        {
            player.defaultValues.animationState = OliverStates.Candied;
        }*/
    }

    

    public override void PhysicsUpdate()
    {
        base.PhysicsUpdate();
    }
}
