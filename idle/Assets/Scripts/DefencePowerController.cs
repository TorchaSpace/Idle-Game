using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using BreakInfinity;
using static BreakInfinity.BigDouble;

public class DefencePowerController : MonoBehaviour, IDataPersistence
{
    [Header("UI")]
    public Text DefencePower1Text;
    public Text DefencePower2Text;
    public Text DefencePower3Text;
    public Text DefencePower4Text;
    public Text DefencePower5Text;
    public Text DefencePower6Text;
    public Text DefencePower7Text;
    public Text DefencePower8Text;

    [Header("Defaults")]
    public SellFish sellFish;
    public HealthAndPriates healthAndPriates;

    [Header("Defence Upgrade")]
    public BigDouble defenceUpgrade1Cost;
    public BigDouble defenceUpgrade1Level;

    public BigDouble defenceUpgrade2Cost;
    public BigDouble defenceUpgrade2Level;

    public BigDouble defenceUpgrade3Cost;
    public BigDouble defenceUpgrade3Level;

    public BigDouble defenceUpgrade4Cost;
    public BigDouble defenceUpgrade4Level;

    public BigDouble defenceUpgrade5Cost;
    public BigDouble defenceUpgrade5Level;

    public BigDouble defenceUpgrade6Cost;
    public BigDouble defenceUpgrade6Level;

    public BigDouble defenceUpgrade7Cost;
    public BigDouble defenceUpgrade7Level;

    public BigDouble defenceUpgrade8Cost;
    public BigDouble defenceUpgrade8Level;


    public void LoadData(GameData data)
    {
        this.defenceUpgrade1Cost = data.defenceUpgrade1Cost;
        this.defenceUpgrade2Cost = data.defenceUpgrade2Cost;
        this.defenceUpgrade3Cost = data.defenceUpgrade3Cost;
        this.defenceUpgrade4Cost = data.defenceUpgrade4Cost;
        this.defenceUpgrade5Cost = data.defenceUpgrade5Cost;
        this.defenceUpgrade6Cost = data.defenceUpgrade6Cost;
        this.defenceUpgrade7Cost = data.defenceUpgrade7Cost;
        this.defenceUpgrade8Cost = data.defenceUpgrade8Cost;

        this.defenceUpgrade1Level = data.defenceUpgrade1Level;
        this.defenceUpgrade2Level = data.defenceUpgrade2Level;
        this.defenceUpgrade3Level = data.defenceUpgrade3Level;
        this.defenceUpgrade4Level = data.defenceUpgrade4Level;
        this.defenceUpgrade5Level = data.defenceUpgrade5Level;
        this.defenceUpgrade6Level = data.defenceUpgrade6Level;
        this.defenceUpgrade7Level = data.defenceUpgrade7Level;
        this.defenceUpgrade8Level = data.defenceUpgrade8Level;
    }

    public void SaveData(ref GameData data)
    {
        data.defenceUpgrade1Cost = this.defenceUpgrade1Cost;
        data.defenceUpgrade2Cost = this.defenceUpgrade2Cost;
        data.defenceUpgrade3Cost = this.defenceUpgrade3Cost;
        data.defenceUpgrade4Cost = this.defenceUpgrade4Cost;
        data.defenceUpgrade5Cost = this.defenceUpgrade5Cost;
        data.defenceUpgrade6Cost = this.defenceUpgrade6Cost;
        data.defenceUpgrade7Cost = this.defenceUpgrade7Cost;
        data.defenceUpgrade8Cost = this.defenceUpgrade8Cost;

        data.defenceUpgrade1Level = this.defenceUpgrade1Level;
        data.defenceUpgrade2Level = this.defenceUpgrade2Level;
        data.defenceUpgrade3Level = this.defenceUpgrade3Level;
        data.defenceUpgrade4Level = this.defenceUpgrade4Level;
        data.defenceUpgrade5Level = this.defenceUpgrade5Level;
        data.defenceUpgrade6Level = this.defenceUpgrade6Level;
        data.defenceUpgrade7Level = this.defenceUpgrade7Level;
        data.defenceUpgrade8Level = this.defenceUpgrade8Level;
    }

