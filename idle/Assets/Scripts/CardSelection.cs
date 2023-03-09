using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class CardSelection : MonoBehaviour
{
    public GainCoinButton gainCoinButton;

    public Button newCardButton;

    public int reachedFish;

    private void Update()
    {
        if(gainCoinButton.coins >= reachedFish)
        {
            newCardButton.interactable = true;
        }
        else
        {
            newCardButton.interactable = false;

        }
    }
}
