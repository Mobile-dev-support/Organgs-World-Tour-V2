﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerTouchingWallState : PlayerState
{
    protected bool isGrounded;
    protected bool isDead;
    protected bool isTouchingWall;
    protected bool jumpInput;
    protected bool isTouchingLedge;
    protected bool isTouchingSolidOverLedge;
    protected int xInput;
    protected int yInput;
    private bool isSolidPlatformCeiling;
    private bool isSolidPlatform;
    public PlayerTouchingWallState(Player player, PlayerStateMachine stateMachine, PlayerData playerData, string animBoolName) : base(player, stateMachine, playerData, animBoolName)
    {
    }

    public override void AnimationFinishTrigger()
    {
        base.AnimationFinishTrigger();
    }

    public override void AnimationTrigger()
    {
        base.AnimationTrigger();
    }

    public override void DoChecks()
    {
        base.DoChecks();
        isDead = core.CollisionSenses.Trap;
        isGrounded = core.CollisionSenses.Ground;
        isTouchingWall = core.CollisionSenses.WallFront;
        isTouchingLedge = core.CollisionSenses.LedgeHorizontal;
        isSolidPlatformCeiling = core.CollisionSenses.SolidPlatformCeiling;
        isSolidPlatform = core.CollisionSenses.SolidPlatform;
        isTouchingSolidOverLedge = core.CollisionSenses.LedgeHorizontalBlock;
        if (isTouchingWall && !isTouchingLedge)
        {
            player.LedgeClimbState.SetDetectedPosition(player.transform.position);
        }
        else if (isDead)
        {
            stateMachine.ChangeState(player.DeathState);
        }

    }

    public override void Enter()
    {
        base.Enter();
    }

    public override void Exit()
    {
        base.Exit();
    }

    public override void LogicUpdate()
    {
        base.LogicUpdate();

        xInput = player.InputHandler.NormInputX;
        yInput = player.InputHandler.NormInputY;
        jumpInput = player.InputHandler.JumpInput;

        if (jumpInput && !isDead)
        {            
            player.WallJumpState.DetermineWallJumpDirection(isTouchingWall);
            stateMachine.ChangeState(player.WallJumpState);
        }
        else if (isGrounded || isSolidPlatform  && !isDead)
        {
            stateMachine.ChangeState(player.IdleState);
        }
        else if(!isTouchingWall && !isDead || (xInput != core.Movement.FacingDirection))
        {
            stateMachine.ChangeState(player.InAirState);
        }
        else if(isTouchingWall && !isTouchingLedge && !isTouchingSolidOverLedge && !isSolidPlatformCeiling  && !isDead && !player.isDrinking)
        {
            stateMachine.ChangeState(player.LedgeClimbState);
        }
        else if (isDead)
        {
            stateMachine.ChangeState(player.DeathState);
        }
    }

    public override void PhysicsUpdate()
    {
        base.PhysicsUpdate();
    }
}
