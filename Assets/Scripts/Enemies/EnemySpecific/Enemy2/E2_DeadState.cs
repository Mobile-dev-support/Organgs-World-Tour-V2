using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class E2_DeadState : DeadState
{
    private Enemy2 enemy;

    public E2_DeadState(Entity etity, FiniteStateMachine stateMachine, string animBoolName, D_DeadState stateData, Enemy2 enemy) : base(etity, stateMachine, animBoolName, stateData)
    {
        this.enemy = enemy;
    }

    public override void DoChecks()
    {
        base.DoChecks();
    }

    public override void Enter()
    {
        base.Enter();
        GameObject deathChunk = GameObject.Instantiate(stateData.deathChunkParticle, enemy.transform.position, stateData.deathChunkParticle.transform.rotation) as GameObject;
        if (enemy.pooler != null)
        {
            stateMachine.ChangeState(enemy.idleState);
            enemy.pooler.AddToPool(enemy.gameObject);
        }
        else
        {
            enemy.gameObject.SetActive(false);
        }
    }

    public override void Exit()
    {
        base.Exit();
    }

    public override void LogicUpdate()
    {
        base.LogicUpdate();
    }

    public override void PhysicsUpdate()
    {
        base.PhysicsUpdate();
    }
}
    
