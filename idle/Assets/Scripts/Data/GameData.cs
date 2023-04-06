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
    public BigDouble productionUpgrade1Power;
    

    public BigDouble clickUpgrade1Cost;
    public BigDouble clickUpgrade1Level;
    public BigDouble clickUpgrade1Power;

    public BigDouble gainedCoin;

    public BigDouble defenceUpgrade1Cost;
    public BigDouble defenceUpgrade1Power;
    public BigDouble defenceUpgrade1Level;

    public BigDouble soldierUpgrade1Cost;
    public BigDouble soldierUpgrade1Power;
    public BigDouble soldierUpgrade1Level;

    public BigDouble defencePower;
    public BigDouble GuardCount;
    public BigDouble reducePower;
    public int health;
    public BigDouble takenMoney;

    public double inGameTime;

    public BigDouble reachedFish;

    public int sayı;

    public float pirateArriveTime;


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


        this.productionUpgrade1Level = 0;
        this.productionUpgrade1Power = 1;
  

        this.clickUpgrade1Cost = 100;
        this.clickUpgrade1Level = 0;
        this.clickUpgrade1Power = 1;

        this.defenceUpgrade1Level = 0;
        this.defenceUpgrade1Power = 1;
        this.defenceUpgrade1Cost = 300;
 

        this.soldierUpgrade1Level = 0;
        this.soldierUpgrade1Power = 1;
        this.soldierUpgrade1Cost = 500;

        this.reachedFish = 1000;

        this.sayı = 0;

        this.inGameTime = 0;

        this.pirateArriveTime = 240;
    }
}
