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
        core.CollisionSenses.DeathCheckY = playerData.deathCheckYSlide;
        player.SetColliderHeight(playerData.crouchColliderHeight);
        CharacterAudio.Instance.Slide();
    }

    public override void Exit()
    {
        Debug.Log("Exited");
        base.Exit();
        isCurrentlySliding = false;
        core.Movement.SetVelocityZero();
        core.CollisionSenses.DeathCheckY = playerData.deathCheckYIdle;
        player.SetColliderHeight(playerData.standColliderHeight);
    }

    public override void LogicUpdate()
    {
        base.LogicUpdate();
        if (!isExitingState)
        {
           /*if (xInput != 0)
            {
                 stateMachine.ChangeState(player.CrouchMoveState);
            }*/
            //else
            if (!isCurrentlySliding && !isTouchingCeiling)
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

    bool extended;
    float extendedTime; 
    public override void PhysicsUpdate()
    {
        SlideInput = player.InputHandler.SlideInput;
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
            if (!isTouchingCeiling && !isTouchingSolidPlatform)
            {
                if(extended)
                {
                    if(extendedTime > 0)
                    {
                        extendedTime -= Time.deltaTime;
                    }
                    else
                    {
                        stateMachine.ChangeState(player.IdleState);
                        core.Movement.SetVelocityZero();
                        startTime = Time.time;

                    }
                }
                else
                {
                    stateMachine.ChangeState(player.IdleState);
                    core.Movement.SetVelocityZero();
                    startTime = Time.time;
                }
               
            }
            else
            {
                extendedTime = 0.01f;
                extended = true;
            }
            CheckIfShouldPlaceAfterImage();
        }
    }

}
