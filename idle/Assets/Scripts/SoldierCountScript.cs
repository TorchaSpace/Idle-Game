using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class SoldierCountScript : MonoBehaviour
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
    public double soldierUpgrade1Cost;
    public int soldierUpgrade1Level;

    public double soldierUpgrade2Cost;
    public int soldierUpgrade2Level;

    public double soldierUpgrade3Cost;
    public int soldierUpgrade3Level;

    public double soldierUpgrade4Cost;
    public int soldierUpgrade4Level;

    public double soldierUpgrade5Cost;
    public int soldierUpgrade5Level;

    public double soldierUpgrade6Cost;
    public int soldierUpgrade6Level;

    public double soldierUpgrade7Cost;
    public int soldierUpgrade7Level;

    public double soldierUpgrade8Cost;
    public int soldierUpgrade8Level;

    private void Start()
    {
        soldierUpgrade1Cost = 500;
        soldierUpgrade2Cost = 1000;
        soldierUpgrade3Cost = 1500;
        soldierUpgrade4Cost = 2000;
        soldierUpgrade5Cost = 2500;
        soldierUpgrade6Cost = 3000;
        soldierUpgrade7Cost = 3500;
        soldierUpgrade8Cost = 4000;
    }

    private void Update()
    {
        if(healthAndPriates.GuardCount < 100)
        {
            soldierPower1Text.text = "Add Soldier 1\nCost: " + soldierUpgrade1Cost + " Coin\nPower: +1 Soldier\nLevel: " + soldierUpgrade1Level; 
        }
        else
        {
            soldierPower1Text.text = "MAX";
        }

        if (healthAndPriates.GuardCount < 100)
        {
            soldierPower2Text.text = "Add Soldier 2\nCost: " + soldierUpgrade2Cost + " Coin\nPower: +2 Soldier\nLevel: " + soldierUpgrade2Level;
        }
        else
        {
            soldierPower2Text.text = "MAX";
        }

        if (healthAndPriates.GuardCount < 100)
        {
            soldierPower3Text.text = "Add Soldier 3\nCost: " + soldierUpgrade3Cost + " Coin\nPower: +3 Soldier\nLevel: " + soldierUpgrade3Level;
        }
        else
        {
            soldierPower3Text.text = "MAX";
        }

        if (healthAndPriates.GuardCount < 100)
        {
            soldierPower4Text.text = "Add Soldier 4\nCost: " + soldierUpgrade4Cost + " Coin\nPower: +4 Soldier\nLevel: " + soldierUpgrade4Level;
        }
        else
        {
            soldierPower4Text.text = "MAX";
        }

        if (healthAndPriates.GuardCount < 100)
        {
            soldierPower5Text.text = "Add Soldier 5\nCost: " + soldierUpgrade5Cost + " Coin\nPower: +5 Soldier\nLevel: " + soldierUpgrade5Level;
        }
        else
        {
            soldierPower5Text.text = "MAX";
        }

        if (healthAndPriates.GuardCount < 100)
        {
            soldierPower6Text.text = "Add Soldier 6\nCost: " + soldierUpgrade6Cost + " Coin\nPower: +6 Soldier\nLevel: " + soldierUpgrade6Level;
        }
        else
        {
            soldierPower6Text.text = "MAX";
        }

        if (healthAndPriates.GuardCount < 100)
        {
            soldierPower7Text.text = "Add Soldier 7\nCost: " + soldierUpgrade7Cost + " Coin\nPower: +7 Soldier\nLevel: " + soldierUpgrade7Level;
        }
        else
        {
            soldierPower7Text.text = "MAX";
        }

        if (healthAndPriates.GuardCount < 100)
        {
            soldierPower8Text.text = "Add Soldier 8\nCost: " + soldierUpgrade8Cost + " Coin\nPower: +8 Soldier\nLevel: " + soldierUpgrade8Level;
        }
        else
        {
            soldierPower8Text.text = "MAX";
        }
    }

    public void BuySoldierUpgrade1()
    {
        if(sellFish.gainedCoin >= soldierUpgrade1Cost && healthAndPriates.GuardCount < 100)
        {
            soldierUpgrade1Level++;
            sellFish.gainedCoin -= soldierUpgrade1Cost;
            healthAndPriates.GuardCount += 1;
            soldierUpgrade1Cost *= 1.09;
        }
    }

    public void BuySoldierUpgrade2()
    {
        if (sellFish.gainedCoin >= soldierUpgrade2Cost && healthAndPriates.GuardCount < 100)
        {
            soldierUpgrade2Level++;
            sellFish.gainedCoin -= soldierUpgrade2Cost;
            healthAndPriates.GuardCount += 2;
            soldierUpgrade2Cost *= 2.03;
        }
    }

    public void BuySoldierUpgrade3()
    {
        if (sellFish.gainedCoin >= soldierUpgrade3Cost && healthAndPriates.GuardCount < 100)
        {
            soldierUpgrade3Level++;
            sellFish.gainedCoin -= soldierUpgrade3Cost;
            healthAndPriates.GuardCount += 3;
            soldierUpgrade3Cost *= 2.06;
        }
    }

    public void BuySoldierUpgrade4()
    {
        if (sellFish.gainedCoin >= soldierUpgrade4Cost && healthAndPriates.GuardCount < 100)
        {
            soldierUpgrade4Level++;
            sellFish.gainedCoin -= soldierUpgrade4Cost;
            healthAndPriates.GuardCount += 4;
            soldierUpgrade4Cost *= 2.09;
        }
    }

    public void BuySoldierUpgrade5()
    {
        if (sellFish.gainedCoin >= soldierUpgrade5Cost && healthAndPriates.GuardCount < 100)
        {
            soldierUpgrade5Level++;
            sellFish.gainedCoin -= soldierUpgrade5Cost;
            healthAndPriates.GuardCount += 5;
            soldierUpgrade5Cost *= 3.03;
        }
    }

    public void BuySoldierUpgrade6()
    {
        if (sellFish.gainedCoin >= soldierUpgrade6Cost && healthAndPriates.GuardCount < 100)
        {
            soldierUpgrade6Level++;
            sellFish.gainedCoin -= soldierUpgrade6Cost;
            healthAndPriates.GuardCount += 6;
            soldierUpgrade6Cost *= 3.06;
        }
    }

    public void BuySoldierUpgrade7()
    {
        if (sellFish.gainedCoin >= soldierUpgrade7Cost && healthAndPriates.GuardCount < 100)
        {
            soldierUpgrade7Level++;
            sellFish.gainedCoin -= soldierUpgrade7Cost;
            healthAndPriates.GuardCount += 7;
            soldierUpgrade7Cost *= 3.09;
        }
    }

    public void BuySoldierUpgrade8()
    {
        if (sellFish.gainedCoin >= soldierUpgrade8Cost && healthAndPriates.GuardCount < 100)
        {
            soldierUpgrade8Level++;
            sellFish.gainedCoin -= soldierUpgrade8Cost;
            healthAndPriates.GuardCount += 8;
            soldierUpgrade8Cost *= 4.03;
        }
    }
}
