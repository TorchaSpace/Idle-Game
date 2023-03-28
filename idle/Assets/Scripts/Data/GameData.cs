using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using BreakInfinity;

public class GameData
{
    public BigDouble fish;
    public BigDouble coinsClickValue;

    public BigDouble coinsPerSec;

    public BigDouble cardUpgrades;

    public BigDouble gems;
    public BigDouble gemBoost;

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

    public BigDouble gainedCoin;

    public BigDouble defenceUpgrade1Cost;
    public BigDouble defenceUpgrade2Cost;
    public BigDouble defenceUpgrade3Cost;
    public BigDouble defenceUpgrade4Cost;
    public BigDouble defenceUpgrade5Cost;
    public BigDouble defenceUpgrade6Cost;
    public BigDouble defenceUpgrade7Cost;
    public BigDouble defenceUpgrade8Cost;

    public BigDouble defenceUpgrade1Level;
    public BigDouble defenceUpgrade2Level;
    public BigDouble defenceUpgrade3Level;
    public BigDouble defenceUpgrade4Level;
    public BigDouble defenceUpgrade5Level;
    public BigDouble defenceUpgrade6Level;
    public BigDouble defenceUpgrade7Level;
    public BigDouble defenceUpgrade8Level;

    public BigDouble soldierUpgrade1Cost;
    public BigDouble soldierUpgrade2Cost;
    public BigDouble soldierUpgrade3Cost;
    public BigDouble soldierUpgrade4Cost;
    public BigDouble soldierUpgrade5Cost;
    public BigDouble soldierUpgrade6Cost;
    public BigDouble soldierUpgrade7Cost;
    public BigDouble soldierUpgrade8Cost;

    public BigDouble soldierUpgrade1Level;
    public BigDouble soldierUpgrade2Level;
    public BigDouble soldierUpgrade3Level;
    public BigDouble soldierUpgrade4Level;
    public BigDouble soldierUpgrade5Level;
    public BigDouble soldierUpgrade6Level;
    public BigDouble soldierUpgrade7Level;
    public BigDouble soldierUpgrade8Level;

    public int defencePower;
    public int GuardCount;
    public int reducePower;
    public int health;
    public BigDouble takenMoney;
    
    public GameData()
    {
        this.fish = 0;
        this.coinsClickValue = 1;
        this.coinsPerSec = 0;
        this.cardUpgrades = 0;
        this.gems = 0;
        this.gemBoost = 1;

        this.gainedCoin = 0;

        this.defencePower = 1;
        this.GuardCount = 1;
        this.reducePower = 0;
        this.takenMoney = 5000;
        this.health = 3;

        this.productionUpgrade1Cost = 500;
        this.productionUpgrade2Cost = 1000;
        this.productionUpgrade3Cost = 1500;
        this.productionUpgrade4Cost = 2000;
        this.productionUpgrade5Cost = 2500;
        this.productionUpgrade6Cost = 3000;
        this.productionUpgrade7Cost = 3500;
        this.productionUpgrade8Cost = 4000;

        this.productionUpgrade1Level = 0;
        this.productionUpgrade2Level = 0;
        this.productionUpgrade3Level = 0;
        this.productionUpgrade4Level = 0;
        this.productionUpgrade5Level = 0;
        this.productionUpgrade6Level = 0;
        this.productionUpgrade7Level = 0;
        this.productionUpgrade8Level = 0;

        this.productionUpgrade2Power = 5;
        this.productionUpgrade3Power = 10;
        this.productionUpgrade4Power = 15;
        this.productionUpgrade5Power = 20;
        this.productionUpgrade6Power = 25;
        this.productionUpgrade7Power = 30;
        this.productionUpgrade8Power = 35;

        this.clickUpgrade1Cost = 100;
        this.clickUpgrade2Cost = 200;
        this.clickUpgrade3Cost = 300;
        this.clickUpgrade4Cost = 400;
        this.clickUpgrade5Cost = 500;
        this.clickUpgrade6Cost = 600;
        this.clickUpgrade7Cost = 700;
        this.clickUpgrade8Cost = 800;

        this.clickUpgrade1Level = 0;
        this.clickUpgrade2Level = 0;
        this.clickUpgrade3Level = 0;
        this.clickUpgrade4Level = 0;
        this.clickUpgrade5Level = 0;
        this.clickUpgrade6Level = 0;
        this.clickUpgrade7Level = 0;
        this.clickUpgrade8Level = 0;

        this.defenceUpgrade1Level = 0;
        this.defenceUpgrade2Level = 0;
        this.defenceUpgrade3Level = 0;
        this.defenceUpgrade4Level = 0;
        this.defenceUpgrade5Level = 0;
        this.defenceUpgrade6Level = 0;
        this.defenceUpgrade7Level = 0;
        this.defenceUpgrade8Level = 0;

        this.defenceUpgrade1Cost = 100;
        this.defenceUpgrade2Cost = 200;
        this.defenceUpgrade3Cost = 300;
        this.defenceUpgrade4Cost = 400;
        this.defenceUpgrade5Cost = 500;
        this.defenceUpgrade6Cost = 600;
        this.defenceUpgrade7Cost = 700;
        this.defenceUpgrade8Cost = 800;

        this.soldierUpgrade1Level = 0;
        this.soldierUpgrade2Level = 0;
        this.soldierUpgrade3Level = 0;
        this.soldierUpgrade4Level = 0;
        this.soldierUpgrade5Level = 0;
        this.soldierUpgrade6Level = 0;
        this.soldierUpgrade7Level = 0;
        this.soldierUpgrade8Level = 0;

        this.soldierUpgrade1Cost = 500;
        this.soldierUpgrade2Cost = 1000;
        this.soldierUpgrade3Cost = 1500;
        this.soldierUpgrade4Cost = 2000;
        this.soldierUpgrade5Cost = 2500;
        this.soldierUpgrade6Cost = 3000;
        this.soldierUpgrade7Cost = 3500;
        this.soldierUpgrade8Cost = 4000;
    }
}
