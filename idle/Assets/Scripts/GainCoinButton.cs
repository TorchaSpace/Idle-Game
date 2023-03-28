using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using BreakInfinity;
using System;
using static BreakInfinity.BigDouble;

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

    public BigDouble clickUpgrade1Cost;
    public BigDouble clickUpgrade1Level;

    public BigDouble clickUpgrade2Cost;
    public BigDouble clickUpgrade2Level;

    public BigDouble clickUpgrade3Cost;
    public BigDouble clickUpgrade3Level;

    public BigDouble clickUpgrade4Cost;
    public BigDouble clickUpgrade4Level;

    public BigDouble clickUpgrade5Cost;
    public BigDouble clickUpgrade5Level;

    public BigDouble clickUpgrade6Cost;
    public BigDouble clickUpgrade6Level;

    public BigDouble clickUpgrade7Cost;
    public BigDouble clickUpgrade7Level;

    public BigDouble clickUpgrade8Cost;
    public BigDouble clickUpgrade8Level;

    public BigDouble productionUpgrade1Cost;
    public BigDouble productionUpgrade1Level;

    public BigDouble productionUpgrade2Cost;
    public BigDouble productionUpgrade2Power;
    public BigDouble productionUpgrade2Level;

    public BigDouble productionUpgrade3Cost;
    public BigDouble productionUpgrade3Power;
    public BigDouble productionUpgrade3Level;

    public BigDouble productionUpgrade4Cost;
    public BigDouble productionUpgrade4Power;
    public BigDouble productionUpgrade4Level;

    public BigDouble productionUpgrade5Cost;
    public BigDouble productionUpgrade5Power;
    public BigDouble productionUpgrade5Level;

    public BigDouble productionUpgrade6Cost;
    public BigDouble productionUpgrade6Power;
    public BigDouble productionUpgrade6Level;

    public BigDouble productionUpgrade7Cost;
    public BigDouble productionUpgrade7Power;
    public BigDouble productionUpgrade7Level;

    public BigDouble productionUpgrade8Cost;
    public BigDouble productionUpgrade8Power;
    public BigDouble productionUpgrade8Level;

    public BigDouble coins;
    public BigDouble coinsClickValue;

    public BigDouble coinsPerSec;

    public static BigDouble cardUpgrades = 0;

    public BigDouble gems;
    public BigDouble gemBoost;
    public BigDouble gemsToGet;


    private void Start()
    {
        Application.targetFrameRate = 60;
        Load();
    }

    public void Load()
    {
        coins = Parse(PlayerPrefs.GetString("coins", "0"));

        coinsClickValue = Parse(PlayerPrefs.GetString("coinsClickValue", "1"));

        gems = Parse(PlayerPrefs.GetString("gems", "0"));
        gemBoost = Parse(PlayerPrefs.GetString("gemBoost", "1"));
        


        clickUpgrade1Cost = Parse(PlayerPrefs.GetString("clickUpgrade1Cost", "100"));
        clickUpgrade2Cost = Parse(PlayerPrefs.GetString("clickUpgrade2Cost", "200"));
        clickUpgrade3Cost = Parse(PlayerPrefs.GetString("clickUpgrade3Cost", "300"));
        clickUpgrade4Cost = Parse(PlayerPrefs.GetString("clickUpgrade4Cost", "400"));
        clickUpgrade5Cost = Parse(PlayerPrefs.GetString("clickUpgrade5Cost", "500"));
        clickUpgrade6Cost = Parse(PlayerPrefs.GetString("clickUpgrade6Cost", "600"));
        clickUpgrade7Cost = Parse(PlayerPrefs.GetString("clickUpgrade7Cost", "700"));
        clickUpgrade8Cost = Parse(PlayerPrefs.GetString("clickUpgrade8Cost", "800"));

        productionUpgrade1Cost = Parse(PlayerPrefs.GetString("productionUpgrade1Cost", "500"));
        productionUpgrade2Cost = Parse(PlayerPrefs.GetString("productionUpgrade2Cost", "1000"));
        productionUpgrade3Cost = Parse(PlayerPrefs.GetString("productionUpgrade3Cost", "1500"));
        productionUpgrade4Cost = Parse(PlayerPrefs.GetString("productionUpgrade4Cost", "2000"));
        productionUpgrade5Cost = Parse(PlayerPrefs.GetString("productionUpgrade5Cost", "3000"));
        productionUpgrade6Cost = Parse(PlayerPrefs.GetString("productionUpgrade6Cost", "4000"));
        productionUpgrade7Cost = Parse(PlayerPrefs.GetString("productionUpgrade7Cost", "5000"));
        productionUpgrade8Cost = Parse(PlayerPrefs.GetString("productionUpgrade8Cost", "6000"));

        productionUpgrade2Power = Parse(PlayerPrefs.GetString("productionUpgrade2Power", "5"));
        productionUpgrade3Power = Parse(PlayerPrefs.GetString("productionUpgrade3Power", "10"));
        productionUpgrade4Power = Parse(PlayerPrefs.GetString("productionUpgrade4Power", "15"));
        productionUpgrade5Power = Parse(PlayerPrefs.GetString("productionUpgrade5Power", "20"));
        productionUpgrade6Power = Parse(PlayerPrefs.GetString("productionUpgrade6Power", "25"));
        productionUpgrade7Power = Parse(PlayerPrefs.GetString("productionUpgrade7Power", "30"));
        productionUpgrade8Power = Parse(PlayerPrefs.GetString("productionUpgrade8Power", "35"));

        clickUpgrade1Level = Parse(PlayerPrefs.GetString("clickUpgrade1Level", "0"));
        clickUpgrade2Level = Parse(PlayerPrefs.GetString("clickUpgrade2Level", "0"));
        clickUpgrade3Level = Parse(PlayerPrefs.GetString("clickUpgrade3Level", "0"));
        clickUpgrade4Level = Parse(PlayerPrefs.GetString("clickUpgrade4Level", "0"));
        clickUpgrade5Level = Parse(PlayerPrefs.GetString("clickUpgrade5Level", "0"));
        clickUpgrade6Level = Parse(PlayerPrefs.GetString("clickUpgrade6Level", "0"));
        clickUpgrade7Level = Parse(PlayerPrefs.GetString("clickUpgrade7Level", "0"));
        clickUpgrade8Level = Parse(PlayerPrefs.GetString("clickUpgrade8Level", "0"));

        productionUpgrade1Level = Parse(PlayerPrefs.GetString("productionUpgrade1Level", "0"));
        productionUpgrade2Level = Parse(PlayerPrefs.GetString("productionUpgrade2Level", "0"));
        productionUpgrade3Level = Parse(PlayerPrefs.GetString("productionUpgrade3Level", "0"));
        productionUpgrade4Level = Parse(PlayerPrefs.GetString("productionUpgrade4Level", "0"));
        productionUpgrade5Level = Parse(PlayerPrefs.GetString("productionUpgrade5Level", "0"));
        productionUpgrade6Level = Parse(PlayerPrefs.GetString("productionUpgrade6Level", "0"));
        productionUpgrade7Level = Parse(PlayerPrefs.GetString("productionUpgrade7Level", "0"));
        productionUpgrade8Level = Parse(PlayerPrefs.GetString("productionUpgrade8Level", "0"));


    }

    public void Save()
    {
        PlayerPrefs.SetString("coins", coins.ToString());

        PlayerPrefs.SetString("coinsClickValue", coinsClickValue.ToString());

        PlayerPrefs.SetString("gems", gems.ToString());
        PlayerPrefs.SetString("gemBoost", gemBoost.ToString());

        PlayerPrefs.SetString("clickUpgrade1Cost", clickUpgrade1Cost.ToString());
        PlayerPrefs.SetString("clickUpgrade2Cost", clickUpgrade2Cost.ToString());
        PlayerPrefs.SetString("clickUpgrade3Cost", clickUpgrade3Cost.ToString());
        PlayerPrefs.SetString("clickUpgrade4Cost", clickUpgrade4Cost.ToString());
        PlayerPrefs.SetString("clickUpgrade5Cost", clickUpgrade5Cost.ToString());
        PlayerPrefs.SetString("clickUpgrade6Cost", clickUpgrade6Cost.ToString());
        PlayerPrefs.SetString("clickUpgrade7Cost", clickUpgrade7Cost.ToString());
        PlayerPrefs.SetString("clickUpgrade8Cost", clickUpgrade8Cost.ToString());

        PlayerPrefs.SetString("productionUpgrade1Cost", productionUpgrade1Cost.ToString());
        PlayerPrefs.SetString("productionUpgrade2Cost", productionUpgrade2Cost.ToString());
        PlayerPrefs.SetString("productionUpgrade3Cost", productionUpgrade3Cost.ToString());
        PlayerPrefs.SetString("productionUpgrade4Cost", productionUpgrade4Cost.ToString());
        PlayerPrefs.SetString("productionUpgrade5Cost", productionUpgrade5Cost.ToString());
        PlayerPrefs.SetString("productionUpgrade6Cost", productionUpgrade6Cost.ToString());
        PlayerPrefs.SetString("productionUpgrade7Cost", productionUpgrade7Cost.ToString());
        PlayerPrefs.SetString("productionUpgrade8Cost", productionUpgrade8Cost.ToString());

        PlayerPrefs.SetString("productionUpgrade2Power", productionUpgrade2Power.ToString());
        PlayerPrefs.SetString("productionUpgrade3Power", productionUpgrade3Power.ToString());
        PlayerPrefs.SetString("productionUpgrade4Power", productionUpgrade4Power.ToString());
        PlayerPrefs.SetString("productionUpgrade5Power", productionUpgrade5Power.ToString());
        PlayerPrefs.SetString("productionUpgrade6Power", productionUpgrade6Power.ToString());
        PlayerPrefs.SetString("productionUpgrade7Power", productionUpgrade7Power.ToString());
        PlayerPrefs.SetString("productionUpgrade8Power", productionUpgrade8Power.ToString());

        PlayerPrefs.SetString("clickUpgrade1Level", clickUpgrade1Level.ToString());
        PlayerPrefs.SetString("clickUpgrade2Level", clickUpgrade2Level.ToString());
        PlayerPrefs.SetString("clickUpgrade3Level", clickUpgrade3Level.ToString());
        PlayerPrefs.SetString("clickUpgrade4Level", clickUpgrade4Level.ToString());
        PlayerPrefs.SetString("clickUpgrade5Level", clickUpgrade5Level.ToString());
        PlayerPrefs.SetString("clickUpgrade6Level", clickUpgrade6Level.ToString());
        PlayerPrefs.SetString("clickUpgrade7Level", clickUpgrade7Level.ToString());
        PlayerPrefs.SetString("clickUpgrade8Level", clickUpgrade8Level.ToString());

        PlayerPrefs.SetString("productionUpgrade1Level", productionUpgrade1Level.ToString());
        PlayerPrefs.SetString("productionUpgrade2Level", productionUpgrade2Level.ToString());
        PlayerPrefs.SetString("productionUpgrade3Level", productionUpgrade3Level.ToString());
        PlayerPrefs.SetString("productionUpgrade4Level", productionUpgrade4Level.ToString());
        PlayerPrefs.SetString("productionUpgrade5Level", productionUpgrade5Level.ToString());
        PlayerPrefs.SetString("productionUpgrade6Level", productionUpgrade6Level.ToString());
        PlayerPrefs.SetString("productionUpgrade7Level", productionUpgrade7Level.ToString());
        PlayerPrefs.SetString("productionUpgrade8Level", productionUpgrade8Level.ToString());

    }

    private void Update()
    {
        gemsToGet = 150 * Sqrt(coins / 1e7);
        gemBoost = (gems * 0.05) + 1;

        gemsToGetText.text = "Prestige:\n+" + Floor(gemsToGet).ToString("F0") + " Gems";
        gemsText.text = "Gems: " + Floor(gems).ToString("F0");
        gemBoostText.text = gemBoost.ToString("F2") + "x boost";

        coinsPerSec = (productionUpgrade1Level + (productionUpgrade2Power * productionUpgrade2Level) +
            (productionUpgrade3Power * productionUpgrade3Level) + (productionUpgrade4Power * productionUpgrade4Level) +
            (productionUpgrade5Power * productionUpgrade5Level) + (productionUpgrade6Power * productionUpgrade6Level) +
            (productionUpgrade7Power * productionUpgrade7Level) + (productionUpgrade8Power * productionUpgrade8Level)) * gemBoost + cardUpgrades;

        clickValueText.text = "Click\n+" + NotationMethod(coinsClickValue, y: "F0") + " Coins";
        coinText.text = "Coins: " + NotationMethod(coins, y: "F0");       
        coinPerSecText.text = coinsPerSec.ToString("F0") + " fish/s";

        #region ClickUpgradeText
        string clickUpgrade1CostString;
        clickUpgrade1CostString = NotationMethod(clickUpgrade1Cost, y: "F0");

        string clickUpgrade1LevelString;
        clickUpgrade1LevelString = NotationMethod(clickUpgrade1Level, y: "F0");

        clickUpgrade1Text.text = "Click Upgrade 1\nCost: " + clickUpgrade1CostString + " Fish\nPower: +1 Fish\nLevel: " + clickUpgrade1LevelString;

        string clickUpgrade2CostString;
        clickUpgrade2CostString = NotationMethod(clickUpgrade2Cost, y: "F0");

        string clickUpgrade2LevelString;
        clickUpgrade2LevelString = NotationMethod(clickUpgrade2Level, y: "F0");

        clickUpgrade2Text.text = "Click Upgrade 2\nCost: " + clickUpgrade2CostString + " Fish\nPower: +5 Fish\nLevel: " + clickUpgrade2LevelString;

        string clickUpgrade3CostString;
        clickUpgrade3CostString = NotationMethod(clickUpgrade3Cost, y: "F0");

        string clickUpgrade3LevelString;
        clickUpgrade3LevelString = NotationMethod(clickUpgrade3Level, y: "F0");

        clickUpgrade3Text.text = "Click Upgrade 3\nCost: " + clickUpgrade3CostString + " Fish\nPower: +10 Fish\nLevel: " + clickUpgrade3LevelString;

        string clickUpgrade4CostString;
        clickUpgrade4CostString = NotationMethod(clickUpgrade4Cost, y: "F0");

        string clickUpgrade4LevelString;
        clickUpgrade4LevelString = NotationMethod(clickUpgrade4Level, y: "F0");

        clickUpgrade4Text.text = "Click Upgrade 4\nCost: " + clickUpgrade4CostString + " Fish\nPower: +15 Fish\nLevel: " + clickUpgrade4LevelString;

        string clickUpgrade5CostString;
        clickUpgrade5CostString = NotationMethod(clickUpgrade5Cost, y: "F0");

        string clickUpgrade5LevelString;
        clickUpgrade5LevelString = NotationMethod(clickUpgrade5Level, y: "F0");

        clickUpgrade5Text.text = "Click Upgrade 5\nCost: " + clickUpgrade5CostString + " Fish\nPower: +20 Fish\nLevel: " + clickUpgrade5LevelString;

        string clickUpgrade6CostString;
        clickUpgrade6CostString = NotationMethod(clickUpgrade6Cost, y: "F0");

        string clickUpgrade6LevelString;
        clickUpgrade6LevelString = NotationMethod(clickUpgrade6Level, y: "F0");

        clickUpgrade6Text.text = "Click Upgrade 6\nCost: " + clickUpgrade6CostString + " Fish\nPower: +25 Fish\nLevel: " + clickUpgrade6LevelString;

        string clickUpgrade7CostString;
        clickUpgrade7CostString = NotationMethod(clickUpgrade7Cost, y: "F0");

        string clickUpgrade7LevelString;
        clickUpgrade7LevelString = NotationMethod(clickUpgrade7Level, y: "F0");

        clickUpgrade7Text.text = "Click Upgrade 7\nCost: " + clickUpgrade7CostString + " Fish\nPower: +30 Fish\nLevel: " + clickUpgrade7LevelString;

        string clickUpgrade8CostString;
        clickUpgrade8CostString = NotationMethod(clickUpgrade8Cost, y: "F0");

        string clickUpgrade8LevelString;
        clickUpgrade8LevelString = NotationMethod(clickUpgrade8Level, y: "F0");

        clickUpgrade8Text.text = "Click Upgrade 8\nCost: " + clickUpgrade8CostString + " Fish\nPower: +35 Fish\nLevel: " + clickUpgrade8LevelString;
        #endregion

        #region ProductionUpgradeText
        string productionUpgrade1CostString;
        productionUpgrade1CostString = NotationMethod(productionUpgrade1Cost, y: "F0");

        string productionUpgrade1LevelString;
        productionUpgrade1LevelString = NotationMethod(productionUpgrade1Level, y: "F0");

        productionUpgrade1Text.text = "Production Upgrade 1\nCost: " + productionUpgrade1CostString + " Fish\nPower: +1 Fish\nLevel" + productionUpgrade1LevelString;

        string productionUpgrade2CostString;
        productionUpgrade2CostString = NotationMethod(productionUpgrade2Cost, y: "F0");

        string productionUpgrade2LevelString;
        productionUpgrade2LevelString = NotationMethod(productionUpgrade2Level, y: "F0");

        productionUpgrade2Text.text = "Production Upgrade 2\nCost: " + productionUpgrade2CostString + " Fish\nPower: "+ productionUpgrade2Power * gemBoost + " fish/s\nLevel: "+ productionUpgrade2LevelString;

        string productionUpgrade3CostString;
        productionUpgrade3CostString = NotationMethod(productionUpgrade3Cost, y: "F0");

        string productionUpgrade3LevelString;
        productionUpgrade3LevelString = NotationMethod(productionUpgrade3Level, y: "F0");

        productionUpgrade3Text.text = "Production Upgrade 3\nCost: " + productionUpgrade3CostString + " Fish\nPower: "+ productionUpgrade3Power * gemBoost + " fish/s\nLevel: " + productionUpgrade3LevelString;

        string productionUpgrade4CostString;
        productionUpgrade4CostString = NotationMethod(productionUpgrade4Cost, y: "F0");

        string productionUpgrade4LevelString;
        productionUpgrade4LevelString = NotationMethod(productionUpgrade4Level, y: "F0");

        productionUpgrade4Text.text = "Production Upgrade 4\nCost: " + productionUpgrade4CostString + " Fish\nPower: " + productionUpgrade4Power * gemBoost + " fish/s\nLevel: " + productionUpgrade4LevelString;

        string productionUpgrade5CostString;
        productionUpgrade5CostString = NotationMethod(productionUpgrade5Cost, y: "F0");

        string productionUpgrade5LevelString;
        productionUpgrade5LevelString = NotationMethod(productionUpgrade5Level, y: "F0");

        productionUpgrade5Text.text = "Production Upgrade 5\nCost: " + productionUpgrade5CostString + " Fish\nPower: " + productionUpgrade5Power * gemBoost + " fish/s\nLevel: " + productionUpgrade5LevelString;

        string productionUpgrade6CostString;
        productionUpgrade6CostString = NotationMethod(productionUpgrade6Cost, y: "F0");

        string productionUpgrade6LevelString;
        productionUpgrade6LevelString = NotationMethod(productionUpgrade6Level, y: "F0");

        productionUpgrade6Text.text = "Production Upgrade 6\nCost: " + productionUpgrade6CostString + " Fish\nPower: " + productionUpgrade6Power * gemBoost + " fish/s\nLevel: " + productionUpgrade6LevelString;

        string productionUpgrade7CostString;
        productionUpgrade7CostString = NotationMethod(productionUpgrade7Cost, y: "F0");

        string productionUpgrade7LevelString;
        productionUpgrade7LevelString = NotationMethod(productionUpgrade7Level, y: "F0");

        productionUpgrade7Text.text = "Production Upgrade 7\nCost: " + productionUpgrade7CostString + " Fish\nPower: " + productionUpgrade7Power * gemBoost + " fish/s\nLevel: " + productionUpgrade7LevelString;

        string productionUpgrade8CostString;
        productionUpgrade8CostString = NotationMethod(productionUpgrade8Cost, y: "F0");

        string productionUpgrade8LevelString;
        productionUpgrade8LevelString = NotationMethod(productionUpgrade8Level, y: "F0");

        productionUpgrade8Text.text = "Production Upgrade 8\nCost: " + productionUpgrade8CostString + " Fish\nPower: " + productionUpgrade8Power * gemBoost + " fish/s\nLevel: " + productionUpgrade8LevelString;
        #endregion

        coins += coinsPerSec * Time.deltaTime;

        Save();
    }

    public string NotationMethod(BigDouble x, string y)
    {
        if (x > 1000)
        {
            var exponent = Floor(Log10(Abs(x)));
            var mantissa = x / Pow(10, exponent);
            return mantissa.ToString(format: "F2") + "e" + exponent;
            
        }
        return x.ToString(y);

    }

    public void BuyUpgrade(string upgradeID)
    {
        switch (upgradeID)
        {
            case "P1":
                if (coins >= productionUpgrade1Cost)
                {
                    productionUpgrade1Level++;
                    coins -= productionUpgrade1Cost;
                    productionUpgrade1Cost *= 1.07;
                }
                break;
            case "P2":
                if (coins >= productionUpgrade2Cost)
                {
                    productionUpgrade2Level++;
                    coins -= productionUpgrade2Cost;
                    productionUpgrade2Cost *= 1.09;
                }
                break;
            case "P3":
                if (coins >= productionUpgrade3Cost)
                {
                    productionUpgrade3Level++;
                    coins -= productionUpgrade3Cost;
                    productionUpgrade3Cost *= 2.03;
                }
                break;
            case "P4":
                if (coins >= productionUpgrade4Cost)
                {
                    productionUpgrade4Level++;
                    coins -= productionUpgrade4Cost;
                    productionUpgrade4Cost *= 2.06;
                }
                break;
            case "P5":
                if (coins >= productionUpgrade5Cost)
                {
                    productionUpgrade5Level++;
                    coins -= productionUpgrade5Cost;
                    productionUpgrade5Cost *= 2.09;
                }
                break;
            case "P6":
                if (coins >= productionUpgrade6Cost)
                {
                    productionUpgrade6Level++;
                    coins -= productionUpgrade6Cost;
                    productionUpgrade6Cost *= 3.03;
                }
                break;
            case "P7":
                if (coins >= productionUpgrade7Cost)
                {
                    productionUpgrade7Level++;
                    coins -= productionUpgrade7Cost;
                    productionUpgrade7Cost *= 3.06;
                }
                break;
            case "P8":
                if (coins >= productionUpgrade8Cost)
                {
                    productionUpgrade8Level++;
                    coins -= productionUpgrade8Cost;
                    productionUpgrade8Cost *= 3.09;
                }
                break;
            case "C1":
                if (coins >= clickUpgrade1Cost)
                {
                    clickUpgrade1Level++;
                    coins -= clickUpgrade1Cost;
                    clickUpgrade1Cost *= 1.07;
                    coinsClickValue++;
                }
                break;
            case "C2":
                if (coins >= clickUpgrade2Cost)
                {
                    clickUpgrade2Level++;
                    coins -= clickUpgrade2Cost;
                    clickUpgrade2Cost *= 1.09;
                    coinsClickValue += 5;
                }
                break;
            case "C3":
                if (coins >= clickUpgrade3Cost)
                {
                    clickUpgrade3Level++;
                    coins -= clickUpgrade3Cost;
                    clickUpgrade3Cost *= 2.03;
                    coinsClickValue += 10;
                }
                break;
            case "C4":
                if (coins >= clickUpgrade3Cost)
                {
                    clickUpgrade4Level++;
                    coins -= clickUpgrade4Cost;
                    clickUpgrade4Cost *= 2.06;
                    coinsClickValue += 15;
                }
                break;
            case "C5":
                if (coins >= clickUpgrade5Cost)
                {
                    clickUpgrade5Level++;
                    coins -= clickUpgrade5Cost;
                    clickUpgrade5Cost *= 2.09;
                    coinsClickValue += 20;
                }
                break;
            case "C6":
                if (coins >= clickUpgrade6Cost)
                {
                    clickUpgrade6Level++;
                    coins -= clickUpgrade6Cost;
                    clickUpgrade6Cost *= 3.03;
                    coinsClickValue += 25;
                }
                break;
            case "C7":
                if (coins >= clickUpgrade7Cost)
                {
                    clickUpgrade7Level++;
                    coins -= clickUpgrade7Cost;
                    clickUpgrade7Cost *= 3.06;
                    coinsClickValue += 30;
                }
                break;
            case "C8":
                if (coins >= clickUpgrade8Cost)
                {
                    clickUpgrade8Level++;
                    coins -= clickUpgrade8Cost;
                    clickUpgrade8Cost *= 3.09;
                    coinsClickValue += 35;
                }
                break;
        }
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

            clickUpgrade1Level = 0;
            clickUpgrade2Level = 0;
            clickUpgrade3Level = 0;
            clickUpgrade4Level = 0;
            clickUpgrade5Level = 0;
            clickUpgrade6Level = 0;
            clickUpgrade7Level = 0;
            clickUpgrade8Level = 0;

            productionUpgrade1Level = 0;
            productionUpgrade2Level = 0;
            productionUpgrade3Level = 0;
            productionUpgrade4Level = 0;
            productionUpgrade5Level = 0;
            productionUpgrade6Level = 0;
            productionUpgrade7Level = 0;
            productionUpgrade8Level = 0;

            gems += gemsToGet;
        }
    }

    public void OpenUpgradeMenu()
    {
        upgradeMenu.SetActive(!upgradeMenu.activeSelf);
    }    
}

