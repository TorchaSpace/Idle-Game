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
        fishToCoinCountText.text = GainCoinButton.Double2dec(gainCoinButton.coins) + " Fish" + " = " + GainCoinButton.Double2dec(gainCoinButton.coins * 0.3f) + " Coin";
        coinText.text = GainCoinButton.Double2dec(gainedCoin);
    }

    public void ApllySell()
    {
        gainedCoin += gainCoinButton.coins * 0.3f;

        gainCoinButton.coins = 0;       
    }
}
