using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class GainCoinButton : MonoBehaviour
{
    public Text coinText;

    public double coins;

    private void Start()
    {
        coins = 0;
    }

    private void Update()
    {
        coinText.text = "Coins: " + coins; 
    }

    public void Click()
    {
        coins += 1;
    }
}
