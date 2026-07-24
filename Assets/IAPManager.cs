using System;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;
using UnityEngine.Purchasing;

public class IAPManager : MonoBehaviour
{
    private StoreController m_StoreController;
    public static IAPManager _instance;
    public GameObject panel;

    // Product IDs - must match your store product IDs
    public string restoreLives = "com.purplebug.wt.restore";
    public string expandLives = "com.purplebug.wt.expandlives";
    public string lives30 = "com.purplebug.wt.30lives";
    public string lives50 = "com.purplebug.wt.50lives";
    public string lives100 = "com.purplebug.wt.100lives";

    private const string expandLivesPref = "expandLivesPurchased";

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

    void Start()
    {
        panel.SetActive(false);
        InitializeIAP();
    }

    #region In-App Purchasing

    async void InitializeIAP()
    {
        m_StoreController = UnityIAPServices.StoreController();

        m_StoreController.OnPurchasePending += OnPurchasePending;
        m_StoreController.OnPurchasesFetched += OnPurchasesFetched;
        m_StoreController.OnPurchaseFailed += OnPurchaseFailed;
        m_StoreController.OnProductsFetched += OnProductsFetched;
        m_StoreController.OnProductsFetchFailed += OnProductsFetchFailed;
        m_StoreController.OnStoreDisconnected += OnStoreDisconnected;

        try
        {
            await m_StoreController.Connect();
            Debug.Log("In-App Purchasing successfully connected to store.");
        }
        catch (Exception ex)
        {
            Debug.LogError($"IAP Connect failed: {ex.Message}");
            return;
        }

        var initialProductsToFetch = new List<ProductDefinition>
        {
            new(restoreLives, ProductType.Consumable),
            new(expandLives, ProductType.NonConsumable),
            new(lives30, ProductType.Consumable),
            new(lives50, ProductType.Consumable),
            new(lives100, ProductType.Consumable)
        };

        m_StoreController.FetchProducts(initialProductsToFetch);
    }

    void OnProductsFetched(List<Product> products)
    {
        Debug.Log($"Products fetched: {products.Count}");
        m_StoreController.FetchPurchases();
    }

    void OnProductsFetchFailed(ProductFetchFailed failure)
    {
        Debug.LogError($"OnProductsFetchFailed: {failure}");
    }

    void OnPurchasesFetched(Orders orders)
    {
        // Restore non-consumable purchases (expandLives)
        foreach (var confirmedOrder in orders.ConfirmedOrders)
        {
            var item = confirmedOrder.CartOrdered.Items().FirstOrDefault();
            if (item != null && item.Product.definition.id == expandLives)
            {
                Debug.Log($"Restored entitlement for {expandLives}");
                BasicLife.Instance.SetLifeLimit(30);
                PlayerPrefs.SetInt(expandLivesPref, 1);
                PlayerPrefs.Save();
            }
        }

        // Process any pending orders
        foreach (var pendingOrder in orders.PendingOrders)
        {
            OnPurchasePending(pendingOrder);
        }
    }

    void OnPurchasePending(PendingOrder pendingOrder)
    {
        var item = pendingOrder.CartOrdered.Items().FirstOrDefault();
        if (item == null) return;

        var productId = item.Product.definition.id;

        if (productId == restoreLives)
        {
            BuyRestoreLivesCompleted();
        }
        else if (productId == expandLives)
        {
            BuyExpandLivesCompleted();
        }
        else if (productId == lives30)
        {
            BuyExtraLivesCompleted(30);
        }
        else if (productId == lives50)
        {
            BuyExtraLivesCompleted(50);
        }
        else if (productId == lives100)
        {
            BuyExtraLivesCompleted(100);
        }
        else
        {
            Debug.Log($"OnPurchasePending: Unrecognized product: '{productId}'");
        }

        Debug.Log($"Purchase Complete - Product: {productId}");
        m_StoreController.ConfirmPurchase(pendingOrder);
    }

