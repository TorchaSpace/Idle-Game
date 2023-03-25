using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class GainCoinButton : MonoBehaviour
{
    public GameObject upgradeMenu;

    [Header("UI")]
    public Text coinText;
    public Text clickValueText;
    public Text coinPerSecText;

    public Text clickUpgrade1Text;
    public Text clickUpgrade2Text;
    public Text clickUpgrade3Text;
    public Text clickUpgrade4Text;
    public Text clickUpgrade5Text;
    public Text clickUpgrade6Text;
    public Text clickUpgrade7Text;
    public Text clickUpgrade8Text;

    public Text productionUpgrade1Text;
    public Text productionUpgrade2Text;
    public Text productionUpgrade3Text;
    public Text productionUpgrade4Text;
    public Text productionUpgrade5Text;
    public Text productionUpgrade6Text;
    public Text productionUpgrade7Text;
    public Text productionUpgrade8Text;

    public Text gemsText;
    public Text gemBoostText;
    public Text gemsToGetText;

    [Header("Defaults")]
    public double coins;
    public double coinsClickValue;

    public double coinsPerSec;

    public static double cardUpgrades = 0;

    [Header("Click Upgrade")]
    public double clickUpgrade1Cost;
    public int clickUpgrade1Level;

    public double clickUpgrade2Cost;
    public int clickUpgrade2Level;

    public double clickUpgrade3Cost;
    public int clickUpgrade3Level;

    public double clickUpgrade4Cost;
    public int clickUpgrade4Level;

    public double clickUpgrade5Cost;
    public int clickUpgrade5Level;

    public double clickUpgrade6Cost;
    public int clickUpgrade6Level;

    public double clickUpgrade7Cost;
    public int clickUpgrade7Level;

    public double clickUpgrade8Cost;
    public int clickUpgrade8Level;

    [Header("Production  Upgrade")]
    public double productionUpgrade1Cost;
    public int productionUpgrade1Level;

    public double productionUpgrade2Cost;
    public double productionUpgrade2Power;
    public int productionUpgrade2Level;

    public double productionUpgrade3Cost;
    public double productionUpgrade3Power;
    public int productionUpgrade3Level;

    public double productionUpgrade4Cost;
    public double productionUpgrade4Power;
    public int productionUpgrade4Level;

    public double productionUpgrade5Cost;
    public double productionUpgrade5Power;
    public int productionUpgrade5Level;

    public double productionUpgrade6Cost;
    public double productionUpgrade6Power;
    public int productionUpgrade6Level;

    public double productionUpgrade7Cost;
    public double productionUpgrade7Power;
    public int productionUpgrade7Level;

    public double productionUpgrade8Cost;
    public double productionUpgrade8Power;
    public int productionUpgrade8Level;

    [Header("Gems")]
    public double gems;
    public double gemBoost;
    public double gemsToGet;


    private void Start()
    {
        coinsClickValue = 1;

        clickUpgrade1Cost = 100;
        clickUpgrade2Cost = 200;
        clickUpgrade3Cost = 300;
        clickUpgrade4Cost = 400;
        clickUpgrade5Cost = 500;
        clickUpgrade6Cost = 600;
        clickUpgrade7Cost = 700;
        clickUpgrade8Cost = 800;

        productionUpgrade1Cost = 500;
        productionUpgrade2Cost = 1000;
        productionUpgrade3Cost = 1500;
        productionUpgrade4Cost = 2000;
        productionUpgrade5Cost = 2500;
        productionUpgrade6Cost = 3000;
        productionUpgrade7Cost = 3500;
        productionUpgrade8Cost = 4000;

        productionUpgrade2Power = 5;
    }

    

    private void Update()
    {
        gemsToGet = (150 * System.Math.Sqrt(coins / 1e7));
        gemBoost = (gems * 0.05) + 1;

        gemsToGetText.text = "Prestige:\n+" + System.Math.Floor(gemsToGet).ToString("F0") + " Gems";
        gemsText.text = "Gems: " + System.Math.Floor(gems).ToString("F0");
        gemBoostText.text = gemBoost.ToString("F2") + "x boost";

        coinsPerSec = (productionUpgrade1Level + (productionUpgrade2Power * productionUpgrade2Level) +
            (productionUpgrade3Power * productionUpgrade3Level) + (productionUpgrade4Power * productionUpgrade4Level) +
            (productionUpgrade5Power * productionUpgrade5Level) + (productionUpgrade6Power * productionUpgrade6Level) +
            (productionUpgrade7Power * productionUpgrade7Level) + (productionUpgrade8Power * productionUpgrade8Level)) * gemBoost + cardUpgrades;


        if(coinsClickValue > 1000)
        {
            var exponent = (System.Math.Floor(System.Math.Log10(System.Math.Abs(coinsClickValue))));
            var mantissa = (coinsClickValue / System.Math.Pow(10, exponent));
            clickValueText.text = "Click\n+" + mantissa.ToString("F2") + "e" + exponent + " Fish";
        }
        else
        {
            clickValueText.text = "Click\n+" + coinsClickValue.ToString("F0") + " Fish";
        }

        if (coins > 1000)
        {
            var exponent = (System.Math.Floor(System.Math.Log10(System.Math.Abs(coins))));
            var mantissa = (coins / System.Math.Pow(10, exponent));
            coinText.text = "Fish: " + mantissa.ToString("F2") + "e" + exponent;
        }
        else
        {
            coinText.text = "Fish: " + coins.ToString("F0");
        }

        
        coinPerSecText.text = coinsPerSec.ToString("F0") + " fish/s";

        #region ClickUpgradeText
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

        clickUpgrade1Text.text = "Click Upgrade 1\nCost: " + clickUpgrade1CostString + "fish\nPower: +1 Click\nLevel: " + clickUpgrade1LevelString;

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

        clickUpgrade2Text.text = "Click Upgrade 2\nCost: " + clickUpgrade2CostString + "fish\nPower: +5 Click\nLevel: " + clickUpgrade2LevelString;

        string clickUpgrade3CostString;
        if (clickUpgrade3Cost > 1000)
        {
            var exponent = (System.Math.Floor(System.Math.Log10(System.Math.Abs(clickUpgrade3Cost))));
            var mantissa = (clickUpgrade3Cost / System.Math.Pow(10, exponent));
            clickUpgrade3CostString = mantissa.ToString("F2") + "e" + exponent;
        }
        else
        {
            clickUpgrade3CostString = clickUpgrade3Cost.ToString("F0");
        }

        string clickUpgrade3LevelString;
        if (clickUpgrade3Level > 1000)
        {
            var exponent = (System.Math.Floor(System.Math.Log10(System.Math.Abs(clickUpgrade3Level))));
            var mantissa = (coins / System.Math.Pow(10, exponent));
            clickUpgrade3LevelString = mantissa.ToString("F2") + "e" + exponent;
        }
        else
        {
            clickUpgrade3LevelString = clickUpgrade3Level.ToString("F0");
        }

        clickUpgrade3Text.text = "Click Upgrade 3\nCost: " + clickUpgrade3CostString + "fish\nPower: +10 Click\nLevel: " + clickUpgrade3LevelString;

        string clickUpgrade4CostString;
        if (clickUpgrade4Cost > 1000)
        {
            var exponent = (System.Math.Floor(System.Math.Log10(System.Math.Abs(clickUpgrade4Cost))));
            var mantissa = (clickUpgrade4Cost / System.Math.Pow(10, exponent));
            clickUpgrade4CostString = mantissa.ToString("F2") + "e" + exponent;
        }
        else
        {
            clickUpgrade4CostString = clickUpgrade4Cost.ToString("F0");
        }

        string clickUpgrade4LevelString;
        if (clickUpgrade4Level > 1000)
        {
            var exponent = (System.Math.Floor(System.Math.Log10(System.Math.Abs(clickUpgrade4Level))));
            var mantissa = (coins / System.Math.Pow(10, exponent));
            clickUpgrade4LevelString = mantissa.ToString("F2") + "e" + exponent;
        }
        else
        {
            clickUpgrade4LevelString = clickUpgrade4Level.ToString("F0");
        }

        clickUpgrade4Text.text = "Click Upgrade 4\nCost: " + clickUpgrade4CostString + "fish\nPower: +15 Click\nLevel: " + clickUpgrade4LevelString;

        string clickUpgrade5CostString;
        if (clickUpgrade5Cost > 1000)
        {
            var exponent = (System.Math.Floor(System.Math.Log10(System.Math.Abs(clickUpgrade5Cost))));
            var mantissa = (clickUpgrade5Cost / System.Math.Pow(10, exponent));
            clickUpgrade5CostString = mantissa.ToString("F2") + "e" + exponent;
        }
        else
        {
            clickUpgrade5CostString = clickUpgrade5Cost.ToString("F0");
        }

        string clickUpgrade5LevelString;
        if (clickUpgrade5Level > 1000)
        {
            var exponent = (System.Math.Floor(System.Math.Log10(System.Math.Abs(clickUpgrade5Level))));
            var mantissa = (coins / System.Math.Pow(10, exponent));
            clickUpgrade5LevelString = mantissa.ToString("F2") + "e" + exponent;
        }
        else
        {
            clickUpgrade5LevelString = clickUpgrade5Level.ToString("F0");
        }

        clickUpgrade5Text.text = "Click Upgrade 5\nCost: " + clickUpgrade5CostString + "fish\nPower: +20 Click\nLevel: " + clickUpgrade5LevelString;

        string clickUpgrade6CostString;
        if (clickUpgrade6Cost > 1000)
        {
            var exponent = (System.Math.Floor(System.Math.Log10(System.Math.Abs(clickUpgrade6Cost))));
            var mantissa = (clickUpgrade6Cost / System.Math.Pow(10, exponent));
            clickUpgrade6CostString = mantissa.ToString("F2") + "e" + exponent;
        }
        else
        {
            clickUpgrade6CostString = clickUpgrade6Cost.ToString("F0");
        }

        string clickUpgrade6LevelString;
        if (clickUpgrade6Level > 1000)
        {
            var exponent = (System.Math.Floor(System.Math.Log10(System.Math.Abs(clickUpgrade6Level))));
            var mantissa = (coins / System.Math.Pow(10, exponent));
            clickUpgrade6LevelString = mantissa.ToString("F2") + "e" + exponent;
        }
        else
        {
            clickUpgrade6LevelString = clickUpgrade6Level.ToString("F0");
        }

        clickUpgrade6Text.text = "Click Upgrade 6\nCost: " + clickUpgrade6CostString + "fish\nPower: +25 Click\nLevel: " + clickUpgrade6LevelString;

        string clickUpgrade7CostString;
        if (clickUpgrade7Cost > 1000)
        {
            var exponent = (System.Math.Floor(System.Math.Log10(System.Math.Abs(clickUpgrade7Cost))));
            var mantissa = (clickUpgrade7Cost / System.Math.Pow(10, exponent));
            clickUpgrade7CostString = mantissa.ToString("F2") + "e" + exponent;
        }
        else
        {
            clickUpgrade7CostString = clickUpgrade7Cost.ToString("F0");
        }

        string clickUpgrade7LevelString;
        if (clickUpgrade7Level > 1000)
        {
            var exponent = (System.Math.Floor(System.Math.Log10(System.Math.Abs(clickUpgrade7Level))));
            var mantissa = (coins / System.Math.Pow(10, exponent));
            clickUpgrade7LevelString = mantissa.ToString("F2") + "e" + exponent;
        }
        else
        {
            clickUpgrade7LevelString = clickUpgrade7Level.ToString("F0");
        }

        clickUpgrade7Text.text = "Click Upgrade 7\nCost: " + clickUpgrade7CostString + "fish\nPower: +30 Click\nLevel: " + clickUpgrade7LevelString;

        string clickUpgrade8CostString;
        if (clickUpgrade8Cost > 1000)
        {
            var exponent = (System.Math.Floor(System.Math.Log10(System.Math.Abs(clickUpgrade8Cost))));
            var mantissa = (clickUpgrade8Cost / System.Math.Pow(10, exponent));
            clickUpgrade8CostString = mantissa.ToString("F2") + "e" + exponent;
        }
        else
        {
            clickUpgrade8CostString = clickUpgrade8Cost.ToString("F0");
        }

        string clickUpgrade8LevelString;
        if (clickUpgrade8Level > 1000)
        {
            var exponent = (System.Math.Floor(System.Math.Log10(System.Math.Abs(clickUpgrade8Level))));
            var mantissa = (coins / System.Math.Pow(10, exponent));
            clickUpgrade8LevelString = mantissa.ToString("F2") + "e" + exponent;
        }
        else
        {
            clickUpgrade8LevelString = clickUpgrade8Level.ToString("F0");
        }

        clickUpgrade8Text.text = "Click Upgrade 8\nCost: " + clickUpgrade8CostString + "fish\nPower: +35 Click\nLevel: " + clickUpgrade8LevelString;
        #endregion

        #region ProductionUpgradeText
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

        productionUpgrade1Text.text = "Production Upgrade 1\nCost: " + productionUpgrade1CostString + "fish\nPower: +" + gemBoost + " fish/s\nLevel: " + productionUpgrade1LevelString;

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
        if (productionUpgrade2Level > 1000)
        {
            var exponent = (System.Math.Floor(System.Math.Log10(System.Math.Abs(productionUpgrade2Level))));
            var mantissa = (coins / System.Math.Pow(10, exponent));
            productionUpgrade2LevelString = mantissa.ToString("F2") + "e" + exponent;
        }
        else
        {
            productionUpgrade2LevelString = productionUpgrade2Level.ToString("F0");
        }

        productionUpgrade2Text.text = "Production Upgrade 2\nCost: " + productionUpgrade2CostString + "fish\nPower: +" + (productionUpgrade2Power * gemBoost) + " fish/s\nLevel: " + productionUpgrade2LevelString;

        string productionUpgrade3CostString;
        if (productionUpgrade3Cost > 1000)
        {
            var exponent = (System.Math.Floor(System.Math.Log10(System.Math.Abs(productionUpgrade3Cost))));
            var mantissa = (productionUpgrade3Cost / System.Math.Pow(10, exponent));
            productionUpgrade3CostString = mantissa.ToString("F2") + "e" + exponent;
        }
        else
        {
            productionUpgrade3CostString = productionUpgrade3Cost.ToString("F0");
        }

        string productionUpgrade3LevelString;
        if (productionUpgrade3Level > 1000)
        {
            var exponent = (System.Math.Floor(System.Math.Log10(System.Math.Abs(productionUpgrade3Level))));
            var mantissa = (coins / System.Math.Pow(10, exponent));
            productionUpgrade3LevelString = mantissa.ToString("F2") + "e" + exponent;
        }
        else
        {
            productionUpgrade3LevelString = productionUpgrade3Level.ToString("F0");
        }

        productionUpgrade3Text.text = "Production Upgrade 3\nCost: " + productionUpgrade3CostString + "fish\nPower: +" + (productionUpgrade3Power * gemBoost) + " fish/s\nLevel: " + productionUpgrade3LevelString;

        string productionUpgrade4CostString;
        if (productionUpgrade4Cost > 1000)
        {
            var exponent = (System.Math.Floor(System.Math.Log10(System.Math.Abs(productionUpgrade4Cost))));
            var mantissa = (productionUpgrade4Cost / System.Math.Pow(10, exponent));
            productionUpgrade4CostString = mantissa.ToString("F2") + "e" + exponent;
        }
        else
        {
            productionUpgrade4CostString = productionUpgrade4Cost.ToString("F0");
        }

        string productionUpgrade4LevelString;
        if (productionUpgrade4Level > 1000)
        {
            var exponent = (System.Math.Floor(System.Math.Log10(System.Math.Abs(productionUpgrade4Level))));
            var mantissa = (coins / System.Math.Pow(10, exponent));
            productionUpgrade4LevelString = mantissa.ToString("F2") + "e" + exponent;
        }
        else
        {
            productionUpgrade4LevelString = productionUpgrade4Level.ToString("F0");
        }

        productionUpgrade4Text.text = "Production Upgrade 4\nCost: " + productionUpgrade4CostString + "fish\nPower: +" + (productionUpgrade4Power * gemBoost) + " fish/s\nLevel: " + productionUpgrade4LevelString;

        string productionUpgrade5CostString;
        if (productionUpgrade5Cost > 1000)
        {
            var exponent = (System.Math.Floor(System.Math.Log10(System.Math.Abs(productionUpgrade5Cost))));
            var mantissa = (productionUpgrade5Cost / System.Math.Pow(10, exponent));
            productionUpgrade5CostString = mantissa.ToString("F2") + "e" + exponent;
        }
        else
        {
            productionUpgrade5CostString = productionUpgrade5Cost.ToString("F0");
        }

        string productionUpgrade5LevelString;
        if (productionUpgrade5Level > 1000)
        {
            var exponent = (System.Math.Floor(System.Math.Log10(System.Math.Abs(productionUpgrade5Level))));
            var mantissa = (coins / System.Math.Pow(10, exponent));
            productionUpgrade5LevelString = mantissa.ToString("F2") + "e" + exponent;
        }
        else
        {
            productionUpgrade5LevelString = productionUpgrade5Level.ToString("F0");
        }

        productionUpgrade5Text.text = "Production Upgrade 5\nCost: " + productionUpgrade5CostString + "fish\nPower: +" + (productionUpgrade5Power * gemBoost) + " fish/s\nLevel: " + productionUpgrade5LevelString;

        string productionUpgrade6CostString;
        if (productionUpgrade6Cost > 1000)
        {
            var exponent = (System.Math.Floor(System.Math.Log10(System.Math.Abs(productionUpgrade6Cost))));
            var mantissa = (productionUpgrade6Cost / System.Math.Pow(10, exponent));
            productionUpgrade6CostString = mantissa.ToString("F2") + "e" + exponent;
        }
        else
        {
            productionUpgrade6CostString = productionUpgrade6Cost.ToString("F0");
        }

        string productionUpgrade6LevelString;
        if (productionUpgrade6Level > 1000)
        {
            var exponent = (System.Math.Floor(System.Math.Log10(System.Math.Abs(productionUpgrade6Level))));
            var mantissa = (coins / System.Math.Pow(10, exponent));
            productionUpgrade6LevelString = mantissa.ToString("F2") + "e" + exponent;
        }
        else
        {
            productionUpgrade6LevelString = productionUpgrade6Level.ToString("F0");
        }

        productionUpgrade6Text.text = "Production Upgrade 6\nCost: " + productionUpgrade6CostString + "fish\nPower: +" + (productionUpgrade6Power * gemBoost) + " fish/s\nLevel: " + productionUpgrade6LevelString;

        string productionUpgrade7CostString;
        if (productionUpgrade7Cost > 1000)
        {
            var exponent = (System.Math.Floor(System.Math.Log10(System.Math.Abs(productionUpgrade7Cost))));
            var mantissa = (productionUpgrade7Cost / System.Math.Pow(10, exponent));
            productionUpgrade7CostString = mantissa.ToString("F2") + "e" + exponent;
        }
        else
        {
            productionUpgrade7CostString = productionUpgrade7Cost.ToString("F0");
        }

        string productionUpgrade7LevelString;
        if (productionUpgrade7Level > 1000)
        {
            var exponent = (System.Math.Floor(System.Math.Log10(System.Math.Abs(productionUpgrade7Level))));
            var mantissa = (coins / System.Math.Pow(10, exponent));
            productionUpgrade7LevelString = mantissa.ToString("F2") + "e" + exponent;
        }
        else
        {
            productionUpgrade7LevelString = productionUpgrade7Level.ToString("F0");
        }

        productionUpgrade7Text.text = "Production Upgrade 7\nCost: " + productionUpgrade7CostString + "fish\nPower: +" + (productionUpgrade7Power * gemBoost) + " fish/s\nLevel: " + productionUpgrade7LevelString;

        string productionUpgrade8CostString;
        if (productionUpgrade8Cost > 1000)
        {
            var exponent = (System.Math.Floor(System.Math.Log10(System.Math.Abs(productionUpgrade8Cost))));
            var mantissa = (productionUpgrade8Cost / System.Math.Pow(10, exponent));
            productionUpgrade8CostString = mantissa.ToString("F2") + "e" + exponent;
        }
        else
        {
            productionUpgrade8CostString = productionUpgrade8Cost.ToString("F0");
        }

        string productionUpgrade8LevelString;
        if (productionUpgrade8Level > 1000)
        {
            var exponent = (System.Math.Floor(System.Math.Log10(System.Math.Abs(productionUpgrade8Level))));
            var mantissa = (coins / System.Math.Pow(10, exponent));
            productionUpgrade8LevelString = mantissa.ToString("F2") + "e" + exponent;
        }
        else
        {
            productionUpgrade8LevelString = productionUpgrade8Level.ToString("F0");
        }

        productionUpgrade8Text.text = "Production Upgrade 8\nCost: " + productionUpgrade8CostString + "fish\nPower: +" + (productionUpgrade8Power * gemBoost) + " fish/s\nLevel: " + productionUpgrade8LevelString;
        #endregion

        coins += coinsPerSec * Time.deltaTime;
    }

    public void Click()
    {
        coins += coinsClickValue;
    }

    public void Prestige()
    {
        if(coins > 1000)
        {
            coins = 0;
            coinsClickValue = 1;
            clickUpgrade1Cost = 10;
            clickUpgrade2Cost = 100;
            productionUpgrade1Cost = 25;
            productionUpgrade2Cost = 250;
            clickUpgrade1Level = 0;
            clickUpgrade2Level = 0;
            productionUpgrade1Level = 0;
            productionUpgrade2Level = 0;
            
            gems += gemsToGet;
        }
    }

    public void OpenUpgradeMenu()
    {
        upgradeMenu.SetActive(!upgradeMenu.activeSelf);
    }

    #region ClickUpgrade
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

    public void BuyClickUpgrade3()
    {
        if(coins >= clickUpgrade3Cost)
        {
            clickUpgrade3Level++;
            coins -= clickUpgrade3Cost;
            clickUpgrade3Cost *= 2.03;
            coinsClickValue += 10;
        }
    }

    public void BuyClickUpgrade4()
    {
        if (coins >= clickUpgrade3Cost)
        {
            clickUpgrade4Level++;
            coins -= clickUpgrade4Cost;
            clickUpgrade4Cost *= 2.06;
            coinsClickValue += 15;
        }
    }

    public void BuyClickUpgrade5()
    {
        if (coins >= clickUpgrade5Cost)
        {
            clickUpgrade5Level++;
            coins -= clickUpgrade5Cost;
            clickUpgrade5Cost *= 2.09;
            coinsClickValue += 20;
        }
    }

    public void BuyClickUpgrade6()
    {
        if (coins >= clickUpgrade6Cost)
        {
            clickUpgrade6Level++;
            coins -= clickUpgrade6Cost;
            clickUpgrade6Cost *= 3.03;
            coinsClickValue += 25;
        }
    }

    public void BuyClickUpgrade7()
    {
        if (coins >= clickUpgrade7Cost)
        {
            clickUpgrade7Level++;
            coins -= clickUpgrade7Cost;
            clickUpgrade7Cost *= 3.06;
            coinsClickValue += 30;
        }
    }

    public void BuyClickUpgrade8()
    {
        if (coins >= clickUpgrade8Cost)
        {
            clickUpgrade8Level++;
            coins -= clickUpgrade8Cost;
            clickUpgrade8Cost *= 3.09;
            coinsClickValue += 35;
        }
    }
    #endregion

    #region ProducitonUpgrade
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

    public void BuyProductionUpgrade3()
    {
        if (coins >= productionUpgrade3Cost)
        {
            productionUpgrade3Level++;
            coins -= productionUpgrade3Cost;
            productionUpgrade3Cost *= 2.03;
        }
    }

    public void BuyProductionUpgrade4()
    {
        if (coins >= productionUpgrade4Cost)
        {
            productionUpgrade4Level++;
            coins -= productionUpgrade4Cost;
            productionUpgrade4Cost *= 2.06;
        }
    }

    public void BuyProductionUpgrade5()
    {
        if (coins >= productionUpgrade5Cost)
        {
            productionUpgrade5Level++;
            coins -= productionUpgrade5Cost;
            productionUpgrade5Cost *= 2.09;
        }
    }

    public void BuyProductionUpgrade6()
    {
        if (coins >= productionUpgrade6Cost)
        {
            productionUpgrade6Level++;
            coins -= productionUpgrade6Cost;
            productionUpgrade6Cost *= 3.03;
        }
    }

    public void BuyProductionUpgrade7()
    {
        if (coins >= productionUpgrade7Cost)
        {
            productionUpgrade7Level++;
            coins -= productionUpgrade7Cost;
            productionUpgrade7Cost *= 3.06;
        }
    }

    public void BuyProductionUpgrade8()
    {
        if (coins >= productionUpgrade8Cost)
        {
            productionUpgrade8Level++;
            coins -= productionUpgrade8Cost;
            productionUpgrade8Cost *= 3.09;
        }
    }
    #endregion
}

