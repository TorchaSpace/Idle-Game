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
 

    [Header("Defaults")]
    public SellFish sellFish;
    public HealthAndPriates healthAndPriates;

    [Header("Defence Upgrade")]
    public BigDouble defenceUpgrade1Cost;
    public BigDouble defenceUpgrade1Level;
    public BigDouble defenceUpgrade1Power;


    public void LoadData(GameData data)
    {
        this.defenceUpgrade1Cost = data.defenceUpgrade1Cost;
        this.defenceUpgrade1Power = data.defenceUpgrade1Power;
        this.defenceUpgrade1Level = data.defenceUpgrade1Level;
       
    }

    public void SaveData(ref GameData data)
    {
        data.defenceUpgrade1Cost = this.defenceUpgrade1Cost;
        data.defenceUpgrade1Power = this.defenceUpgrade1Power;
        data.defenceUpgrade1Level = this.defenceUpgrade1Level;
    }

    private void Update()
    {
        if(healthAndPriates.defencePower < 500)
        {
            DefencePower1Text.text = "Defence Upgrade 1\nCost: " + GainCoinButton.Double2dec(defenceUpgrade1Cost) + " Coin\nPower: +" + GainCoinButton.Double2dec(defenceUpgrade1Power) + " Defence Power\nLevel: " + GainCoinButton.Double2dec(defenceUpgrade1Level);
        }
        else
        {
            DefencePower1Text.text = "MAX";
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
                    defenceUpgrade1Cost *= 3.7;
                    defenceUpgrade1Power *= 2;
                }
                break;
        }
    } 
}
