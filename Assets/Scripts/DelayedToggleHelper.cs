using UnityEngine;

public class DelayedToggleHelper : MonoBehaviour
{
    [SerializeField] bool Toggle;
    [SerializeField] float Delay;
    [SerializeField] Component Component_;
    void Start()
    {
        Invoke(nameof(StartScript), Delay);
    }

    public void StartScript()
    {
        if (Component_ is Behaviour behaviour)
        {
            behaviour.enabled = Toggle;
        }
    }
}