    private void Update()
    {
        if(healthAndPriates.defencePower < 500)
        {
            DefencePower1Text.text = "Defence Upgrade 1\nCost: " + defenceUpgrade1Cost + " Coin\nPower: +1 Defence Power\nLevel: " + defenceUpgrade1Level;
        }
        else
        {
            DefencePower1Text.text = "MAX";
        }

        if (healthAndPriates.defencePower < 500)
        {
            DefencePower2Text.text = "Defence Upgrade 2\nCost: " + defenceUpgrade2Cost + " Coin\nPower: +2 Defence Power\nLevel: " + defenceUpgrade2Level;
        }
        else
        {
            DefencePower2Text.text = "MAX";
        }

        if (healthAndPriates.defencePower < 500)
        {
            DefencePower3Text.text = "Defence Upgrade 3\nCost: " + defenceUpgrade3Cost + " Coin\nPower: +3 Defence Power\nLevel: " + defenceUpgrade3Level;
        }
        else
        {
            DefencePower3Text.text = "MAX";
        }

        if (healthAndPriates.defencePower < 500)
        {
            DefencePower4Text.text = "Defence Upgrade 4\nCost: " + defenceUpgrade4Cost + " Coin\nPower: +4 Defence Power\nLevel: " + defenceUpgrade4Level;
        }
        else
        {
            DefencePower4Text.text = "MAX";
        }

        if (healthAndPriates.defencePower < 500)
        {
            DefencePower5Text.text = "Defence Upgrade 5\nCost: " + defenceUpgrade5Cost + " Coin\nPower: +5 Defence Power\nLevel: " + defenceUpgrade5Level;
        }
        else
        {
            DefencePower5Text.text = "MAX";
        }

        if (healthAndPriates.defencePower < 500)
        {
            DefencePower6Text.text = "Defence Upgrade 6\nCost: " + defenceUpgrade6Cost + " Coin\nPower: +6 Defence Power\nLevel: " + defenceUpgrade6Level;
        }
        else
        {
            DefencePower6Text.text = "MAX";
        }

        if (healthAndPriates.defencePower < 500)
        {
            DefencePower7Text.text = "Defence Upgrade 7\nCost: " + defenceUpgrade7Cost + " Coin\nPower: +7 Defence Power\nLevel: " + defenceUpgrade7Level;
        }
        else
        {
            DefencePower7Text.text = "MAX";
        }

        if (healthAndPriates.defencePower < 500)
        {
            DefencePower8Text.text = "Defence Upgrade 8\nCost: " + defenceUpgrade8Cost + " Coin\nPower: +8 Defence Power\nLevel: " + defenceUpgrade8Level;
        }
        else
        {
            DefencePower8Text.text = "MAX";
        }
    }

    public void BuyUpgrade(string upgradeID)
    {
        switch (upgradeID)
        {
            case "D1":
                if (sellFish.gainedCoin >= defenceUpgrade1Cost && healthAndPriates.defencePower < 500)
                {
                    defenceUpgrade1Level++;
                    sellFish.gainedCoin -= defenceUpgrade1Cost;
                    healthAndPriates.defencePower += 1;
                    defenceUpgrade1Cost *= 1.09;
                }
                break;
            case "D2":
                if (sellFish.gainedCoin >= defenceUpgrade2Cost && healthAndPriates.defencePower < 500)
                {
                    defenceUpgrade2Level++;
                    sellFish.gainedCoin -= defenceUpgrade2Cost;
                    healthAndPriates.defencePower += 2;
                    defenceUpgrade2Cost *= 2.03;

                }
                break;
            case "D3":
                if (sellFish.gainedCoin >= defenceUpgrade3Cost && healthAndPriates.defencePower < 500)
                {
                    defenceUpgrade3Level++;
                    sellFish.gainedCoin -= defenceUpgrade3Cost;
                    healthAndPriates.defencePower += 3;
                    defenceUpgrade3Cost *= 2.06;

                }
                break;
            case "D4":
                if (sellFish.gainedCoin >= defenceUpgrade4Cost && healthAndPriates.defencePower < 500)
                {
                    defenceUpgrade4Level++;
                    sellFish.gainedCoin -= defenceUpgrade4Cost;
                    healthAndPriates.defencePower += 4;
                    defenceUpgrade4Cost *= 2.09;

                }
                break;
            case "D5":
                if (sellFish.gainedCoin >= defenceUpgrade5Cost && healthAndPriates.defencePower < 500)
                {
                    defenceUpgrade5Level++;
                    sellFish.gainedCoin -= defenceUpgrade5Cost;
                    healthAndPriates.defencePower += 5;
                    defenceUpgrade5Cost *= 3.03;

                }
                break;
            case "D6":
                if (sellFish.gainedCoin >= defenceUpgrade6Cost && healthAndPriates.defencePower < 500)
                {
                    defenceUpgrade6Level++;
                    sellFish.gainedCoin -= defenceUpgrade6Cost;
                    healthAndPriates.defencePower += 6;
                    defenceUpgrade6Cost *= 3.06;

                }
                break;
            case "D7":
                if (sellFish.gainedCoin >= defenceUpgrade7Cost && healthAndPriates.defencePower < 500)
                {
                    defenceUpgrade7Level++;
                    sellFish.gainedCoin -= defenceUpgrade7Cost;
                    healthAndPriates.defencePower += 7;
                    defenceUpgrade7Cost *= 3.09;

                }
                break;
            case "D8":
                if (sellFish.gainedCoin >= defenceUpgrade8Cost && healthAndPriates.defencePower < 500)
                {
                    defenceUpgrade8Level++;
                    sellFish.gainedCoin -= defenceUpgrade8Cost;
                    healthAndPriates.defencePower += 8;
                    defenceUpgrade8Cost *= 4.03;

                }
                break;         
        }
    } 
}
