using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Core : MonoBehaviour
{
    [SerializeField]
    private bool touchingSolidPlatform;

    [SerializeField]
    private bool touchingCeiling;

    [SerializeField]
    private bool touchingWall;
    [SerializeField]
    private bool touchingWallBack;
    [SerializeField]
    private bool touchingWallSolidPlatform;
    [SerializeField]
    private bool touchingWallSolidPlatformBack;
    [SerializeField]
    private bool canSetVelocity;
    [SerializeField]
    private bool grounded;
    
    public void Update()
    {
        if(collisionSenses != null)
        {
            touchingSolidPlatform = collisionSenses.LedgeHorizontalBlock;
            touchingCeiling = collisionSenses.Ceiling;
            touchingWall = collisionSenses.WallFront;
            touchingWallBack = collisionSenses.WallBack;
            touchingWallSolidPlatform = collisionSenses.WallSolidPlatform;
            touchingWallSolidPlatformBack = collisionSenses.WallBackSolidPlatform;
            canSetVelocity = movement.CanSetVelocity;
            grounded = collisionSenses.Ground;
        }

    }
    public Movement Movement
    {
        get => GenericNotImplementedError<Movement>.TryGet(movement, transform.parent);
        private set => movement = value;
    }
    public CollisionSenses CollisionSenses
    {
        get => GenericNotImplementedError<CollisionSenses>.TryGet(collisionSenses, transform.parent);
        private set => collisionSenses = value;
    }
    /*public Combat Combat
    {
        get => GenericNotImplementedError<Combat>.TryGet(combat, transform.parent.name);
        private set => combat = value;
    }*/

    private Movement movement;
    private CollisionSenses collisionSenses;
    //private Combat combat;

    private void Awake()
    {
        Movement = GetComponentInChildren<Movement>();
        CollisionSenses = GetComponentInChildren<CollisionSenses>();
        //Combat = GetComponentInChildren<Combat>();
    }

    public void LogicUpdate()
    {
        Movement.LogicUpdate();
        //Combat.LogicUpdate();
    }

}
