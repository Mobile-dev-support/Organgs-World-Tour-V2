using System.Collections;
using System.Collections.Generic;
using UnityEngine;

/// <summary>
/// Debug script for toggling unlock features: all levels, tutorials, and unlimited lives.
/// Attach to a GameObject and it will persist across scenes (DontDestroyOnLoad).
/// 
/// How to use:
/// 1. Create an empty GameObject in your scene
/// 2. Attach this script to it
/// 3. Toggle the boolean flags in the Inspector:
///    - unlockAllTutorials: Unlock all tutorial pages
///    - unlockAllStages: Unlock all levels/stages
///    - unlimitedLives: Enable unlimited lives (works with Debug.isDebugBuild check in BasicLife)
/// 4. Play the game and the features will be active based on the toggles
/// </summary>
public class DebugUnlocker : MonoBehaviour
{
    private static DebugUnlocker _instance;
    public static DebugUnlocker Instance { get { return _instance; } }

    [SerializeField]
    public bool unlockAllTutorials = false;

    [SerializeField]
    public bool unlockAllStages = false;

    [SerializeField]
    public bool unlimitedLives = false;

    private void Awake()
    {
        // Singleton pattern - only one instance should exist
        if (_instance != null && _instance != this)
        {
            Destroy(gameObject);
            return;
        }

        _instance = this;
        DontDestroyOnLoad(gameObject);

        // Unlock features based on toggles
        if (unlockAllStages)
        {
            Debug.Log("[DebugUnlocker] All levels/stages have been unlocked!");
        }

        if (unlockAllTutorials)
        {
            Debug.Log("[DebugUnlocker] All tutorials have been unlocked!");
        }

        if (unlimitedLives)
        {
            Debug.Log("[DebugUnlocker] Unlimited lives mode is ENABLED!");
        }
    }

    private void Update()
    {
        // This ensures unlimited lives toggle is checked during gameplay
        // The actual life subtraction is controlled by Debug.isDebugBuild in BasicLife.cs
        if (unlimitedLives && !Debug.isDebugBuild)
        {
            Debug.LogWarning("[DebugUnlocker] Unlimited lives is toggled ON but Debug.isDebugBuild is false. Make sure you're running in Development/Editor mode.");
        }
    }

    /// <summary>
    /// Unlocks all levels by setting PlayerPrefs for each level.
    /// Levels are identified by "Lv{levelNumber}" keys.
    /// Sets the value to 2 (indicating 2 stars) to ensure the next level is also unlocked.
    /// </summary>


    /// <summary>
    /// Unlocks all tutorial pages across all categories:
    /// 0 = Controls
    /// 1 = Collectibles
    /// 2 = Platforms
    /// 3 = Enemies
    /// 
    /// Assumes each category has up to 10 pages.
    /// </summary>

    /// <summary>
    /// Public method to check if unlimited lives is enabled.
    /// Can be called from other scripts if needed.
    /// </summary>
    public bool IsUnlimitedLivesEnabled()
    {
        return unlimitedLives;
    }

    /// <summary>
    /// Public method to manually reset all unlocks.
    /// Useful for testing.
    /// </summary>
    public void ResetAllUnlocks()
    {
        PlayerPrefs.DeleteAll();
        PlayerPrefs.Save();
        Debug.Log("[DebugUnlocker] All unlocks have been reset!");
    }
}
