using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerCrouchIdleState : PlayerGroundedState
{
    private bool SlideInput;
    private Vector2 lastAIPos;

    public PlayerCrouchIdleState(Player player, PlayerStateMachine stateMachine, PlayerData playerData, string animBoolName) : base(player, stateMachine, playerData, animBoolName)
    {
    }

    public override void Enter()
    {
        base.Enter();
        isCurrentlySliding = true;
        core.Movement.SetVelocityZero();
        core.CollisionSenses.DeathCheckRadius = playerData.deathCheckRadiusSlide;
        player.SetColliderHeight(playerData.crouchColliderHeight);
        CharacterAudio.Instance.Slide();
    }

    public override void Exit()
    {
        base.Exit();
        isCurrentlySliding = false;
        core.Movement.SetVelocityZero();
        core.CollisionSenses.DeathCheckRadius = playerData.deathCheckRadiusIdle;
        player.SetColliderHeight(playerData.standColliderHeight);
    }

    public override void LogicUpdate()
    {
        base.LogicUpdate();
        SlideInput = player.InputHandler.SlideInput;
        if (!isExitingState)
        {
           /*if (xInput != 0)
            {
                 stateMachine.ChangeState(player.CrouchMoveState);
            }*/
            //else
            if (!SlideInput && !isTouchingCeiling)
            {
                 stateMachine.ChangeState(player.IdleState);
            }
        }
    }

    private void CheckIfShouldPlaceAfterImage()
    {
        if (Vector2.Distance(player.transform.position, lastAIPos) >= playerData.distBetweenAfterImages)
        {
            PlaceAfterImage();
        }
    }

    private void PlaceAfterImage()
    {
        PlayerAfterImagePool.Instance.GetFromPool();
        lastAIPos = player.transform.position;
    }

    public override void PhysicsUpdate()
    {
        base.PhysicsUpdate();

        if (Time.time <= startTime + playerData.slideTime)
        {
            CheckIfShouldPlaceAfterImage();
            if (core.Movement.FacingDirection == -1)
            {
                player.RB.AddForce(Vector2.left * playerData.slideSpeed);
            }
            else
            {
                player.RB.AddForce(Vector2.right * playerData.slideSpeed);
            }
        }
        else
        {
            if (!isTouchingCeiling)
            {
                stateMachine.ChangeState(player.IdleState);
                core.Movement.SetVelocityZero();
                startTime = Time.time;
            }
            CheckIfShouldPlaceAfterImage();
        }
    }

}
