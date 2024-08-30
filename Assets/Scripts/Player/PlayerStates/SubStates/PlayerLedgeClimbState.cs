﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerLedgeClimbState : PlayerState
{
    private Vector2 detectedPos;
    private Vector2 cornerPos;
    private Vector2 startPos;
    private Vector2 stopPos;
    private Vector2 workspace;

    private bool isHanging;

    private bool jumpInput;
    private bool isTouchingCeiling;
    private bool isTouchingSolidOverLedge;
    private int xInput;
    private int yInput;
    private bool isDead;
    private bool isTouchingWall;
    private bool isTouchingWallBack;
    private bool isTouchingSolidPlatform;
    private bool isTouchingSolidPlatformBack;
    private int prevxInput;

    public PlayerLedgeClimbState(Player player, PlayerStateMachine stateMachine, PlayerData playerData, string animBoolName) : base(player, stateMachine, playerData, animBoolName)
    {
    }

    public override void AnimationFinishTrigger()
    {
        base.AnimationFinishTrigger();
        player.Anim.SetBool("climbLedge", false);
    }

    public override void AnimationTrigger()
    {
        base.AnimationTrigger();

        isHanging = true;
    }

    public override void DoChecks()
    {
        base.DoChecks();
        isDead = core.CollisionSenses.Trap;
        isTouchingSolidOverLedge = core.CollisionSenses.LedgeHorizontalBlock;
        isTouchingWall = core.CollisionSenses.WallFront;
        isTouchingWallBack = core.CollisionSenses.WallBack;
        isTouchingSolidPlatform = core.CollisionSenses.WallSolidPlatform;
        isTouchingSolidPlatformBack = core.CollisionSenses.WallBackSolidPlatform;
    }

    public override void Enter()
    {
        base.Enter();
        prevxInput = core.Movement.FacingDirection;
        core.Movement.SetVelocityZero();
        player.transform.position = detectedPos;
        cornerPos = DetermineCornerPosition();
        startPos.Set(cornerPos.x - (core.Movement.FacingDirection * playerData.startOffset.x), cornerPos.y - playerData.startOffset.y);
        stopPos.Set(cornerPos.x + (core.Movement.FacingDirection * playerData.stopOffset.x), cornerPos.y + playerData.stopOffset.y);

        player.transform.position = startPos;
    }

    public override void Exit()
    {
        base.Exit();
        var deathCheck = core.CollisionSenses.DeathCheck.transform.position;
        deathCheck = new Vector3(deathCheck.x, 0);
        isHanging = false;
     
        if (isClimbing && !isTouchingSolidOverLedge)
        {
            Debug.Log("Exited");
            player.transform.position = stopPos;
            isClimbing = false;
        }
        else
        {
            Debug.Log("ExitedElse");
        }
    }

    public override void LogicUpdate()
    {
        base.LogicUpdate();
        if (isAnimationFinished)
        {
            if (isTouchingCeiling)
            {
                Debug.Log("Finished Then Crouch Idle");
                stateMachine.ChangeState(player.CrouchIdleState);
            }
            else
            {
                stateMachine.ChangeState(player.IdleState);
            }
        }
        else
        {
            Debug.Log("Climbing");
            xInput = player.InputHandler.NormInputX;
            yInput = player.InputHandler.NormInputY;
            jumpInput = player.InputHandler.JumpInput;
            
            core.Movement.SetVelocityZero();
            player.transform.position = startPos;
            if (prevxInput == core.Movement.FacingDirection && isHanging && !isClimbing && !isTouchingSolidOverLedge)
            {
                CheckForSpace();
                isClimbing = true;
                player.Anim.SetBool("climbLedge", true);
            }
            /*else if (yInput == -1 && isHanging && !isClimbing)
            {
                stateMachine.ChangeState(player.InAirState);
            }
            else if (jumpInput && !isClimbing)
            {
                player.WallJumpState.DetermineWallJumpDirection(true);
                stateMachine.ChangeState(player.WallJumpState);
            }*/
            else if (isDead || isTouchingWallBack && isTouchingSolidPlatformBack || isTouchingWall && isTouchingSolidPlatform || isTouchingSolidPlatform && isTouchingSolidPlatformBack || isTouchingWall && isTouchingWallBack)
            {
                Debug.Log("Death in ledge climb state");
                stateMachine.ChangeState(player.DeathState);
            }
            else if (isTouchingSolidOverLedge)
            {
                CheckForSpace();
                player.Anim.SetBool("climbLedge", true);
                isClimbing = false;
            }


        }
    }

    public void SetDetectedPosition(Vector2 pos) => detectedPos = pos;

    private void CheckForSpace()
    {
        isTouchingCeiling = Physics2D.Raycast(cornerPos + (Vector2.up * 0.015f) + (Vector2.right * core.Movement.FacingDirection * 0.015f), Vector2.up, playerData.standColliderHeight, core.CollisionSenses.WhatIsGround);
        //player.Anim.SetBool("isTouchingCeiling", isTouchingCeiling);
    }

    private Vector2 DetermineCornerPosition()
    {
        RaycastHit2D xHit = Physics2D.Raycast(core.CollisionSenses.WallCheck.position, Vector2.right * core.Movement.FacingDirection, core.CollisionSenses.WallCheckDistance, core.CollisionSenses.WhatIsGround);
        float xDist = xHit.distance;
        workspace.Set((xDist + 0.015f) * core.Movement.FacingDirection, 0f);
        RaycastHit2D yHit = Physics2D.Raycast(core.CollisionSenses.LedgeCheckHorizontal.position + (Vector3)(workspace), Vector2.down, core.CollisionSenses.LedgeCheckHorizontal.position.y - core.CollisionSenses.WallCheck.position.y + 0.015f, core.CollisionSenses.WhatIsGround);
        float yDist = yHit.distance;

        workspace.Set(core.CollisionSenses.WallCheck.position.x + (xDist * core.Movement.FacingDirection), core.CollisionSenses.LedgeCheckHorizontal.position.y - yDist);
        return workspace;
    }

}
