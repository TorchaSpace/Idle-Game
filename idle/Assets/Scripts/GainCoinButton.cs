using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using BreakInfinity;
using static BreakInfinity.BigDouble;

public class GainCoinButton : MonoBehaviour, IDataPersistence
{
    public GameObject upgradeMenu;

    public HealthAndPriates healthAndPriates;
    public SellFish sellFish;
    public DefencePowerController defencePowerController;
    public SoldierCountScript soldierCountScript;

    public bool isSailed = false;
    public GameObject pauseButton;
    public GameObject goButton;
    public Animator paddeling;
    public Animator küçüktekne;

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
    public BigDouble productionUpgrade2Power = 5;
    public BigDouble productionUpgrade2Level;

    public BigDouble productionUpgrade3Cost;
    public BigDouble productionUpgrade3Power = 10;
    public BigDouble productionUpgrade3Level;

    public BigDouble productionUpgrade4Cost;
    public BigDouble productionUpgrade4Power = 15;
    public BigDouble productionUpgrade4Level;

    public BigDouble productionUpgrade5Cost;
    public BigDouble productionUpgrade5Power = 20;
    public BigDouble productionUpgrade5Level;

    public BigDouble productionUpgrade6Cost;
    public BigDouble productionUpgrade6Power = 25;
    public BigDouble productionUpgrade6Level;

    public BigDouble productionUpgrade7Cost;
    public BigDouble productionUpgrade7Power = 30;
    public BigDouble productionUpgrade7Level;

    public BigDouble productionUpgrade8Cost;
    public BigDouble productionUpgrade8Power = 35;
    public BigDouble productionUpgrade8Level;

    public BigDouble coins;
    public BigDouble coinsClickValue;

    public BigDouble coinsPerSec;

    public static BigDouble cardUpgrades = 0;

    public BigDouble gems;
    public BigDouble gemBoost;
    public BigDouble gemsToGet;

    public void PauseButton()
    {
        isSailed = false;
        pauseButton.SetActive(false);
        goButton.SetActive(true);
    }

    public void GoButton()
    {
        isSailed = true;
        pauseButton.SetActive(true);
        goButton.SetActive(false);
    }

    private void Start()
    {
        productionUpgrade2Power = 5;
        productionUpgrade3Power = 10;
        productionUpgrade4Power = 15;
        productionUpgrade5Power = 20;
        productionUpgrade6Power = 25;
        productionUpgrade7Power = 30;
        productionUpgrade8Power = 35;
    }

    public void LoadData(GameData data)
    {
        this.coins = data.fish;
        this.coinsClickValue = data.coinsClickValue;
        this.coinsPerSec = data.coinsPerSec;
        cardUpgrades = data.cardUpgrades;

        this.gems = data.gems;
        this.gemBoost = data.gemBoost;

        this.productionUpgrade1Cost = data.productionUpgrade1Cost;
        this.productionUpgrade2Cost = data.productionUpgrade2Cost;
        this.productionUpgrade3Cost = data.productionUpgrade3Cost;
        this.productionUpgrade4Cost = data.productionUpgrade4Cost;
        this.productionUpgrade5Cost = data.productionUpgrade5Cost;
        this.productionUpgrade6Cost = data.productionUpgrade6Cost;
        this.productionUpgrade7Cost = data.productionUpgrade7Cost;
        this.productionUpgrade8Cost = data.productionUpgrade8Cost;

        this.productionUpgrade1Level = data.productionUpgrade1Level;
        this.productionUpgrade2Level = data.productionUpgrade2Level;
        this.productionUpgrade3Level = data.productionUpgrade3Level;
        this.productionUpgrade4Level = data.productionUpgrade4Level;
        this.productionUpgrade5Level = data.productionUpgrade5Level;
        this.productionUpgrade6Level = data.productionUpgrade6Level;
        this.productionUpgrade7Level = data.productionUpgrade7Level;
        this.productionUpgrade8Level = data.productionUpgrade8Level;

        this.productionUpgrade2Power = data.productionUpgrade2Power;
        this.productionUpgrade3Power = data.productionUpgrade3Power;
        this.productionUpgrade4Power = data.productionUpgrade4Power;
        this.productionUpgrade5Power = data.productionUpgrade5Power;
        this.productionUpgrade6Power = data.productionUpgrade6Power;
        this.productionUpgrade7Power = data.productionUpgrade7Power;
        this.productionUpgrade8Power = data.productionUpgrade8Power;

        this.clickUpgrade1Level = data.clickUpgrade1Level;
        this.clickUpgrade2Level = data.clickUpgrade2Level;
        this.clickUpgrade3Level = data.clickUpgrade3Level;
        this.clickUpgrade4Level = data.clickUpgrade4Level;
        this.clickUpgrade5Level = data.clickUpgrade5Level;
        this.clickUpgrade6Level = data.clickUpgrade6Level;
        this.clickUpgrade7Level = data.clickUpgrade7Level;
        this.clickUpgrade8Level = data.clickUpgrade8Level;

        this.clickUpgrade1Cost = data.clickUpgrade1Cost;
        this.clickUpgrade2Cost = data.clickUpgrade2Cost;
        this.clickUpgrade3Cost = data.clickUpgrade3Cost;
        this.clickUpgrade4Cost = data.clickUpgrade4Cost;
        this.clickUpgrade5Cost = data.clickUpgrade5Cost;
        this.clickUpgrade6Cost = data.clickUpgrade6Cost;
        this.clickUpgrade7Cost = data.clickUpgrade7Cost;
        this.clickUpgrade8Cost = data.clickUpgrade8Cost;

    }
    

