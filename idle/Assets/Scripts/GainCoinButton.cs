using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class GainCoinButton : MonoBehaviour
{
    public GameObject upgradeMenu;

    public Text coinText;
    public Text coinPerSecText;
    public Text clickUpgradeText;
    public Text productionUpgrade1Text;

    public double coins;
    public double coinsClickValue;

    public double coinsPerSec;
    public double clickUpgrade1Cost;
    public int clickUpgrade1Level;
   

    public double productionUpgrade1Cost;
    public int productionUpgrade1Level;

    private void Start()
    {
        coinsClickValue = 1;
        clickUpgrade1Cost = 10;
        productionUpgrade1Cost = 25;
    }

    private void Update()
    {
        coinsPerSec = productionUpgrade1Level;

        coinText.text = "Coins: " + coins.ToString("F0");
        coinPerSecText.text = coinsPerSec.ToString("F0") + " coins/s";
        clickUpgradeText.text = "Click Upgrade 1\nCost: " + clickUpgrade1Cost.ToString("F0") + "coins\nPower: +1 Click\nLevel: " + clickUpgrade1Level; 
        productionUpgrade1Text.text = "Production Upgrade 1\nCost: " + productionUpgrade1Cost.ToString("F0") + "coins\nPower: +1 coins/s\nLevel: " + productionUpgrade1Level;

        coins += coinsPerSec * Time.deltaTime;
    }

    public void Click()
    {
        coins += coinsClickValue;
    }

    public void OpenUpgradeMenu()
    {
        upgradeMenu.SetActive(!upgradeMenu.activeSelf);
    }

    public void BuyClickUpgrade1()
    {
        if(coins >= clickUpgrade1Cost)
        {
            clickUpgrade1Level++;
            coins -= clickUpgrade1Cost;
            clickUpgrade1Cost *= 1.07;
            coinsClickValue++;
        }
    }

    public void BuyProductionUpgrade1()
    {
        if (coins >= productionUpgrade1Cost)
        {
            productionUpgrade1Level++;
            coins -= productionUpgrade1Cost;
            clickUpgrade1Cost *= 1.07;
        }
    }
}
