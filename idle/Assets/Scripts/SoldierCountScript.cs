using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using BreakInfinity;
using static BreakInfinity.BigDouble;

public class SoldierCountScript : MonoBehaviour, IDataPersistence
{
    [Header("UI")]
    public Text soldierPower1Text;
    public Text soldierPower2Text;
    public Text soldierPower3Text;
    public Text soldierPower4Text;
    public Text soldierPower5Text;
    public Text soldierPower6Text;
    public Text soldierPower7Text;
    public Text soldierPower8Text;

    [Header("Defaults")]
    public SellFish sellFish;
    public HealthAndPriates healthAndPriates;

    [Header("Soldier Upgrade")]
    public BigDouble soldierUpgrade1Cost;
    public BigDouble soldierUpgrade1Level;

    public BigDouble soldierUpgrade2Cost;
    public BigDouble soldierUpgrade2Level;

    public BigDouble soldierUpgrade3Cost;
    public BigDouble soldierUpgrade3Level;

    public BigDouble soldierUpgrade4Cost;
    public BigDouble soldierUpgrade4Level;

    public BigDouble soldierUpgrade5Cost;
    public BigDouble soldierUpgrade5Level;

    public BigDouble soldierUpgrade6Cost;
    public BigDouble soldierUpgrade6Level;

    public BigDouble soldierUpgrade7Cost;
    public BigDouble soldierUpgrade7Level;

    public BigDouble soldierUpgrade8Cost;
    public BigDouble soldierUpgrade8Level;

    public void LoadData(GameData data)
    {
        this.soldierUpgrade1Cost = data.soldierUpgrade1Cost;
        this.soldierUpgrade2Cost = data.soldierUpgrade2Cost;
        this.soldierUpgrade3Cost = data.soldierUpgrade3Cost;
        this.soldierUpgrade4Cost = data.soldierUpgrade4Cost;
        this.soldierUpgrade5Cost = data.soldierUpgrade5Cost;
        this.soldierUpgrade6Cost = data.soldierUpgrade6Cost;
        this.soldierUpgrade7Cost = data.soldierUpgrade7Cost;
        this.soldierUpgrade8Cost = data.soldierUpgrade8Cost;

        this.soldierUpgrade1Level = data.soldierUpgrade1Level;
        this.soldierUpgrade2Level = data.soldierUpgrade2Level;
        this.soldierUpgrade3Level = data.soldierUpgrade3Level;
        this.soldierUpgrade4Level = data.soldierUpgrade4Level;
        this.soldierUpgrade5Level = data.soldierUpgrade5Level;
        this.soldierUpgrade6Level = data.soldierUpgrade6Level;
        this.soldierUpgrade7Level = data.soldierUpgrade7Level;
        this.soldierUpgrade8Level = data.soldierUpgrade8Level;
    }

    public void SaveData(ref GameData data)
    {
        data.soldierUpgrade1Cost = this.soldierUpgrade1Cost;
        data.soldierUpgrade2Cost = this.soldierUpgrade2Cost;
        data.soldierUpgrade3Cost = this.soldierUpgrade3Cost;
        data.soldierUpgrade4Cost = this.soldierUpgrade4Cost;
        data.soldierUpgrade5Cost = this.soldierUpgrade5Cost;
        data.soldierUpgrade6Cost = this.soldierUpgrade6Cost;
        data.soldierUpgrade7Cost = this.soldierUpgrade7Cost;
        data.soldierUpgrade8Cost = this.soldierUpgrade8Cost;

        data.soldierUpgrade1Level = this.soldierUpgrade1Level;
        data.soldierUpgrade2Level = this.soldierUpgrade2Level;
        data.soldierUpgrade3Level = this.soldierUpgrade3Level;
        data.soldierUpgrade4Level = this.soldierUpgrade4Level;
        data.soldierUpgrade5Level = this.soldierUpgrade5Level;
        data.soldierUpgrade6Level = this.soldierUpgrade6Level;
        data.soldierUpgrade7Level = this.soldierUpgrade7Level;
        data.soldierUpgrade8Level = this.soldierUpgrade8Level;
    }

