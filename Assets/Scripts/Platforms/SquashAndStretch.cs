using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SquashAndStretch : MonoBehaviour
{
    public Vector3 wallSquash = new Vector3(0.6f, 1.66f, 0.1f);

    private static SquashAndStretch _instance;
    public static SquashAndStretch Instance { get { return _instance; } }

    private void Awake()
    {
        if (_instance != null && _instance != this)
        {
            Destroy(gameObject);
        }
        else
        {
            _instance = this;
        }
    }
    public void SquishAndStretch()
    {
        StartCoroutine(JumpSqueeze(wallSquash.x, wallSquash.y, wallSquash.z, true));
    }

    IEnumerator JumpSqueeze(float xSqueeze, float ySqueeze, float seconds, bool isInstant)
    {
        Vector3 originalSize = Vector3.one;
        Vector3 newSize = new Vector3(xSqueeze, ySqueeze, originalSize.z);
        float t = 0f;
        if (isInstant == false)
        {
            while (t <= 1.0)
            {
                t += Time.deltaTime / seconds;
                gameObject.transform.localScale = Vector3.Lerp(originalSize, newSize, t);
                yield return null;
            }
            t = 0f;
        }
        while (t <= 1.0)
        {
            t += Time.deltaTime / seconds;
            gameObject.transform.localScale = Vector3.Lerp(newSize, originalSize, t);
            yield return null;
        }

    }
}