    public void SaveData(ref GameData data)
    {
        data.fish = this.coins;
        data.coinsClickValue = this.coinsClickValue;
        data.coinsPerSec = this.coinsPerSec;
        data.cardUpgrades = cardUpgrades;

        data.gems = this.gems;
        data.gemBoost = this.gemBoost;

        data.productionUpgrade1Cost = this.productionUpgrade1Cost;
        data.productionUpgrade2Cost = this.productionUpgrade2Cost;
        data.productionUpgrade3Cost = this.productionUpgrade3Cost;
        data.productionUpgrade4Cost = this.productionUpgrade4Cost;
        data.productionUpgrade5Cost = this.productionUpgrade5Cost;
        data.productionUpgrade6Cost = this.productionUpgrade6Cost;
        data.productionUpgrade7Cost = this.productionUpgrade7Cost;
        data.productionUpgrade8Cost = this.productionUpgrade8Cost;

        data.productionUpgrade1Level = this.productionUpgrade1Level;
        data.productionUpgrade2Level = this.productionUpgrade2Level;
        data.productionUpgrade3Level = this.productionUpgrade3Level;
        data.productionUpgrade4Level = this.productionUpgrade4Level;
        data.productionUpgrade5Level = this.productionUpgrade5Level;
        data.productionUpgrade6Level = this.productionUpgrade6Level;
        data.productionUpgrade7Level = this.productionUpgrade7Level;
        data.productionUpgrade8Level = this.productionUpgrade8Level;

        data.productionUpgrade2Power = this.productionUpgrade2Power;
        data.productionUpgrade3Power = this.productionUpgrade3Power;
        data.productionUpgrade4Power = this.productionUpgrade4Power;
        data.productionUpgrade5Power = this.productionUpgrade5Power;
        data.productionUpgrade6Power = this.productionUpgrade6Power;
        data.productionUpgrade7Power = this.productionUpgrade7Power;
        data.productionUpgrade8Power = this.productionUpgrade8Power;

        data.clickUpgrade1Level = this.clickUpgrade1Level;
        data.clickUpgrade2Level = this.clickUpgrade2Level;
        data.clickUpgrade3Level = this.clickUpgrade3Level;
        data.clickUpgrade4Level = this.clickUpgrade4Level;
        data.clickUpgrade5Level = this.clickUpgrade5Level;
        data.clickUpgrade6Level = this.clickUpgrade6Level;
        data.clickUpgrade7Level = this.clickUpgrade7Level;
        data.clickUpgrade8Level = this.clickUpgrade8Level;

        data.clickUpgrade1Cost = this.clickUpgrade1Cost;
        data.clickUpgrade2Cost = this.clickUpgrade2Cost;
        data.clickUpgrade3Cost = this.clickUpgrade3Cost;
        data.clickUpgrade4Cost = this.clickUpgrade4Cost;
        data.clickUpgrade5Cost = this.clickUpgrade5Cost;
        data.clickUpgrade6Cost = this.clickUpgrade6Cost;
        data.clickUpgrade7Cost = this.clickUpgrade7Cost;
        data.clickUpgrade8Cost = this.clickUpgrade8Cost;
    }

