using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class CardSelection : MonoBehaviour
{
    public GainCoinButton gainCoinButton;

    public GameObject cardSelectionScreen;

    public Button newCardButton;

    public static int reachedFish = 1000;

    public int cardRangeForLeft;
    public int cardRangeForRight;

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
    public GameObject ShipreckSalvageLeft;
    public GameObject grandfathersHeirloomLeft;


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
    public GameObject SeafaringCousinsRight;
    public GameObject SeafaringCousinsRight2;
    public GameObject GrandfathersHeirloomRight;


    public void NewCardButton()
    {
        cardSelectionScreen.SetActive(!cardSelectionScreen.activeSelf);
        
    }

    private void Update()
    {
        if(gainCoinButton.coins >= reachedFish && newCardButton.interactable == false)
        {
            cardRangeForLeft = Random.Range(1, 14);
            cardRangeForRight = Random.Range(1, 15);
            newCardButton.interactable = true;
            
        }

        else if(gainCoinButton.coins < reachedFish)
        {
            newCardButton.interactable = false;
        }


        switch(cardRangeForLeft)
        {
            case 1:
                LifeElixerLeft.SetActive(true);
                MermaidsHeartLeft.SetActive(false);
                TopMaritimeTraderLeft.SetActive(false);
                TopMaritimeTraderLeft2.SetActive(false);
                FishFrenzyLeft.SetActive(false);
                TheFishersTressureLeft.SetActive(false);
                HappySoulsLeft.SetActive(false);
                EnchantedWatersLeft.SetActive(false);
                EnchantedWatersLeft2.SetActive(false);
                EnchantedWatersLeft3.SetActive(false);
                AbundanceOfFishLeft.SetActive(false);
                ShipreckSalvageLeft.SetActive(false);
                grandfathersHeirloomLeft.SetActive(false);
                break;
            case 2:
                MermaidsHeartLeft.SetActive(true);
                LifeElixerLeft.SetActive(false);
                TopMaritimeTraderLeft.SetActive(false);
                TopMaritimeTraderLeft2.SetActive(false);
                FishFrenzyLeft.SetActive(false);
                TheFishersTressureLeft.SetActive(false);
                HappySoulsLeft.SetActive(false);
                EnchantedWatersLeft.SetActive(false);
                EnchantedWatersLeft2.SetActive(false);
                EnchantedWatersLeft3.SetActive(false);
                AbundanceOfFishLeft.SetActive(false);
                ShipreckSalvageLeft.SetActive(false);
                grandfathersHeirloomLeft.SetActive(false);
                break;
            case 3:
                TopMaritimeTraderLeft.SetActive(true);
                LifeElixerLeft.SetActive(false);
                MermaidsHeartLeft.SetActive(false);
                TopMaritimeTraderLeft2.SetActive(false);
                FishFrenzyLeft.SetActive(false);
                TheFishersTressureLeft.SetActive(false);
                HappySoulsLeft.SetActive(false);
                EnchantedWatersLeft.SetActive(false);
                EnchantedWatersLeft2.SetActive(false);
                EnchantedWatersLeft3.SetActive(false);
                AbundanceOfFishLeft.SetActive(false);
                ShipreckSalvageLeft.SetActive(false);
                grandfathersHeirloomLeft.SetActive(false);
                break;
            case 4:
                TopMaritimeTraderLeft2.SetActive(true);
                LifeElixerLeft.SetActive(false);
                MermaidsHeartLeft.SetActive(false);
                TopMaritimeTraderLeft.SetActive(false);
                FishFrenzyLeft.SetActive(false);
                TheFishersTressureLeft.SetActive(false);
                HappySoulsLeft.SetActive(false);
                EnchantedWatersLeft.SetActive(false);
                EnchantedWatersLeft2.SetActive(false);
                EnchantedWatersLeft3.SetActive(false);
                AbundanceOfFishLeft.SetActive(false);
                ShipreckSalvageLeft.SetActive(false);
                grandfathersHeirloomLeft.SetActive(false);
                break;
            case 5:
                FishFrenzyLeft.SetActive(true);
                TopMaritimeTraderLeft2.SetActive(false);
                LifeElixerLeft.SetActive(false);
                MermaidsHeartLeft.SetActive(false);
                TopMaritimeTraderLeft.SetActive(false);
                TheFishersTressureLeft.SetActive(false);
                HappySoulsLeft.SetActive(false);
                EnchantedWatersLeft.SetActive(false);
                EnchantedWatersLeft2.SetActive(false);
                EnchantedWatersLeft3.SetActive(false);
                AbundanceOfFishLeft.SetActive(false);
                ShipreckSalvageLeft.SetActive(false);
                grandfathersHeirloomLeft.SetActive(false);
                break;
            case 6:
                TheFishersTressureLeft.SetActive(true);
                TopMaritimeTraderLeft2.SetActive(false);
                LifeElixerLeft.SetActive(false);
                MermaidsHeartLeft.SetActive(false);
                TopMaritimeTraderLeft.SetActive(false);
                FishFrenzyLeft.SetActive(false);
                HappySoulsLeft.SetActive(false);
                EnchantedWatersLeft.SetActive(false);
                EnchantedWatersLeft2.SetActive(false);
                EnchantedWatersLeft3.SetActive(false);
                AbundanceOfFishLeft.SetActive(false);
                ShipreckSalvageLeft.SetActive(false);
                grandfathersHeirloomLeft.SetActive(false);
                break;
            case 7:
                HappySoulsLeft.SetActive(true);
                TopMaritimeTraderLeft2.SetActive(false);
                LifeElixerLeft.SetActive(false);
                MermaidsHeartLeft.SetActive(false);
                TopMaritimeTraderLeft.SetActive(false);
                FishFrenzyLeft.SetActive(false);
                TheFishersTressureLeft.SetActive(false);
                EnchantedWatersLeft.SetActive(false);
                EnchantedWatersLeft2.SetActive(false);
                EnchantedWatersLeft3.SetActive(false);
                AbundanceOfFishLeft.SetActive(false);
                ShipreckSalvageLeft.SetActive(false);
                grandfathersHeirloomLeft.SetActive(false);
                break;
            case 8:
                EnchantedWatersLeft.SetActive(true);
                TopMaritimeTraderLeft2.SetActive(false);
                LifeElixerLeft.SetActive(false);
                MermaidsHeartLeft.SetActive(false);
                TopMaritimeTraderLeft.SetActive(false);
                FishFrenzyLeft.SetActive(false);
                TheFishersTressureLeft.SetActive(false);
                HappySoulsLeft.SetActive(false);
                EnchantedWatersLeft2.SetActive(false);
                EnchantedWatersLeft3.SetActive(false);
                AbundanceOfFishLeft.SetActive(false);
                ShipreckSalvageLeft.SetActive(false);
                grandfathersHeirloomLeft.SetActive(false);
                break;
            case 9:
                EnchantedWatersLeft2.SetActive(true);
                TopMaritimeTraderLeft2.SetActive(false);
                LifeElixerLeft.SetActive(false);
                MermaidsHeartLeft.SetActive(false);
                TopMaritimeTraderLeft.SetActive(false);
                FishFrenzyLeft.SetActive(false);
                TheFishersTressureLeft.SetActive(false);
                HappySoulsLeft.SetActive(false);
                EnchantedWatersLeft.SetActive(false);
                EnchantedWatersLeft3.SetActive(false);
                AbundanceOfFishLeft.SetActive(false);
                ShipreckSalvageLeft.SetActive(false);
                grandfathersHeirloomLeft.SetActive(false);
                break;
            case 10:
                EnchantedWatersLeft3.SetActive(true);
                TopMaritimeTraderLeft2.SetActive(false);
                LifeElixerLeft.SetActive(false);
                MermaidsHeartLeft.SetActive(false);
                TopMaritimeTraderLeft.SetActive(false);
                FishFrenzyLeft.SetActive(false);
                TheFishersTressureLeft.SetActive(false);
                HappySoulsLeft.SetActive(false);
                EnchantedWatersLeft.SetActive(false);
                EnchantedWatersLeft2.SetActive(false);
                AbundanceOfFishLeft.SetActive(false);
                ShipreckSalvageLeft.SetActive(false);
                grandfathersHeirloomLeft.SetActive(false);
                break;
            case 11:
                AbundanceOfFishLeft.SetActive(true);
                TopMaritimeTraderLeft2.SetActive(false);
                LifeElixerLeft.SetActive(false);
                MermaidsHeartLeft.SetActive(false);
                TopMaritimeTraderLeft.SetActive(false);
                FishFrenzyLeft.SetActive(false);
                TheFishersTressureLeft.SetActive(false);
                HappySoulsLeft.SetActive(false);
                EnchantedWatersLeft.SetActive(false);
                EnchantedWatersLeft2.SetActive(false);
                EnchantedWatersLeft3.SetActive(false);
                ShipreckSalvageLeft.SetActive(false);
                grandfathersHeirloomLeft.SetActive(false);
                break;
            case 12:
                ShipreckSalvageLeft.SetActive(true);
                AbundanceOfFishLeft.SetActive(false);
                TopMaritimeTraderLeft2.SetActive(false);
                LifeElixerLeft.SetActive(false);
                MermaidsHeartLeft.SetActive(false);
                TopMaritimeTraderLeft.SetActive(false);
                FishFrenzyLeft.SetActive(false);
                TheFishersTressureLeft.SetActive(false);
                HappySoulsLeft.SetActive(false);
                EnchantedWatersLeft.SetActive(false);
                EnchantedWatersLeft2.SetActive(false);
                EnchantedWatersLeft3.SetActive(false);
                grandfathersHeirloomLeft.SetActive(false);
                break;
            case 13:
                grandfathersHeirloomLeft.SetActive(true);
                ShipreckSalvageLeft.SetActive(false);
                AbundanceOfFishLeft.SetActive(false);
                TopMaritimeTraderLeft2.SetActive(false);
                LifeElixerLeft.SetActive(false);
                MermaidsHeartLeft.SetActive(false);
                TopMaritimeTraderLeft.SetActive(false);
                FishFrenzyLeft.SetActive(false);
                TheFishersTressureLeft.SetActive(false);
                HappySoulsLeft.SetActive(false);
                EnchantedWatersLeft.SetActive(false);
                EnchantedWatersLeft2.SetActive(false);
                EnchantedWatersLeft3.SetActive(false);
                break;
        }
        

        switch (cardRangeForRight)
        {
            case 1:
                MermaidsHeartRight.SetActive(true);
                MermaidsHeartRight2.SetActive(false);
                TopMaritimeTraderRight.SetActive(false);
                FishFrenzyRight.SetActive(false);
                HighSeasGamblerRight.SetActive(false);
                BlowUpThePirtaeShipRight.SetActive(false);
                HappySoulsRight.SetActive(false);
                EnchantedWatersRight.SetActive(false);
                EnchantedWatersRight2.SetActive(false);
                AbundanceOfFishRight.SetActive(false);
                SeaGuardsRight.SetActive(false);
                SeafaringCousinsRight.SetActive(false);
                SeafaringCousinsRight2.SetActive(false);
                GrandfathersHeirloomRight.SetActive(false);
                break;
            case 2:
                MermaidsHeartRight2.SetActive(true);
                MermaidsHeartRight.SetActive(false);
                TopMaritimeTraderRight.SetActive(false);
                FishFrenzyRight.SetActive(false);
                HighSeasGamblerRight.SetActive(false);
                BlowUpThePirtaeShipRight.SetActive(false);
                HappySoulsRight.SetActive(false);
                EnchantedWatersRight.SetActive(false);
                EnchantedWatersRight2.SetActive(false);
                AbundanceOfFishRight.SetActive(false);
                SeaGuardsRight.SetActive(false);
                SeafaringCousinsRight.SetActive(false);
                SeafaringCousinsRight2.SetActive(false);
                GrandfathersHeirloomRight.SetActive(false);
                break;
            case 3:
                TopMaritimeTraderRight.SetActive(true);
                MermaidsHeartRight.SetActive(false);
                MermaidsHeartRight2.SetActive(false);
                FishFrenzyRight.SetActive(false);
                HighSeasGamblerRight.SetActive(false);
                BlowUpThePirtaeShipRight.SetActive(false);
                HappySoulsRight.SetActive(false);
                EnchantedWatersRight.SetActive(false);
                EnchantedWatersRight2.SetActive(false);
                AbundanceOfFishRight.SetActive(false);
                SeaGuardsRight.SetActive(false);
                SeafaringCousinsRight.SetActive(false);
                SeafaringCousinsRight2.SetActive(false);
                GrandfathersHeirloomRight.SetActive(false);
                break;
            case 4:
                FishFrenzyRight.SetActive(true);
                MermaidsHeartRight.SetActive(false);
                MermaidsHeartRight2.SetActive(false);
                TopMaritimeTraderRight.SetActive(false);
               
                HighSeasGamblerRight.SetActive(false);
                BlowUpThePirtaeShipRight.SetActive(false);
                HappySoulsRight.SetActive(false);
                EnchantedWatersRight.SetActive(false);
                EnchantedWatersRight2.SetActive(false);
                AbundanceOfFishRight.SetActive(false);
                SeaGuardsRight.SetActive(false);
                SeafaringCousinsRight.SetActive(false);
                SeafaringCousinsRight2.SetActive(false);
                GrandfathersHeirloomRight.SetActive(false);
                break;
            case 5:
                HighSeasGamblerRight.SetActive(true);
                MermaidsHeartRight.SetActive(false);
                MermaidsHeartRight2.SetActive(false);
                TopMaritimeTraderRight.SetActive(false);
                FishFrenzyRight.SetActive(false);
                BlowUpThePirtaeShipRight.SetActive(false);
                HappySoulsRight.SetActive(false);
                EnchantedWatersRight.SetActive(false);
                EnchantedWatersRight2.SetActive(false);
                AbundanceOfFishRight.SetActive(false);
                SeaGuardsRight.SetActive(false);
                SeafaringCousinsRight.SetActive(false);
                SeafaringCousinsRight2.SetActive(false);
                GrandfathersHeirloomRight.SetActive(false);
                break;
            case 6:
                BlowUpThePirtaeShipRight.SetActive(true);
                MermaidsHeartRight.SetActive(false);
                MermaidsHeartRight2.SetActive(false);
                TopMaritimeTraderRight.SetActive(false);
                FishFrenzyRight.SetActive(false);
                HighSeasGamblerRight.SetActive(false);
                HappySoulsRight.SetActive(false);
                EnchantedWatersRight.SetActive(false);
                EnchantedWatersRight2.SetActive(false);
                AbundanceOfFishRight.SetActive(false);
                SeaGuardsRight.SetActive(false);
                SeafaringCousinsRight.SetActive(false);
                SeafaringCousinsRight2.SetActive(false);
                GrandfathersHeirloomRight.SetActive(false);
                break;
            case 7:
                HappySoulsRight.SetActive(true);
                MermaidsHeartRight.SetActive(false);
                MermaidsHeartRight2.SetActive(false);
                TopMaritimeTraderRight.SetActive(false);
                FishFrenzyRight.SetActive(false);
                HighSeasGamblerRight.SetActive(false);
                BlowUpThePirtaeShipRight.SetActive(false);
                EnchantedWatersRight.SetActive(false);
                EnchantedWatersRight2.SetActive(false);
                AbundanceOfFishRight.SetActive(false);
                SeaGuardsRight.SetActive(false);
                SeafaringCousinsRight.SetActive(false);
                SeafaringCousinsRight2.SetActive(false);
                GrandfathersHeirloomRight.SetActive(false);
                break;
            case 8:
                EnchantedWatersRight.SetActive(true);
                MermaidsHeartRight.SetActive(false);
                MermaidsHeartRight2.SetActive(false);
                TopMaritimeTraderRight.SetActive(false);
                FishFrenzyRight.SetActive(false);
                HighSeasGamblerRight.SetActive(false);
                BlowUpThePirtaeShipRight.SetActive(false);
                HappySoulsRight.SetActive(false);
                EnchantedWatersRight2.SetActive(false);
                AbundanceOfFishRight.SetActive(false);
                SeaGuardsRight.SetActive(false);
                SeafaringCousinsRight.SetActive(false);
                SeafaringCousinsRight2.SetActive(false);
                GrandfathersHeirloomRight.SetActive(false);
                break;
            case 9:
                EnchantedWatersRight2.SetActive(true);
                MermaidsHeartRight.SetActive(false);
                MermaidsHeartRight2.SetActive(false);
                TopMaritimeTraderRight.SetActive(false);
                FishFrenzyRight.SetActive(false);
                HighSeasGamblerRight.SetActive(false);
                BlowUpThePirtaeShipRight.SetActive(false);
                HappySoulsRight.SetActive(false);
                EnchantedWatersRight.SetActive(false);
                AbundanceOfFishRight.SetActive(false);
                SeaGuardsRight.SetActive(false);
                SeafaringCousinsRight.SetActive(false);
                SeafaringCousinsRight2.SetActive(false);
                GrandfathersHeirloomRight.SetActive(false);
                break;
            case 10:
                AbundanceOfFishRight.SetActive(true);
                MermaidsHeartRight.SetActive(false);
                MermaidsHeartRight2.SetActive(false);
                TopMaritimeTraderRight.SetActive(false);
                FishFrenzyRight.SetActive(false);
                HighSeasGamblerRight.SetActive(false);
                BlowUpThePirtaeShipRight.SetActive(false);
                HappySoulsRight.SetActive(false);
                EnchantedWatersRight.SetActive(false);
                EnchantedWatersRight2.SetActive(false);
                SeaGuardsRight.SetActive(false);
                SeafaringCousinsRight.SetActive(false);
                SeafaringCousinsRight2.SetActive(false);
                GrandfathersHeirloomRight.SetActive(false);
                break;
            case 11:
                SeaGuardsRight.SetActive(true);
                MermaidsHeartRight.SetActive(false);
                MermaidsHeartRight2.SetActive(false);
                TopMaritimeTraderRight.SetActive(false);
                FishFrenzyRight.SetActive(false);
                HighSeasGamblerRight.SetActive(false);
                BlowUpThePirtaeShipRight.SetActive(false);
                HappySoulsRight.SetActive(false);
                EnchantedWatersRight.SetActive(false);
                EnchantedWatersRight2.SetActive(false);
                AbundanceOfFishRight.SetActive(false);
                SeafaringCousinsRight.SetActive(false);
                SeafaringCousinsRight2.SetActive(false);
                GrandfathersHeirloomRight.SetActive(false);
                break;
            case 12:
                SeafaringCousinsRight.SetActive(true);
                SeaGuardsRight.SetActive(false);
                MermaidsHeartRight.SetActive(false);
                MermaidsHeartRight2.SetActive(false);
                TopMaritimeTraderRight.SetActive(false);
                FishFrenzyRight.SetActive(false);
                HighSeasGamblerRight.SetActive(false);
                BlowUpThePirtaeShipRight.SetActive(false);
                HappySoulsRight.SetActive(false);
                EnchantedWatersRight.SetActive(false);
                EnchantedWatersRight2.SetActive(false);
                AbundanceOfFishRight.SetActive(false);
                SeafaringCousinsRight2.SetActive(false);
                GrandfathersHeirloomRight.SetActive(false);
                break;
            case 13:
                SeafaringCousinsRight2.SetActive(true);
                SeafaringCousinsRight.SetActive(false);
                SeaGuardsRight.SetActive(false);
                MermaidsHeartRight.SetActive(false);
                MermaidsHeartRight2.SetActive(false);
                TopMaritimeTraderRight.SetActive(false);
                FishFrenzyRight.SetActive(false);
                HighSeasGamblerRight.SetActive(false);
                BlowUpThePirtaeShipRight.SetActive(false);
                HappySoulsRight.SetActive(false);
                EnchantedWatersRight.SetActive(false);
                EnchantedWatersRight2.SetActive(false);
                AbundanceOfFishRight.SetActive(false);
                GrandfathersHeirloomRight.SetActive(false);
                break;
            case 14:
                GrandfathersHeirloomRight.SetActive(true);
                SeafaringCousinsRight.SetActive(false);
                SeaGuardsRight.SetActive(false);
                MermaidsHeartRight.SetActive(false);
                MermaidsHeartRight2.SetActive(false);
                TopMaritimeTraderRight.SetActive(false);
                FishFrenzyRight.SetActive(false);
                HighSeasGamblerRight.SetActive(false);
                BlowUpThePirtaeShipRight.SetActive(false);
                HappySoulsRight.SetActive(false);
                EnchantedWatersRight.SetActive(false);
                EnchantedWatersRight2.SetActive(false);
                AbundanceOfFishRight.SetActive(false);
                SeafaringCousinsRight2.SetActive(false);
                break;
        }
            
    }
}
