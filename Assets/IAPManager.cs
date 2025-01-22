using System;
using UnityEngine;
using UnityEngine.Purchasing;
using UnityEngine.Purchasing.Extension;
using UnityEngine.UI;

public class IAPManager : MonoBehaviour, IDetailedStoreListener
{
    IStoreController m_StoreController; // The Unity Purchasing system.
    public GameObject panel;
    //Your products IDs. They should match the ids of your products in your store.
    public string restoreLives = "com.purplebug.wt.restore";
    public string expandLives = "com.purplebug.wt.expandlives";
    public string lives30 = "com.purplebug.wt.30lives";
    public string lives50 = "com.purplebug.wt.50lives";
    public string lives100 = "com.purplebug.wt.100lives";

    // Start is called once before the first execution of Update after the MonoBehaviour is created
    void Start()
    {
        panel.SetActive(false);
        InitializePurchasing();
    }

    void InitializePurchasing()
    {
        var builder = ConfigurationBuilder.Instance(StandardPurchasingModule.Instance());

        //Add products that will be purchasable and indicate its type.
        builder.AddProduct(restoreLives, ProductType.Consumable);
        builder.AddProduct(expandLives, ProductType.NonConsumable);
        builder.AddProduct(lives30, ProductType.Consumable);
        builder.AddProduct(lives50, ProductType.Consumable);
        builder.AddProduct(lives100, ProductType.Consumable);
        UnityPurchasing.Initialize(this, builder);
    }

    public void OnInitializeFailed(InitializationFailureReason error)
    {
        OnInitializeFailed(error, null);
    }

    public void OnInitializeFailed(InitializationFailureReason error, string message)
    {
        var errorMessage = $"Purchasing failed to initialize. Reason: {error}.";

        if (message != null)
        {
            errorMessage += $" More details: {message}";
        }

        Debug.Log(errorMessage);
    }

    public PurchaseProcessingResult ProcessPurchase(PurchaseEventArgs args)
    {
        //Retrieve the purchased product
        var product = args.purchasedProduct;

        //Add the purchased product to the players inventory
        if (product.definition.id == restoreLives)
        {
            BuyRestoreLivesCompleted();
        }
        else if (product.definition.id == expandLives)
        {
            BuyExpandLivesCompleted();
        }
        else if (product.definition.id == lives30)
        {
            BuyExtraLivesCompleted(30);
        }
        else if (product.definition.id == lives50)
        {
            BuyExtraLivesCompleted(50);
        }
        else if (product.definition.id == lives100)
        {
            BuyExtraLivesCompleted(100);
        }
   
        Debug.Log($"Purchase Complete - Product: {product.definition.id}");

        //We return Complete, informing IAP that the processing on our side is done and the transaction can be closed.
        return PurchaseProcessingResult.Complete;
    }

    public void OnPurchaseFailed(Product product, PurchaseFailureReason failureReason)
    {
        Debug.Log($"Purchase failed - Product: '{product.definition.id}', PurchaseFailureReason: {failureReason}");
    }

    public void OnPurchaseFailed(Product product, PurchaseFailureDescription failureDescription)
    {
        Debug.Log($"Purchase failed - Product: '{product.definition.id}'," +
            $" Purchase failure reason: {failureDescription.reason}," +
            $" Purchase failure details: {failureDescription.message}");
    }

    public void OnInitialized(IStoreController controller, IExtensionProvider extensions)
    {
        extensions.GetExtension<IAppleExtensions>().RestoreTransactions((result, error) => {
            if (result)
            {

            }
            else
            {

            }
        });
        Debug.Log("In-App Purchasing successfully initialized");
        m_StoreController = controller;
    }
    public void BuyRestoreLives()
    {
        m_StoreController.InitiatePurchase(restoreLives);

    }

    public void BuyExpandLives()
    {
        m_StoreController.InitiatePurchase(expandLives);
    }

    public void BuyExtraLives(int extraLives)
    {
        switch (extraLives)
        {
            case 30:
                m_StoreController.InitiatePurchase(lives30);
                break;
            case 50:
                m_StoreController.InitiatePurchase(lives50);
                break;
            case 100:
                m_StoreController.InitiatePurchase(lives100);
                break;
        }
    }

    public void BuyRestoreLivesCompleted()
    {
        BasicLife.Instance.RestoreLivesToLimit();
        MainMenu.Instance.shop_canvas.Hide();
        DisablePanel();
        MainMenu.Instance.gameOverCanvas.Hide();
        if (GameManager.Instance != null)
        {
            //When in Game
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
            //When in Game
            GameManager.Instance.Respawn(true);
        }

    }

    public void BuyExpandLivesCompleted()
    {
        BasicLife.Instance.SetLifeLimit(30);
        MainMenu.Instance.shop_canvas.Hide();
        DisablePanel();
    }

    public void DisablePanel()
    {
        panel.SetActive(false);
    }
}
