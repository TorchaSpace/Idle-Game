using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class SellFish : MonoBehaviour
{
    public GameObject sellScreen;

    public Text fishToCoinCountText;

    public GainCoinButton gainCoinButton;

    public double gainedCoin;
    public Text coinText;

    public void GemıButton()
    {
        sellScreen.SetActive(!sellScreen.activeSelf);
    }

    private void Update()
    {
        if(gainedCoin > 1000)
        {
            var exponent = (System.Math.Floor(System.Math.Log10(System.Math.Abs(gainedCoin))));
            var mantissa = (gainedCoin / System.Math.Pow(10, exponent));
            coinText.text = "Coins: " + mantissa.ToString("F2") + "e" + exponent;
        }
        else
        {
            coinText.text = "Coins: " + gainedCoin.ToString("F0");

        }

        if (gainCoinButton.coins > 1000)
        {
            var exponent = (System.Math.Floor(System.Math.Log10(System.Math.Abs(gainCoinButton.coins))));
            var mantissa = (gainCoinButton.coins / System.Math.Pow(10, exponent));
            fishToCoinCountText.text = "Fish: " + mantissa.ToString("F2") + "e" + exponent + " = " + "Coins: " + (gainCoinButton.coins * 0.5f).ToString("F0");
        }
        else
        {
            fishToCoinCountText.text = "Fishes: " + gainCoinButton.coins.ToString("F0") + " = " + "Coins: " + (gainCoinButton.coins * 0.5f).ToString("F0");
        }
    }

    public void ApllySell()
    {
        gainedCoin += gainCoinButton.coins * 0.5f;

        gainCoinButton.coins = 0;       
    }
}
