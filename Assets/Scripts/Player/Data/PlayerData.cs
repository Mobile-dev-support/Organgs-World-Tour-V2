using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName ="newPlayerData", menuName ="Data/Player Data/Base Data")]
public class PlayerData : ScriptableObject
{
    [Header("Move State")]
    public float movementVelocity = 7f;
    [HideInInspector]
    public float CandymovementVelocity = 12f;
    [Header("Jump State")]
    public float jumpVelocity = 15f;
    [HideInInspector]
    public float defaultJumpVelocity = 17f;
    public float cheeseJumpVelocity = 7f;
    public int amountOfJumps = 1;

    [Header("Wall Jump State")]
    public float wallJumpVelocity = 20;
    [HideInInspector]
    public float defaultWallJumpVelocity = 20f;
    public float cheeseWallJumpVelocity = 10f;
    public float wallJumpTime = 0.4f;
    public Vector2 wallJumpAngle = new Vector2(1, 2);

    [Header("In Air State")]
    public float coyoteTime = 0.2f;
    public float variableJumpHeightMultiplier = 0.5f;

    [Header("Wall Slide State")]
    public float wallSlideVelocity = 3f;

    [Header("Wall Climb State")]
    public float wallClimbVelocity = 3f;

    [Header("Ledge Climb State")]
    public Vector2 startOffset;
    public Vector2 stopOffset;

    [Header("Dash State")]
    public float dashCooldown = 0.5f;
    public float maxHoldTime = 1f;
    public float holdTimeScale = 0.25f;
    public float dashTime = 0.2f;
    public float dashVelocity = 30f;
    public float drag = 10f;
    public float dashEndYMultiplier = 0.2f;
    public float distBetweenAfterImages = 0.5f;
    public float distBetweenAfterDustImage = 0.2f;

    [Header("Crouch States")]
    public float crouchMovementVelocity = 5f;
    public float crouchColliderHeight = 0.8f;
    public float standColliderHeight = 1.25f;

    [Header("Slide States")]
    public float slideSpeed = 2.5f;
    public float slideTime = 0.5f;
    public float slideAgainTimer = 0.3f;

    [Header("Player Health")]
    public float health = 10;
    public GameObject deathChunk;
    public float deathCheckRadiusSlide = 0.25f;
    public float deathCheckRadiusIdle = 0.55f;

    [Header("Knockback")]
    public Vector2 knockbackAngle;
    public float knockbackStrength;

    [Header("Slippery States")]
    public float speedOnIce = 3f;
    [HideInInspector]
    public float NormalMovementVelocity = 7f;
    public float slipperyMultiplier = 50f;
    public float platformDetectionRadius = 1f;

    [Header("Enemy Status Timers")]
    public float cheeseTimer = 2f;
    public float candyTimer = 5f;
    public float DrinkTimer = 2f;
    public float afterShockTimer = 2f;
}
