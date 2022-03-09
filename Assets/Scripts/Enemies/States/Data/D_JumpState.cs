using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName = "newJumpStateData", menuName = "Data/State Data/Jump State")]
public class D_JumpState : ScriptableObject
{
    public float jumpSpeed = 10f;
    public float jumpTime = 0.2f;
    public float jumpCooldown = 1f;
    public Vector2 jumpAngle;
}
