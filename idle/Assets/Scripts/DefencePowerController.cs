using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class DefencePowerController : MonoBehaviour
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
    public double defenceUpgrade1Cost;
    public int defenceUpgrade1Level;

    public double defenceUpgrade2Cost;
    public int defenceUpgrade2Level;

    public double defenceUpgrade3Cost;
    public int defenceUpgrade3Level;

    public double defenceUpgrade4Cost;
    public int defenceUpgrade4Level;

    public double defenceUpgrade5Cost;
    public int defenceUpgrade5Level;

    public double defenceUpgrade6Cost;
    public int defenceUpgrade6Level;

    public double defenceUpgrade7Cost;
    public int defenceUpgrade7Level;

    public double defenceUpgrade8Cost;
    public int defenceUpgrade8Level;

    private void Start()
    {
        defenceUpgrade1Cost = 100;
        defenceUpgrade2Cost = 200;
        defenceUpgrade3Cost = 300;
        defenceUpgrade4Cost = 400;
        defenceUpgrade5Cost = 500;
        defenceUpgrade6Cost = 600;
        defenceUpgrade7Cost = 700;
        defenceUpgrade8Cost = 800;
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

    public void BuyDefencePower1()
    {
        if(sellFish.gainedCoin >= defenceUpgrade1Cost && healthAndPriates.defencePower < 500)
        {
            defenceUpgrade1Level++;
            sellFish.gainedCoin -= defenceUpgrade1Cost;
            healthAndPriates.defencePower += 1;
            defenceUpgrade1Cost *= 1.09;
        }
    }

    public void BuyDefencePower2()
    {
        if (sellFish.gainedCoin >= defenceUpgrade2Cost && healthAndPriates.defencePower < 500)
        {
            defenceUpgrade2Level++;
            sellFish.gainedCoin -= defenceUpgrade2Cost;
            healthAndPriates.defencePower += 2;
            defenceUpgrade2Cost *= 2.03;

        }
    }

    public void BuyDefencePower3()
    {
        if (sellFish.gainedCoin >= defenceUpgrade3Cost && healthAndPriates.defencePower < 500)
        {
            defenceUpgrade3Level++;
            sellFish.gainedCoin -= defenceUpgrade3Cost;
            healthAndPriates.defencePower += 3;
            defenceUpgrade3Cost *= 2.06;

        }
    }

    public void BuyDefencePower4()
    {
        if (sellFish.gainedCoin >= defenceUpgrade4Cost && healthAndPriates.defencePower < 500)
        {
            defenceUpgrade4Level++;
            sellFish.gainedCoin -= defenceUpgrade4Cost;
            healthAndPriates.defencePower += 4;
            defenceUpgrade4Cost *= 2.09;

        }
    }

    public void BuyDefencePower5()
    {
        if (sellFish.gainedCoin >= defenceUpgrade5Cost && healthAndPriates.defencePower < 500)
        {
            defenceUpgrade5Level++;
            sellFish.gainedCoin -= defenceUpgrade5Cost;
            healthAndPriates.defencePower += 5;
            defenceUpgrade5Cost *= 3.03;

        }
    }

    public void BuyDefencePower6()
    {
        if (sellFish.gainedCoin >= defenceUpgrade6Cost && healthAndPriates.defencePower < 500)
        {
            defenceUpgrade6Level++;
            sellFish.gainedCoin -= defenceUpgrade6Cost;
            healthAndPriates.defencePower += 6;
            defenceUpgrade6Cost *= 3.06;

        }
    }

    public void BuyDefencePower7()
    {
        if (sellFish.gainedCoin >= defenceUpgrade7Cost && healthAndPriates.defencePower < 500)
        {
            defenceUpgrade7Level++;
            sellFish.gainedCoin -= defenceUpgrade7Cost;
            healthAndPriates.defencePower += 7;
            defenceUpgrade7Cost *= 3.09;

        }
    }

    public void BuyDefencePower8()
    {
        if (sellFish.gainedCoin >= defenceUpgrade8Cost && healthAndPriates.defencePower < 500)
        {
            defenceUpgrade8Level++;
            sellFish.gainedCoin -= defenceUpgrade8Cost;
            healthAndPriates.defencePower += 8;
            defenceUpgrade8Cost *= 4.03;

        }
    }
}
