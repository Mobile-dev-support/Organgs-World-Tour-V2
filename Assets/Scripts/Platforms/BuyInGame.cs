using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BuyInGame : MonoBehaviour
{
    public RectTransform shopCanvas, parent, lastparent;
    private View view;

    private void Start()
    {
        view = shopCanvas.GetComponent<View>();
    }
    // Start is called before the first frame update
    public void BuyLives()
    {
        shopCanvas.SetParent(parent);
        view.Show();
        shopCanvas.transform.SetAsLastSibling();
    }

    public void Back()
    {
        if(shopCanvas.parent == parent)
        {
            shopCanvas.SetParent(lastparent);
            view.Hide();
            shopCanvas.transform.SetAsLastSibling();
        }
    }
}
