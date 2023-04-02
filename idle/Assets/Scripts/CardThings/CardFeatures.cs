using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class CardFeatures : MonoBehaviour
{
    public GameObject buyCardScreen;

    public GainCoinButton gainCoinButton;
    public SellFish sellFish;
    public HealthAndPriates HealthAndPriates;

    public Button newCardButton;

    public GameObject cardSelectionScreen;

    public HealthAndPriates healthAndPriates;

    [Header("Left Cards")]
    public GameObject LifeElixerLeft;
    public GameObject MermaidsHeartLeft;
    public GameObject TopMaritimeTraderLeft;
    public GameObject TopMaritimeTraderLeft2;
    public GameObject FishFrenzyLeft;
    public GameObject TheFishersTressureLeft;
    public GameObject HappySoulsLeft;
    public GameObject EnchantedWatersLeft;
    public GameObject EnchantedWatersLeft2;
    public GameObject EnchantedWatersLeft3;
    public GameObject AbundanceOfFishLeft;


    [Header("Right Cards")]
    public GameObject MermaidsHeartRight;
    public GameObject MermaidsHeartRight2;
    public GameObject TopMaritimeTraderRight;
    public GameObject FishFrenzyRight;
    public GameObject HighSeasGamblerRight;
    public GameObject BlowUpThePirtaeShipRight;
    public GameObject HappySoulsRight;
    public GameObject EnchantedWatersRight;
    public GameObject EnchantedWatersRight2;
    public GameObject AbundanceOfFishRight;
    public GameObject SeaGuardsRight;

    public void BuyCards()
    {
        buyCardScreen.SetActive(!buyCardScreen.activeSelf);
    }

    public void TopMaritimeTrader()
    {
        TopMaritimeTraderLeft.SetActive(false);
        TopMaritimeTraderLeft2.SetActive(false);
        TopMaritimeTraderRight.SetActive(false);

        GainCoinButton.cardUpgrades += gainCoinButton.coinsPerSec + (gainCoinButton.coinsPerSec * 0.1f);
        gainCoinButton.coins = 0;
        CardSelection.reachedFish *= 2;
        newCardButton.interactable = false;

        cardSelectionScreen.SetActive(false);

    }

    public void EnchantedWaters()
    {
        EnchantedWatersLeft.SetActive(false);
        EnchantedWatersLeft2.SetActive(false);
        EnchantedWatersLeft3.SetActive(false);
        EnchantedWatersRight.SetActive(false);
        EnchantedWatersRight2.SetActive(false);

        GainCoinButton.cardUpgrades += gainCoinButton.coinsPerSec + (gainCoinButton.coinsPerSec * 0.05f);
        gainCoinButton.coins = 0;
        CardSelection.reachedFish *= 2;

        newCardButton.interactable = false;

        cardSelectionScreen.SetActive(false);


    }

    public void EnchantedWatersEpic(int cost)
    {
        if(gainCoinButton.gems > cost)
        {
            GainCoinButton.cardUpgrades += gainCoinButton.coinsPerSec + (gainCoinButton.coinsPerSec * 0.25);
            gainCoinButton.gems -= cost;
        }

    }

    public void MermaidsLove(int cost)
    {
        if(gainCoinButton.gems > cost)
        {
            GainCoinButton.cardUpgrades += gainCoinButton.coinsPerSec + (gainCoinButton.coinsPerSec * 0.2f);
            gainCoinButton.gems -= cost;

        }
    }

    public void HappySouls()
    {
        HappySoulsLeft.SetActive(false);
        HappySoulsRight.SetActive(false);

        GainCoinButton.cardUpgrades += gainCoinButton.coinsPerSec + (gainCoinButton.coinsPerSec * 0.2f);
        gainCoinButton.coins = 0;
        CardSelection.reachedFish *= 2;
        newCardButton.interactable = false;
        cardSelectionScreen.SetActive(false);


    }

    public void AbundanceOfFish()
    {
        AbundanceOfFishLeft.SetActive(false);
        AbundanceOfFishRight.SetActive(false);

        GainCoinButton.cardUpgrades += gainCoinButton.coinsPerSec + (gainCoinButton.coinsPerSec * 0.2f);
        gainCoinButton.coins = 0;
        CardSelection.reachedFish *= 2;
        newCardButton.interactable = false;

        cardSelectionScreen.SetActive(false);

    }

    public void FishFrenzy()
    {
        FishFrenzyLeft.SetActive(false);
        FishFrenzyRight.SetActive(false);

        gainCoinButton.coinsClickValue += gainCoinButton.coinsClickValue + (gainCoinButton.coinsClickValue * 0.2f);
        gainCoinButton.coins = 0;
        CardSelection.reachedFish *= 2;
        newCardButton.interactable = false;

        cardSelectionScreen.SetActive(false);

    }

    public void HighSeesGambler()
    {
        HighSeasGamblerRight.SetActive(false);

        sellFish.gainedCoin += 1500;
        gainCoinButton.coins = 0;
        CardSelection.reachedFish *= 2;
        newCardButton.interactable = false;

        cardSelectionScreen.SetActive(false);


    }

    public void TheFishersTressure()
    {
        TheFishersTressureLeft.SetActive(false);


        sellFish.gainedCoin += 1000;
        gainCoinButton.coins = 0;
        CardSelection.reachedFish *= 2;
        newCardButton.interactable = false;

        cardSelectionScreen.SetActive(false);


    }

    public void FlipTheCoins(int cost)
    {
        if(gainCoinButton.gems > cost)
        {
            sellFish.gainedCoin += 10000;
            gainCoinButton.gems -= cost;

        }
    }

    public void TheGoddessTresure(int cost)
    {
         if(gainCoinButton.gems > cost)
        {
            sellFish.gainedCoin += 7000;
            gainCoinButton.gems -= cost;

        }
    }

    public void CruisingSouls(int cost)
    {
        if(gainCoinButton.gems > cost)
        {
            gainCoinButton.coinsClickValue += gainCoinButton.coinsClickValue * 2;
            gainCoinButton.gems -= cost;

        }
    }

    public void LifeElixir()
    {
        LifeElixerLeft.SetActive(false);

        HealthAndPriates.health = 3;
        gainCoinButton.coins = 0;
        CardSelection.reachedFish *= 2;
        newCardButton.interactable = false;


        cardSelectionScreen.SetActive(false);

    }

    public void MermaidsHeart()
    {
        MermaidsHeartLeft.SetActive(false);
        MermaidsHeartRight.SetActive(false);
        MermaidsHeartRight2.SetActive(false);

        if (HealthAndPriates.health < 3 && HealthAndPriates.health > 0)
        {
            HealthAndPriates.health += 1;
        }
        gainCoinButton.coins = 0;
        CardSelection.reachedFish *= 2;
        newCardButton.interactable = false;
        cardSelectionScreen.SetActive(false);


    }

    public void BlowUpThePirateShip()
    {
        BlowUpThePirtaeShipRight.SetActive(false);

        healthAndPriates.pirateArriveTime = Random.Range(600f, 1200f);
        gainCoinButton.coins = 0;
        CardSelection.reachedFish *= 2;
        newCardButton.interactable = false;

        cardSelectionScreen.SetActive(false);
        
    }

    public void WrathOfTheSeaGoddess2(int cost)
    {
       if(gainCoinButton.gems > cost)
        {
            if (healthAndPriates.korsanPower > 10)
            {
                healthAndPriates.reducedPower += healthAndPriates.korsanPower + (healthAndPriates.korsanPower * 0.2);

            }

            if (healthAndPriates.korsanPower <= 1)
            {
                healthAndPriates.korsanPower = 1;
            }
            gainCoinButton.gems -= cost;

        }

    }

    public void WrathOfTheSeaGoddess2More(int cost)
    {
        if(gainCoinButton.gems > cost)
        {
            if (healthAndPriates.korsanPower > 10)
            {
                healthAndPriates.reducedPower += healthAndPriates.korsanPower + (healthAndPriates.korsanPower * 0.25);

            }

            if (healthAndPriates.korsanPower <= 1)
            {
                healthAndPriates.korsanPower = 1;
            }
            gainCoinButton.gems -= cost;

        }
    }

    public void SeaGuards()
    {
        SeaGuardsRight.SetActive(false);

        if(healthAndPriates.defencePower >= 100)
        {
            healthAndPriates.defencePower = 50;
        }
        else
        {
            healthAndPriates.defencePower += healthAndPriates.defencePower + (healthAndPriates.defencePower * 0.2);
        }

        gainCoinButton.coins = 0;
        CardSelection.reachedFish *= 2;
        newCardButton.interactable = false;
        cardSelectionScreen.SetActive(false);

    }

    public void ShipreckSalvage()
    {
        gainCoinButton.coinsClickValue += gainCoinButton.coinsClickValue + (0.15f * gainCoinButton.coinsClickValue);

        gainCoinButton.coins = 0;
        CardSelection.reachedFish *= 2;
        newCardButton.interactable = false;
        cardSelectionScreen.SetActive(false);
    }

    public void SeaferingCousins()
    {
        gainCoinButton.coinsClickValue += gainCoinButton.coinsClickValue + (0.15f * gainCoinButton.coinsClickValue);
        gainCoinButton.coins = 0;
        CardSelection.reachedFish *= 2;
        newCardButton.interactable = false;
        cardSelectionScreen.SetActive(false);
    }

    public void GrandfathersHeirloom()
    {
        gainCoinButton.coinsClickValue += gainCoinButton.coinsClickValue + (0.075f * gainCoinButton.coinsClickValue);
        gainCoinButton.coins = 0;
        CardSelection.reachedFish *= 2;
        newCardButton.interactable = false;
        cardSelectionScreen.SetActive(false);
    }

    public void TheMermaidsDiscovery(int cost)
    {
        if(gainCoinButton.gems > cost)
        {
            GainCoinButton.cardUpgrades += gainCoinButton.coinsPerSec + (gainCoinButton.coinsPerSec * 0.2f);
            gainCoinButton.gems -= cost;

        }
    }

    public void LostFisherman(int cost)
    {
        if(gainCoinButton.gems > cost)
        {
            gainCoinButton.coinsClickValue += gainCoinButton.coinsClickValue + (0.225f * gainCoinButton.coinsClickValue);
            gainCoinButton.gems -= cost;

        }

    }

    public void BlueStone(int cost)
    {
        if(gainCoinButton.gems > cost)
        {
            gainCoinButton.coinsClickValue += gainCoinButton.coinsClickValue + (0.2f * gainCoinButton.coinsClickValue);
            GainCoinButton.cardUpgrades += GainCoinButton.cardUpgrades + (0.2f * GainCoinButton.cardUpgrades);
            gainCoinButton.gems -= cost;
        }
    }
}
