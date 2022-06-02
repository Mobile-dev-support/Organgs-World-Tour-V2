using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class E1_JumpState : JumpState
{
    private Enemy1 enemy;


    public E1_JumpState(Entity etity, FiniteStateMachine stateMachine, string animBoolName, D_JumpState stateData, Enemy1 enemy) : base(etity, stateMachine, animBoolName, stateData)
    {
        this.enemy = enemy;
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
        /*if (isPlayerInMinAgroRange)
        {
            stateMachine.ChangeState(enemy.playerDetectedState);
        }*/
        if (isJumpOver && isGrounded)
        {
            stateMachine.ChangeState(enemy.moveState);
            //enemy.idleState.SetFlipAfterIdle(true);
        }
        else if (isDead)
        {
            stateMachine.ChangeState(enemy.deadState);
        }
    }

    public override void PhysicsUpdate()
    {
        base.PhysicsUpdate();
    }
}
