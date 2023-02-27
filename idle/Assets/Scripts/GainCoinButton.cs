using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class GainCoinButton : MonoBehaviour, IDataPersistence
{
    public GameObject upgradeMenu;

    public Text coinText;
    public Text clickValueText;
    public Text coinPerSecText;
    public Text clickUpgrade1Text;
    public Text clickUpgrade2Text;
    public Text productionUpgrade1Text;
    public Text productionUpgrade2Text;

    public double coins;
    public double coinsClickValue;

    public double coinsPerSec;
    public double clickUpgrade1Cost;
    public int clickUpgrade1Level;
   

    public double productionUpgrade1Cost;
    public int productionUpgrade1Level;

    public double clickUpgrade2Cost;
    public int clickUpgrade2Level;

    public double productionUpgrade2Cost;
    public double productionUpgrade2Power;
    public int productionUpgrade2Level;

    private void Start()
    {
        productionUpgrade2Power = 5;
    }

    public void LoadData(SaveLoad saveLoad)
    {
        this.coins = saveLoad.coins;
        this.coinsClickValue = saveLoad.coinsClickValue;
        this.clickUpgrade1Cost = saveLoad.clickUpgrade1Cost;
        this.clickUpgrade2Cost = saveLoad.clickUpgrade2Cost;
        this.productionUpgrade1Cost = saveLoad.productionUpgrade1Cost;
        this.productionUpgrade2Cost = saveLoad.productionUpgrade2Cost;
        this.clickUpgrade1Level = saveLoad.clickUpgrade1Level;
        this.clickUpgrade2Level = saveLoad.clickUpgrade2Level;
        this.productionUpgrade1Level = saveLoad.productionUpgrade1Level;
        this.productionUpgrade2Level = saveLoad.productionUpgrade2Level;
    }

    public void SaveData(ref SaveLoad saveLoad)
    {
        saveLoad.coins = (int)this.coins;
        saveLoad.coinsClickValue = (int)this.coinsClickValue;
        saveLoad.clickUpgrade1Cost = (int)this.clickUpgrade1Cost;
        saveLoad.clickUpgrade2Cost = (int)this.clickUpgrade2Cost;
        saveLoad.productionUpgrade1Cost = (int)this.productionUpgrade1Cost;
        saveLoad.productionUpgrade2Cost = (int)this.productionUpgrade2Cost;
        saveLoad.clickUpgrade1Level = this.clickUpgrade1Level;
        saveLoad.clickUpgrade2Level = this.clickUpgrade2Level;
        saveLoad.productionUpgrade1Level = this.productionUpgrade1Level;
        saveLoad.productionUpgrade2Level = this.productionUpgrade2Level;
    }

    private void Update()
    {
        coinsPerSec = productionUpgrade1Level + (productionUpgrade2Power * productionUpgrade2Level);


        if(coinsClickValue > 1000)
        {
            var exponent = (System.Math.Floor(System.Math.Log10(System.Math.Abs(coinsClickValue))));
            var mantissa = (coinsClickValue / System.Math.Pow(10, exponent));
            clickValueText.text = "Click\n+" + mantissa.ToString("F2") + "e" + exponent + " Coins";
        }
        else
        {
            clickValueText.text = "Click\n+" + coinsClickValue.ToString("F0") + " Coins";
        }

        if (coins > 1000)
        {
            var exponent = (System.Math.Floor(System.Math.Log10(System.Math.Abs(coins))));
            var mantissa = (coins / System.Math.Pow(10, exponent));
            coinText.text = "Coins: " + mantissa.ToString("F2") + "e" + exponent;
        }
        else
        {
            coinText.text = "Coins: " + coins.ToString("F0");
        }

        
        coinPerSecText.text = coinsPerSec.ToString("F0") + " coins/s";

        string clickUpgrade1CostString;
        if (clickUpgrade1Cost > 1000)
        {
            var exponent = (System.Math.Floor(System.Math.Log10(System.Math.Abs(clickUpgrade1Cost))));
            var mantissa = (clickUpgrade1Cost / System.Math.Pow(10, exponent));
            clickUpgrade1CostString = mantissa.ToString("F2") + "e" + exponent;
        }
        else
        {
            clickUpgrade1CostString = clickUpgrade1Cost.ToString("F0");
        }

        string clickUpgrade1LevelString;
        if (clickUpgrade1Level > 1000)
        {
            var exponent = (System.Math.Floor(System.Math.Log10(System.Math.Abs(clickUpgrade1Level))));
            var mantissa = (coins / System.Math.Pow(10, exponent));
            clickUpgrade1LevelString = mantissa.ToString("F2") + "e" + exponent;
        }
        else
        {
            clickUpgrade1LevelString = clickUpgrade1Level.ToString("F0");
        }

        clickUpgrade1Text.text = "Click Upgrade 1\nCost: " + clickUpgrade1CostString + "coins\nPower: +1 Click\nLevel: " + clickUpgrade1LevelString;

        string clickUpgrade2CostString;
        if (clickUpgrade2Cost > 1000)
        {
            var exponent = (System.Math.Floor(System.Math.Log10(System.Math.Abs(clickUpgrade2Cost))));
            var mantissa = (clickUpgrade2Cost / System.Math.Pow(10, exponent));
            clickUpgrade2CostString = mantissa.ToString("F2") + "e" + exponent;
        }
        else
        {
            clickUpgrade2CostString = clickUpgrade2Cost.ToString("F0");
        }

        string clickUpgrade2LevelString;
        if (clickUpgrade2Level > 1000)
        {
            var exponent = (System.Math.Floor(System.Math.Log10(System.Math.Abs(clickUpgrade2Level))));
            var mantissa = (coins / System.Math.Pow(10, exponent));
            clickUpgrade2LevelString = mantissa.ToString("F2") + "e" + exponent;
        }
        else
        {
            clickUpgrade2LevelString = clickUpgrade2Level.ToString("F0");
        }

        clickUpgrade2Text.text = "Click Upgrade 2\nCost: " + clickUpgrade2CostString + "coins\nPower: +5 Click\nLevel: " + clickUpgrade2LevelString;


        string productionUpgrade1CostString;
        if (productionUpgrade1Cost > 1000)
        {
            var exponent = (System.Math.Floor(System.Math.Log10(System.Math.Abs(productionUpgrade1Cost))));
            var mantissa = (productionUpgrade1Cost / System.Math.Pow(10, exponent));
            productionUpgrade1CostString = mantissa.ToString("F2") + "e" + exponent;
        }
        else
        {
            productionUpgrade1CostString = productionUpgrade1Cost.ToString("F0");
        }

        string productionUpgrade1LevelString;
        if (productionUpgrade1Level > 1000)
        {
            var exponent = (System.Math.Floor(System.Math.Log10(System.Math.Abs(productionUpgrade1Level))));
            var mantissa = (coins / System.Math.Pow(10, exponent));
            productionUpgrade1LevelString = mantissa.ToString("F2") + "e" + exponent;
        }
        else
        {
            productionUpgrade1LevelString = productionUpgrade1Level.ToString("F0");
        }

        productionUpgrade1Text.text = "Production Upgrade 1\nCost: " + productionUpgrade1CostString + "coins\nPower: +1 coins/s\nLevel: " + productionUpgrade1LevelString;

        string productionUpgrade2CostString;
        if (productionUpgrade2Cost > 1000)
        {
            var exponent = (System.Math.Floor(System.Math.Log10(System.Math.Abs(productionUpgrade2Cost))));
            var mantissa = (productionUpgrade2Cost / System.Math.Pow(10, exponent));
            productionUpgrade2CostString = mantissa.ToString("F2") + "e" + exponent;
        }
        else
        {
            productionUpgrade2CostString = productionUpgrade2Cost.ToString("F0");
        }

        string productionUpgrade2LevelString;
        if (productionUpgrade1Level > 1000)
        {
            var exponent = (System.Math.Floor(System.Math.Log10(System.Math.Abs(productionUpgrade2Level))));
            var mantissa = (coins / System.Math.Pow(10, exponent));
            productionUpgrade2LevelString = mantissa.ToString("F2") + "e" + exponent;
        }
        else
        {
            productionUpgrade2LevelString = productionUpgrade2Level.ToString("F0");
        }

        productionUpgrade2Text.text = "Production Upgrade 1\nCost: " + productionUpgrade2CostString + "coins\nPower: +" + productionUpgrade2Power + " coins/s\nLevel: " + productionUpgrade2LevelString;

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

    public void BuyClickUpgrade2()
    {
        if (coins >= clickUpgrade2Cost)
        {
            clickUpgrade2Level++;
            coins -= clickUpgrade2Cost;
            clickUpgrade2Cost *= 1.09;
            coinsClickValue += 5;
        }
    }

    public void BuyProductionUpgrade1()
    {
        if (coins >= productionUpgrade1Cost)
        {
            productionUpgrade1Level++;
            coins -= productionUpgrade1Cost;
            productionUpgrade1Cost *= 1.07;
        }
    }

    public void BuyProductionUpgrade2()
    {
        if (coins >= productionUpgrade2Cost)
        {
            productionUpgrade2Level++;
            coins -= productionUpgrade2Cost;
            productionUpgrade2Cost *= 1.09;
        }
    }
}
