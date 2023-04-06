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

    [Header("Defaults")]
    public SellFish sellFish;
    public HealthAndPriates healthAndPriates;

    [Header("Soldier Upgrade")]
    public BigDouble soldierUpgrade1Cost;
    public BigDouble soldierUpgrade1Level;
    public BigDouble soldierUpgrade1Power;

    public void LoadData(GameData data)
    {
        this.soldierUpgrade1Cost = data.soldierUpgrade1Cost;
        this.soldierUpgrade1Power = data.soldierUpgrade1Power;
        this.soldierUpgrade1Level = data.soldierUpgrade1Level;

    }

    public void SaveData(ref GameData data)
    {
        data.soldierUpgrade1Cost = this.soldierUpgrade1Cost;
        data.soldierUpgrade1Power = this.soldierUpgrade1Power;
        data.soldierUpgrade1Level = this.soldierUpgrade1Level;
    }

    private void Update()
    {
        if (healthAndPriates.GuardCount < 100)
        {
            soldierPower1Text.text = "Add Soldier 1\nCost: " + GainCoinButton.Double2dec(soldierUpgrade1Cost) + " Coin\nPower: +" + GainCoinButton.Double2dec(soldierUpgrade1Power) + " Soldier\nLevel: " + GainCoinButton.Double2dec(soldierUpgrade1Level);
        }
        else
        {
            soldierPower1Text.text = "MAX";
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
                    soldierUpgrade1Cost *= 4.7;
                    soldierUpgrade1Power *= 2;
                }
                break;
        }
    }

}
