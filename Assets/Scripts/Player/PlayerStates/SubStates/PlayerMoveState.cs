using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerMoveState : PlayerGroundedState
{
    public bool canSlide = true;
    private Vector2 lastAIPos;
    private bool SlideInput;

    public PlayerMoveState(Player player, PlayerStateMachine stateMachine, PlayerData playerData, string animBoolName) : base(player, stateMachine, playerData, animBoolName)
    {
    }

    public override void DoChecks()
    {
        base.DoChecks();
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
        core.Movement.CheckIfShouldFlip(xInput);
        core.Movement.SetVelocityX(playerData.movementVelocity * xInput);
        SlideInput = player.InputHandler.SlideInput;
        if (!isExitingState)
        {
            if (xInput == 0 || player.afterShock || player.IsStunned)
            {
                stateMachine.ChangeState(player.IdleState);
            }
            /*else if (yInput == -1)
            {
                stateMachine.ChangeState(player.CrouchIdleState);
            }*/
            else if (SlideInput && !isTouchingWall && Time.time >= startTime + playerData.slideAgainTimer)
            {
                stateMachine.ChangeState(player.CrouchIdleState);
            }

        }
    }

    public override void PhysicsUpdate()
    {
        base.PhysicsUpdate();
        CheckIfShouldPlaceAfterImage();
    }
        
    private void PlaceAfterImage()
    {
        player.dust.Play();
        lastAIPos = player.transform.position;
    }

    private void CheckIfShouldPlaceAfterImage()
    {
        if (Vector2.Distance(player.transform.position, lastAIPos) >= playerData.distBetweenAfterDustImage)
        {
            PlaceAfterImage();
        }
    }
}
