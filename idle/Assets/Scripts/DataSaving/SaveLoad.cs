using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[System.Serializable]
public class SaveLoad
{
    public int coins;
    public int coinsClickValue;
    public int clickUpgrade1Cost;
    public int clickUpgrade2Cost;
    public int productionUpgrade1Cost;
    public int productionUpgrade2Cost;
    public int clickUpgrade1Level;


    public SaveLoad()
    {
        this.coins = 0;
        this.coinsClickValue = 1;
        this.clickUpgrade1Cost = 10;
        this.clickUpgrade2Cost = 100;
        this.productionUpgrade1Cost = 25;
        this.productionUpgrade2Cost = 250;
        this.clickUpgrade1Level = 1;
    }
}