    void OnPurchaseFailed(FailedOrder failedOrder)
    {
        var item = failedOrder.CartOrdered.Items().FirstOrDefault();
        string productId = item?.Product.definition.id ?? "unknown";
        Debug.Log($"OnPurchaseFailed: Product: '{productId}', Reason: {failedOrder.FailureReason}");
    }

    void OnStoreDisconnected(StoreConnectionFailureDescription failure)
    {
        Debug.LogError($"Store disconnected: {failure}");
    }

    void BuyProductID(string productId)
    {
        if (m_StoreController == null)
        {
            Debug.Log("BuyProductID FAIL. StoreController not available.");
            return;
        }

        var products = m_StoreController.GetProducts();
        var product = products?.FirstOrDefault(p => p.definition.id == productId);

        if (product != null && product.availableToPurchase)
        {
            Debug.Log($"Purchasing product: '{product.definition.id}'");
            m_StoreController.PurchaseProduct(product);
        }
        else
        {
            Debug.Log("BuyProductID: FAIL. Product not found or not available.");
        }
    }

    /// <summary>
    /// Returns the localized price string for a product, or empty string if unavailable.
    /// </summary>
    public string GetLocalizedPrice(string productId)
    {
        if (m_StoreController != null)
        {
            var products = m_StoreController.GetProducts();
            var product = products?.FirstOrDefault(p => p.definition.id == productId);
            if (product != null)
            {
                return product.metadata.localizedPriceString;
            }
        }
        return "";
    }

    public void RestorePurchases()
    {
        if (m_StoreController == null)
        {
            Debug.Log("RestorePurchases FAIL. StoreController not available.");
            return;
        }

        Debug.Log("RestorePurchases: Fetching purchases to restore entitlements...");
        m_StoreController.FetchPurchases();
    }

    #endregion

    #region Purchase Actions

    public void BuyRestoreLives()
    {
        BuyProductID(restoreLives);
    }

    public void BuyExpandLives()
    {
        BuyProductID(expandLives);
    }

    public void BuyExtraLives(int extraLives)
    {
        switch (extraLives)
        {
            case 30:
                BuyProductID(lives30);
                break;
            case 50:
                BuyProductID(lives50);
                break;
            case 100:
                BuyProductID(lives100);
                break;
        }
    }

    #endregion

    #region Purchase Fulfillment

    public void BuyRestoreLivesCompleted()
    {
        BasicLife.Instance.RestoreLivesToLimit();
        MainMenu.Instance.shop_canvas.Hide();
        DisablePanel();
        MainMenu.Instance.gameOverCanvas.Hide();
        if (GameManager.Instance != null)
        {
            GameManager.Instance.Respawn(true);
        }
    }

    public void BuyExtraLivesCompleted(int livesToAdd)
    {
        BasicLife.Instance.AddExtraLife(livesToAdd);
        MainMenu.Instance.shop_canvas.Hide();
        DisablePanel();
        MainMenu.Instance.gameOverCanvas.Hide();
        if (GameManager.Instance != null)
        {
            GameManager.Instance.Respawn(true);
        }
    }

    public void BuyExpandLivesCompleted()
    {
        BasicLife.Instance.SetLifeLimit(30);
        PlayerPrefs.SetInt(expandLivesPref, 1);
        PlayerPrefs.Save();
        MainMenu.Instance.shop_canvas.Hide();
        DisablePanel();
    }

    #endregion

    public void DisablePanel()
    {
        panel.SetActive(false);
    }

    private void OnDestroy()
    {
        if (m_StoreController != null)
        {
            m_StoreController.OnPurchasePending -= OnPurchasePending;
            m_StoreController.OnPurchasesFetched -= OnPurchasesFetched;
            m_StoreController.OnPurchaseFailed -= OnPurchaseFailed;
            m_StoreController.OnProductsFetched -= OnProductsFetched;
            m_StoreController.OnProductsFetchFailed -= OnProductsFetchFailed;
            m_StoreController.OnStoreDisconnected -= OnStoreDisconnected;
        }
    }
}