    private void Update()
    {
        gemsToGet = 150 * Sqrt(coins / 1e7);
        gemBoost = (gems * 0.05) + 1;

        gemsToGetText.text = "Prestige:\n+" + Floor(gemsToGet).ToString("F0") + " Gems";
        gemsText.text = Floor(gems).ToString("F0");
        gemBoostText.text = gemBoost.ToString("F2") + "x boost";

        if (isSailed)
        {
            coinsPerSec = (productionUpgrade1Level + (productionUpgrade2Power * productionUpgrade2Level) +
            (productionUpgrade3Power * productionUpgrade3Level) + (productionUpgrade4Power * productionUpgrade4Level) +
            (productionUpgrade5Power * productionUpgrade5Level) + (productionUpgrade6Power * productionUpgrade6Level) +
            (productionUpgrade7Power * productionUpgrade7Level) + (productionUpgrade8Power * productionUpgrade8Level)) * gemBoost + cardUpgrades;

            paddeling.enabled = true;
            küçüktekne.enabled = true;
        }
        else
        {
            coinsPerSec = 0;
            paddeling.enabled = false;
            küçüktekne.enabled = false;
        }

        clickValueText.text = "+" + NotationMethod(coinsClickValue, y: "F0") + " Click";
        coinText.text = NotationMethod(coins, y: "F0");       
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

        productionUpgrade2Text.text = "Production Upgrade 2\nCost: " + productionUpgrade2CostString + " Fish\nPower: "+ (productionUpgrade2Power * gemBoost).ToString("F0") + " fish/s\nLevel: "+ productionUpgrade2LevelString;

        string productionUpgrade3CostString;
        productionUpgrade3CostString = NotationMethod(productionUpgrade3Cost, y: "F0");

        string productionUpgrade3LevelString;
        productionUpgrade3LevelString = NotationMethod(productionUpgrade3Level, y: "F0");

        productionUpgrade3Text.text = "Production Upgrade 3\nCost: " + productionUpgrade3CostString + " Fish\nPower: "+ (productionUpgrade3Power * gemBoost).ToString("F0") + " fish/s\nLevel: " + productionUpgrade3LevelString;

        string productionUpgrade4CostString;
        productionUpgrade4CostString = NotationMethod(productionUpgrade4Cost, y: "F0");

        string productionUpgrade4LevelString;
        productionUpgrade4LevelString = NotationMethod(productionUpgrade4Level, y: "F0");

        productionUpgrade4Text.text = "Production Upgrade 4\nCost: " + productionUpgrade4CostString + " Fish\nPower: " + (productionUpgrade4Power * gemBoost).ToString("F0") + " fish/s\nLevel: " + productionUpgrade4LevelString;

        string productionUpgrade5CostString;
        productionUpgrade5CostString = NotationMethod(productionUpgrade5Cost, y: "F0");

        string productionUpgrade5LevelString;
        productionUpgrade5LevelString = NotationMethod(productionUpgrade5Level, y: "F0");

        productionUpgrade5Text.text = "Production Upgrade 5\nCost: " + productionUpgrade5CostString + " Fish\nPower: " + (productionUpgrade5Power * gemBoost).ToString("F0") + " fish/s\nLevel: " + productionUpgrade5LevelString;

        string productionUpgrade6CostString;
        productionUpgrade6CostString = NotationMethod(productionUpgrade6Cost, y: "F0");

        string productionUpgrade6LevelString;
        productionUpgrade6LevelString = NotationMethod(productionUpgrade6Level, y: "F0");

        productionUpgrade6Text.text = "Production Upgrade 6\nCost: " + productionUpgrade6CostString + " Fish\nPower: " + (productionUpgrade6Power * gemBoost).ToString("F0") + " fish/s\nLevel: " + productionUpgrade6LevelString;

        string productionUpgrade7CostString;
        productionUpgrade7CostString = NotationMethod(productionUpgrade7Cost, y: "F0");

        string productionUpgrade7LevelString;
        productionUpgrade7LevelString = NotationMethod(productionUpgrade7Level, y: "F0");

        productionUpgrade7Text.text = "Production Upgrade 7\nCost: " + productionUpgrade7CostString + " Fish\nPower: " + (productionUpgrade7Power * gemBoost).ToString("F0") + " fish/s\nLevel: " + productionUpgrade7LevelString;

        string productionUpgrade8CostString;
        productionUpgrade8CostString = NotationMethod(productionUpgrade8Cost, y: "F0");

        string productionUpgrade8LevelString;
        productionUpgrade8LevelString = NotationMethod(productionUpgrade8Level, y: "F0");

        productionUpgrade8Text.text = "Production Upgrade 8\nCost: " + productionUpgrade8CostString + " Fish\nPower: " + (productionUpgrade8Power * gemBoost).ToString("F0") + " fish/s\nLevel: " + productionUpgrade8LevelString;
        #endregion

        coins += coinsPerSec * Time.deltaTime;

    
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
            coinsPerSec = 0;

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

            defencePowerController.defenceUpgrade1Level = 0;
            defencePowerController.defenceUpgrade2Level = 0;
            defencePowerController.defenceUpgrade3Level = 0;
            defencePowerController.defenceUpgrade4Level = 0;
            defencePowerController.defenceUpgrade5Level = 0;
            defencePowerController.defenceUpgrade6Level = 0;
            defencePowerController.defenceUpgrade7Level = 0;
            defencePowerController.defenceUpgrade8Level = 0;

            defencePowerController.defenceUpgrade1Cost = 100;
            defencePowerController.defenceUpgrade2Cost = 200;
            defencePowerController.defenceUpgrade3Cost = 300;
            defencePowerController.defenceUpgrade4Cost = 400;
            defencePowerController.defenceUpgrade5Cost = 500;
            defencePowerController.defenceUpgrade6Cost = 600;
            defencePowerController.defenceUpgrade7Cost = 700;
            defencePowerController.defenceUpgrade8Cost = 800;

            soldierCountScript.soldierUpgrade1Level = 0;
            soldierCountScript.soldierUpgrade2Level = 0;
            soldierCountScript.soldierUpgrade3Level = 0;
            soldierCountScript.soldierUpgrade4Level = 0;
            soldierCountScript.soldierUpgrade5Level = 0;
            soldierCountScript.soldierUpgrade6Level = 0;
            soldierCountScript.soldierUpgrade7Level = 0;
            soldierCountScript.soldierUpgrade8Level = 0;

            soldierCountScript.soldierUpgrade1Cost = 500;
            soldierCountScript.soldierUpgrade2Cost = 1000;
            soldierCountScript.soldierUpgrade3Cost = 1500;
            soldierCountScript.soldierUpgrade4Cost = 2000;
            soldierCountScript.soldierUpgrade5Cost = 2500;
            soldierCountScript.soldierUpgrade6Cost = 3000;
            soldierCountScript.soldierUpgrade7Cost = 3500;
            soldierCountScript.soldierUpgrade8Cost = 4000;

            sellFish.gainedCoin = 0;

            gems += gemsToGet;
        }
    }

    public void FullReset()
    {
        gemBoost = 1;

        gems = 0;

        coins = 0;
        coinsClickValue = 1;
        coinsPerSec = 0;
        cardUpgrades = 0;

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

        healthAndPriates.reducedPower = 0;
        healthAndPriates.GuardCount = 1;
        healthAndPriates.defencePower = 1;
        healthAndPriates.takenMoney = 5000;

        sellFish.gainedCoin = 0;

        defencePowerController.defenceUpgrade1Level = 0;
        defencePowerController.defenceUpgrade2Level = 0;
        defencePowerController.defenceUpgrade3Level = 0;
        defencePowerController.defenceUpgrade4Level = 0;
        defencePowerController.defenceUpgrade5Level = 0;
        defencePowerController.defenceUpgrade6Level = 0;
        defencePowerController.defenceUpgrade7Level = 0;
        defencePowerController.defenceUpgrade8Level = 0;

        defencePowerController.defenceUpgrade1Cost = 100;
        defencePowerController.defenceUpgrade2Cost = 200;
        defencePowerController.defenceUpgrade3Cost = 300;
        defencePowerController.defenceUpgrade4Cost = 400;
        defencePowerController.defenceUpgrade5Cost = 500;
        defencePowerController.defenceUpgrade6Cost = 600;
        defencePowerController.defenceUpgrade7Cost = 700;
        defencePowerController.defenceUpgrade8Cost = 800;

        soldierCountScript.soldierUpgrade1Level = 0;
        soldierCountScript.soldierUpgrade2Level = 0;
        soldierCountScript.soldierUpgrade3Level = 0;
        soldierCountScript.soldierUpgrade4Level = 0;
        soldierCountScript.soldierUpgrade5Level = 0;
        soldierCountScript.soldierUpgrade6Level = 0;
        soldierCountScript.soldierUpgrade7Level = 0;
        soldierCountScript.soldierUpgrade8Level = 0;

        soldierCountScript.soldierUpgrade1Cost = 500;
        soldierCountScript.soldierUpgrade2Cost = 1000;
        soldierCountScript.soldierUpgrade3Cost = 1500;
        soldierCountScript.soldierUpgrade4Cost = 2000;
        soldierCountScript.soldierUpgrade5Cost = 2500;
        soldierCountScript.soldierUpgrade6Cost = 3000;
        soldierCountScript.soldierUpgrade7Cost = 3500;
        soldierCountScript.soldierUpgrade8Cost = 4000;

        healthAndPriates.health = 3;
    }

    public void OpenUpgradeMenu()
    {
        upgradeMenu.SetActive(!upgradeMenu.activeSelf);
    }
}

