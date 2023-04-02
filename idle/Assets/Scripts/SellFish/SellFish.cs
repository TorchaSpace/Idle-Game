using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using BreakInfinity;
using static BreakInfinity.BigDouble;

public class SellFish : MonoBehaviour, IDataPersistence
{
    public GameObject sellScreen;

    public Text fishToCoinCountText;

    public GainCoinButton gainCoinButton;

    public BigDouble gainedCoin;
    public Text coinText;

    public void GemıButton()
    {
        sellScreen.SetActive(!sellScreen.activeSelf);
    }

    public void LoadData(GameData data)
    {
        this.gainedCoin = data.gainedCoin;
    }

    public void SaveData(ref GameData data)
    {
        data.gainedCoin = this.gainedCoin;
    }

    private void Update()
    {
        if(gainedCoin > 1000)
        {
            var exponent = (Floor(Log10(Abs(gainedCoin))));
            var mantissa = (gainedCoin / Pow(10, exponent));
            coinText.text = mantissa.ToString("F2") + "e" + exponent;
        }
        else
        {
            coinText.text = gainedCoin.ToString("F0");

        }

        if (gainCoinButton.coins > 1000)
        {
            var exponent = (Floor(Log10(Abs(gainCoinButton.coins))));
            var mantissa = (gainCoinButton.coins / Pow(10, exponent));
            fishToCoinCountText.text = "Fish: " + mantissa.ToString("F2") + "e" + exponent + " = " + "Coins: " + (gainCoinButton.coins * 0.3f).ToString("F0");
        }
        else
        {
            fishToCoinCountText.text = "Fishes: " + gainCoinButton.coins.ToString("F0") + " = " + "Coins: " + (gainCoinButton.coins * 0.3f).ToString("F0");
        }
    }

    public void ApllySell()
    {
        gainedCoin += gainCoinButton.coins * 0.3f;

        gainCoinButton.coins = 0;       
    }
}
