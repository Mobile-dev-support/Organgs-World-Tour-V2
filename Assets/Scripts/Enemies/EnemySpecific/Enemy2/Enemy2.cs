using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Enemy2 : Entity
{   
    public E2_MoveState moveState { get; private set; }
    public E2_IdleState idleState { get; private set; }
    public E2_DeadState deadState { get; private set; }
    public ParticleSystem particle;
    [SerializeField]
    private D_MoveState moveStateData;
    [SerializeField]
    private D_IdleState idleStateData;
    [SerializeField]
    private D_DeadState deadStateData;
    public pooledObject pooler { get; private set; }



    public override void Awake()
    {
        base.Awake();

        moveState = new E2_MoveState(this, stateMachine, "move", moveStateData, this);
        idleState = new E2_IdleState(this, stateMachine, "idle", idleStateData, this);
        deadState = new E2_DeadState(this, stateMachine, "dead", deadStateData, this);

    }

    private void Start()
    {
        stateMachine.Initialize(idleState);
        pooledObject Pooler = GetComponentInParent<pooledObject>();
        if (Pooler != null)
            pooler = Pooler;
    }

    private void OnEnable()
    {
        if(pooler != null)
            stateMachine.Initialize(idleState);
    }

    public override void OnDrawGizmos()
    {
        base.OnDrawGizmos();
    }
}