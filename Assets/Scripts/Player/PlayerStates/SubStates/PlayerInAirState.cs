using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerInAirState : PlayerState
{
    //Input
    private int xInput;
    private bool jumpInput;
    private bool jumpInputStop;

    //Checks
    private bool isGrounded;
    private bool isTouchingWall;
    private bool isTouchingWallBack;
    private bool oldIsTouchingWall;
    private bool oldIsTouchingWallBack;
    private bool isSolidPlatformCeiling;
    private bool isTouchingLedge;
    private bool isHittingPlatform;
    private bool isStickingToPlatform;
    private bool coyoteTime;
    private bool wallJumpCoyoteTime;
    private bool isJumping;
    private bool isDead;
    private bool isSlippery;
    private bool isSugarPlatform;
    private float startWallJumpCoyoteTime;
    private int yVelocity = Animator.StringToHash("yVelocity");
    private int xVelocity = Animator.StringToHash("xVelocity");

    public PlayerInAirState(Player player, PlayerStateMachine stateMachine, PlayerData playerData, string animBoolName) : base(player, stateMachine, playerData, animBoolName)
    {
    }


    public override void DoChecks()
    {
        base.DoChecks();
        isDead = core.CollisionSenses.Trap;
        oldIsTouchingWall = isTouchingWall;
        oldIsTouchingWallBack = isTouchingWallBack;
        isGrounded = core.CollisionSenses.Ground;
        isTouchingWall = core.CollisionSenses.WallFront;
        isTouchingWallBack = core.CollisionSenses.WallBack;
        isTouchingLedge = core.CollisionSenses.LedgeHorizontal;
        isHittingPlatform = core.CollisionSenses.ThroughPlatform;
        isStickingToPlatform = core.CollisionSenses.SolidPlatform;
        isSugarPlatform = core.CollisionSenses.SugarPlatform;
        isSlippery = core.CollisionSenses.SlipperyPlatform;
        isSolidPlatformCeiling = core.CollisionSenses.SolidPlatformCeiling;
        if (isTouchingWall && !isTouchingLedge)
        {
            player.LedgeClimbState.SetDetectedPosition(player.transform.position);
        }

        if(!wallJumpCoyoteTime && !isTouchingWall && !isTouchingWallBack && (oldIsTouchingWall || oldIsTouchingWallBack))
        {
            StartWallJumpCoyoteTime();
        }
    }

    public override void Enter()
    {
        base.Enter();
    }

    public override void Exit()
    {
        base.Exit();
        oldIsTouchingWall = false;
        oldIsTouchingWallBack = false;
        isTouchingWall = false;
        isTouchingWallBack = false;
    }

    public override void LogicUpdate()
    {
        base.LogicUpdate();

        CheckCoyoteTime();
        CheckWallJumpCoyoteTime();
        xInput = player.InputHandler.NormInputX;
        jumpInput = player.InputHandler.JumpInput;
        jumpInputStop = player.InputHandler.JumpInputStop;
        CheckJumpMultiplier();

        if ((isGrounded || isSlippery || isStickingToPlatform || isHittingPlatform || isSugarPlatform) && core.Movement.CurrentVelocity.y < 0.01f && !isDead)
        {            
            stateMachine.ChangeState(player.LandState);
        }
        else if(isTouchingWall && !isTouchingLedge && !isSolidPlatformCeiling && (!isGrounded || !isSlippery || !isStickingToPlatform || !isHittingPlatform || !isSugarPlatform || !player.isDrinking) && !isDead)
        {
            stateMachine.ChangeState(player.LedgeClimbState);
        }
        else if(jumpInput && !isDead && (isTouchingWall || isTouchingWallBack || wallJumpCoyoteTime))
        {
            StopWallJumpCoyoteTime();
            isTouchingWall = core.CollisionSenses.WallFront;
            player.WallJumpState.DetermineWallJumpDirection(isTouchingWall);
            stateMachine.ChangeState(player.WallJumpState);
        } 
        else if(jumpInput && player.JumpState.CanJump() && !isDead)
        {
            stateMachine.ChangeState(player.JumpState);
        }
        else if(isTouchingWall && xInput == core.Movement.FacingDirection && core.Movement.CurrentVelocity.y <= 0 && !isHittingPlatform && !isDead)
        {
             stateMachine.ChangeState(player.WallSlideState);
        }
        else if (isDead || (isTouchingWall && isTouchingWallBack && !isHittingPlatform) || player.transform.rotation.z != 0)
        {
            stateMachine.ChangeState(player.DeathState);
        }
        else
        {
            core.Movement.CheckIfShouldFlip(xInput);
            core.Movement.SetVelocityX(player.defaultValues.movementVelocity * xInput);
            player.Anim.SetFloat(yVelocity, core.Movement.CurrentVelocity.y);
            player.Anim.SetFloat(xVelocity, Mathf.Abs(core.Movement.CurrentVelocity.x));
        }
    }

    private void CheckJumpMultiplier()
    {
        if (isJumping)
        {
            if (jumpInputStop)
            {
                core.Movement.SetVelocityY(core.Movement.CurrentVelocity.y * playerData.variableJumpHeightMultiplier);
                isJumping = false;
            }
            else if (core.Movement.CurrentVelocity.y <= 0f)
            {
                isJumping = false;
            }

        }
    }

    public override void PhysicsUpdate()
    {
        base.PhysicsUpdate();
    }

    private void CheckCoyoteTime()
    {
        if(coyoteTime && Time.time > startTime + playerData.coyoteTime)
        {
            coyoteTime = false;
            player.JumpState.DecreaseAmountOfJumpsLeft();
        }
    }

    private void CheckWallJumpCoyoteTime()
    {
        if(wallJumpCoyoteTime && Time.time > startWallJumpCoyoteTime + playerData.coyoteTime)
        {
            wallJumpCoyoteTime = false;
        }
    }

    public void StartCoyoteTime() => coyoteTime = true;

    public void StartWallJumpCoyoteTime()
    {
        wallJumpCoyoteTime = true;
        startWallJumpCoyoteTime = Time.time;
    }

    public void StopWallJumpCoyoteTime() => wallJumpCoyoteTime = false;

    public void SetIsJumping() => isJumping = true;

}