    private void Update()
    {
        if (healthAndPriates.GuardCount < 100)
        {
            soldierPower1Text.text = "Add Soldier 1\nCost: " + soldierUpgrade1Cost.ToString("F0") + " Coin\nPower: +1 Soldier\nLevel: " + soldierUpgrade1Level;
        }
        else
        {
            soldierPower1Text.text = "MAX";
        }

        if (healthAndPriates.GuardCount < 100)
        {
            soldierPower2Text.text = "Add Soldier 2\nCost: " + soldierUpgrade2Cost.ToString("F0") + " Coin\nPower: +2 Soldier\nLevel: " + soldierUpgrade2Level;
        }
        else
        {
            soldierPower2Text.text = "MAX";
        }

        if (healthAndPriates.GuardCount < 100)
        {
            soldierPower3Text.text = "Add Soldier 3\nCost: " + soldierUpgrade3Cost.ToString("F0") + " Coin\nPower: +3 Soldier\nLevel: " + soldierUpgrade3Level;
        }
        else
        {
            soldierPower3Text.text = "MAX";
        }

        if (healthAndPriates.GuardCount < 100)
        {
            soldierPower4Text.text = "Add Soldier 4\nCost: " + soldierUpgrade4Cost.ToString("F0") + " Coin\nPower: +4 Soldier\nLevel: " + soldierUpgrade4Level;
        }
        else
        {
            soldierPower4Text.text = "MAX";
        }

        if (healthAndPriates.GuardCount < 100)
        {
            soldierPower5Text.text = "Add Soldier 5\nCost: " + soldierUpgrade5Cost.ToString("F0") + " Coin\nPower: +5 Soldier\nLevel: " + soldierUpgrade5Level;
        }
        else
        {
            soldierPower5Text.text = "MAX";
        }

        if (healthAndPriates.GuardCount < 100)
        {
            soldierPower6Text.text = "Add Soldier 6\nCost: " + soldierUpgrade6Cost.ToString("F0") + " Coin\nPower: +6 Soldier\nLevel: " + soldierUpgrade6Level;
        }
        else
        {
            soldierPower6Text.text = "MAX";
        }

        if (healthAndPriates.GuardCount < 100)
        {
            soldierPower7Text.text = "Add Soldier 7\nCost: " + soldierUpgrade7Cost.ToString("F0") + " Coin\nPower: +7 Soldier\nLevel: " + soldierUpgrade7Level;
        }
        else
        {
            soldierPower7Text.text = "MAX";
        }

        if (healthAndPriates.GuardCount < 100)
        {
            soldierPower8Text.text = "Add Soldier 8\nCost: " + soldierUpgrade8Cost.ToString("F0") + " Coin\nPower: +8 Soldier\nLevel: " + soldierUpgrade8Level;
        }
        else
        {
            soldierPower8Text.text = "MAX";
        }
    }

    public void BuyUpgrade(string upgradeID)
    {
        switch (upgradeID)
        {
            case "S1":
                if (sellFish.gainedCoin >= soldierUpgrade1Cost && healthAndPriates.GuardCount < 100)
                {
                    soldierUpgrade1Level++;
                    sellFish.gainedCoin -= soldierUpgrade1Cost;
                    healthAndPriates.GuardCount += 1;
                    soldierUpgrade1Cost *= 1.09;
                }
                break;
            case "S2":
                if (sellFish.gainedCoin >= soldierUpgrade2Cost && healthAndPriates.GuardCount < 100)
                {
                    soldierUpgrade2Level++;
                    sellFish.gainedCoin -= soldierUpgrade2Cost;
                    healthAndPriates.GuardCount += 2;
                }
                break;
            case "S3":
                if (sellFish.gainedCoin >= soldierUpgrade3Cost && healthAndPriates.GuardCount < 100)
                {
                    soldierUpgrade3Level++;
                    sellFish.gainedCoin -= soldierUpgrade3Cost;
                    healthAndPriates.GuardCount += 3;
                    soldierUpgrade3Cost *= 2.06;
                }
                break;
            case "S4":
                if (sellFish.gainedCoin >= soldierUpgrade4Cost && healthAndPriates.GuardCount < 100)
                {
                    soldierUpgrade4Level++;
                    sellFish.gainedCoin -= soldierUpgrade4Cost;
                    healthAndPriates.GuardCount += 4;
                    soldierUpgrade4Cost *= 2.09;
                }
                break;
            case "S5":
                if (sellFish.gainedCoin >= soldierUpgrade5Cost && healthAndPriates.GuardCount < 100)
                {
                    soldierUpgrade5Level++;
                    sellFish.gainedCoin -= soldierUpgrade5Cost;
                    healthAndPriates.GuardCount += 5;
                    soldierUpgrade5Cost *= 3.03;
                }
                break;
            case "S6":
                if (sellFish.gainedCoin >= soldierUpgrade6Cost && healthAndPriates.GuardCount < 100)
                {
                    soldierUpgrade6Level++;
                    sellFish.gainedCoin -= soldierUpgrade6Cost;
                    healthAndPriates.GuardCount += 6;
                    soldierUpgrade6Cost *= 3.06;
                }
                break;
            case "S7":
                if (sellFish.gainedCoin >= soldierUpgrade7Cost && healthAndPriates.GuardCount < 100)
                {
                    soldierUpgrade7Level++;
                    sellFish.gainedCoin -= soldierUpgrade7Cost;
                    healthAndPriates.GuardCount += 7;
                    soldierUpgrade7Cost *= 3.09;
                }
                break;
            case "S8":
                if (sellFish.gainedCoin >= soldierUpgrade8Cost && healthAndPriates.GuardCount < 100)
                {
                    soldierUpgrade8Level++;
                    sellFish.gainedCoin -= soldierUpgrade8Cost;
                    healthAndPriates.GuardCount += 8;
                    soldierUpgrade8Cost *= 4.03;
                }
                break;
        }
    }

}
