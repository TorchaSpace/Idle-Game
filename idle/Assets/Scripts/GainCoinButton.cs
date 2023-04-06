using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using BreakInfinity;
using static BreakInfinity.BigDouble;

public class GainCoinButton : MonoBehaviour, IDataPersistence
{
    public GameObject upgradeMenu;

    public Animator balıkcı;
    

    public HealthAndPriates healthAndPriates;
    public SellFish sellFish;
    public DefencePowerController defencePowerController;
    public SoldierCountScript soldierCountScript;

    public bool isSailed = false;
    public GameObject pauseButton;
    public GameObject goButton;
    public Animator paddeling;
    public Animator küçüktekne;


    [Header("UI")]
    public Text coinText;
    public Text clickValueText;
    public Text coinPerSecText;

    public Text clickUpgrade1Text;

    public Text productionUpgrade1Text;

    public Text gemsText;
    public Text gemBoostText;
    public Text gemsToGetText;

    public BigDouble clickUpgrade1Cost;
    public BigDouble clickUpgrade1Level;
    public BigDouble clickUpgrade1Power;

    public BigDouble productionUpgrade1Cost;
    public BigDouble productionUpgrade1Level;
    public BigDouble productionUpgrade1Power;

    public BigDouble coins;
    public BigDouble coinsClickValue;

    public BigDouble coinsPerSec;

    public static BigDouble cardUpgrades = 0;

    public BigDouble gems;
    public BigDouble gemBoost;
    public BigDouble gemsToGet;

    public void PauseButton()
    {
        isSailed = false;
        pauseButton.SetActive(false);
        goButton.SetActive(true);
    }

    public void GoButton()
    {
        isSailed = true;
        pauseButton.SetActive(true);
        goButton.SetActive(false);
    }

    private void Start()
    {
        paddeling.Play("sit");
    }

    public void LoadData(GameData data)
    {
        this.coins = data.fish;
        this.coinsClickValue = data.coinsClickValue;
        this.coinsPerSec = data.coinsPerSec;
        cardUpgrades = data.cardUpgrades;

        this.gems = data.gems;
        this.gemBoost = data.gemBoost;

        this.clickUpgrade1Cost = data.clickUpgrade1Cost;
        this.clickUpgrade1Level = data.clickUpgrade1Level;
        this.clickUpgrade1Power = data.clickUpgrade1Power;

        this.productionUpgrade1Cost = data.productionUpgrade1Cost;
        this.productionUpgrade1Power = data.productionUpgrade1Power;
        this.productionUpgrade1Level = data.productionUpgrade1Level;
        
    }
    

    public void SaveData(ref GameData data)
    {
        data.fish = this.coins;
        data.coinsClickValue = this.coinsClickValue;
        data.coinsPerSec = this.coinsPerSec;
        data.cardUpgrades = cardUpgrades;

        data.gems = this.gems;
        data.gemBoost = this.gemBoost;

        data.clickUpgrade1Cost = this.clickUpgrade1Cost;
        data.clickUpgrade1Level = this.clickUpgrade1Level;
        data.clickUpgrade1Power = this.clickUpgrade1Power;

        data.productionUpgrade1Cost = this.productionUpgrade1Cost;

        data.productionUpgrade1Power = this.productionUpgrade1Power;
        data.productionUpgrade1Level = this.productionUpgrade1Level;
        
    }

 
    IEnumerator Tıkladı()
    {
        yield return new WaitForSeconds(5f);
        balıkcı.SetBool("isClicked", false);

    }

    private static List<string> nFormat = new List<string>();

    void Awake()
    {
        nFormat.Add("");
        nFormat.Add("K");
        nFormat.Add("M");
        nFormat.Add("B");
        nFormat.Add("T");
        nFormat.Add("Ka");
        nFormat.Add("Ke");
        nFormat.Add("Se");
        nFormat.Add("Sek");
    }

    public static string Double2dec(BigDouble value)
    {
        int num = 0;
        while (value >= 1000d)
        {
            num++;
            value /= 1000d;
        }
        return value.ToString("F1") + nFormat[num];
    }

    private void Update()
    {
        gemsToGet = 150 * Sqrt(coins / 1e7);
        gemBoost = (gems * 0.05) + 1;

        gemsToGetText.text = "Prestige:\n+" + Double2dec(gemsToGet) + " Gems";
        gemsText.text = Double2dec(gems);
        gemBoostText.text = gemBoost.ToString("F2") + "x boost";

        if (isSailed)
        {
            coinsPerSec = (productionUpgrade1Level * productionUpgrade1Power) + gemBoost + cardUpgrades;

            paddeling.Play("go");
            küçüktekne.enabled = true;
        }
        else
        {
            coinsPerSec = 0;
            paddeling.Play("sit");
            küçüktekne.enabled = false;
        }

        if (Input.GetMouseButtonDown(0))
        {
            balıkcı.SetBool("isClicked", true);
            StopAllCoroutines();

        }
        if (Input.GetMouseButtonUp(0))
        {
            StartCoroutine(Tıkladı());
        }

        coinText.text = Double2dec(coins);

        clickValueText.text = "+" + Double2dec(coinsClickValue) + " Click";
        coinText.text = Double2dec(coins);
        coinPerSecText.text = Double2dec(coinsPerSec) + " fish/s";

        #region ClickUpgradeText
        string clickUpgrade1CostString;
        clickUpgrade1CostString = Double2dec(clickUpgrade1Cost);

        string clickUpgrade1LevelString;
        clickUpgrade1LevelString = Double2dec(clickUpgrade1Level);

        clickUpgrade1Text.text = "Click Upgrade 1\nCost: " + clickUpgrade1CostString + " Fish\nPower: +" + clickUpgrade1Power + " Fish\nLevel: " + clickUpgrade1LevelString;
        #endregion

        #region ProductionUpgradeText
        string productionUpgrade1CostString;
        productionUpgrade1CostString = Double2dec(productionUpgrade1Cost);

        string productionUpgrade1LevelString;
        productionUpgrade1LevelString = Double2dec(productionUpgrade1Level);

        productionUpgrade1Text.text = "Production Upgrade 1\nCost: " + productionUpgrade1CostString + " Fish\nPower: +" + productionUpgrade1Power +  " Fish\nLevel " + productionUpgrade1LevelString;
        #endregion

        coins += coinsPerSec * Time.deltaTime;

    
    }


    public void BuyUpgrade(string upgradeID)
    {
        switch (upgradeID)
        {
            case "P1":
                if (coins >= productionUpgrade1Cost)
                {
                    productionUpgrade1Level++;
                    coins -= productionUpgrade1Cost;
                    productionUpgrade1Cost *= 3.7f;
                    productionUpgrade1Power *= 1.5;
                }
                break;
            case "C1":
                if (coins >= clickUpgrade1Cost)
                {
                    clickUpgrade1Level++;
                    coins -= clickUpgrade1Cost;
                    clickUpgrade1Cost *= 3.7;
                    coinsClickValue += clickUpgrade1Power;
                    clickUpgrade1Power *= 1.5;
                }
                break;
        }
    }

    public void Click()
    {
        coins += coinsClickValue;

    }

    

    public void Prestige()
    {
        if(coins > 1000)
        {
            clickUpgrade1Power *= gemBoost;
            productionUpgrade1Power *= gemBoost;

            healthAndPriates.inGameTime = 0;
            coins = 0;
            coinsClickValue = 1;
            coinsPerSec = 0;

            clickUpgrade1Cost = 100;

            productionUpgrade1Cost = 500;
     

            clickUpgrade1Level = 0;

            productionUpgrade1Level = 0;


            defencePowerController.defenceUpgrade1Level = 0;
            defencePowerController.defenceUpgrade1Power *= gemBoost;
            defencePowerController.defenceUpgrade1Cost = 100;

            soldierCountScript.soldierUpgrade1Level = 0;
            soldierCountScript.soldierUpgrade1Power *= gemBoost;
            soldierCountScript.soldierUpgrade1Cost = 500;

            sellFish.gainedCoin = 0;

            gems += gemsToGet;
        }
    }

    public void FullReset()
    {
        healthAndPriates.inGameTime = 0;

        gemBoost = 1;

        gems = 0;

        coins = 0;
        coinsClickValue = 1;
        coinsPerSec = 0;
        cardUpgrades = 0;

        clickUpgrade1Cost = 100;

        productionUpgrade1Cost = 500;
   

        clickUpgrade1Level = 0;
        clickUpgrade1Power = 1;

        productionUpgrade1Level = 0;
        productionUpgrade1Power = 1;
  

        healthAndPriates.reducedPower = 0;
        healthAndPriates.GuardCount = 1;
        healthAndPriates.defencePower = 1;
        healthAndPriates.takenMoney = 5000;

        sellFish.gainedCoin = 0;

        defencePowerController.defenceUpgrade1Level = 0;

        defencePowerController.defenceUpgrade1Cost = 100;

        soldierCountScript.soldierUpgrade1Level = 0;
        soldierCountScript.soldierUpgrade1Power = 1;
        soldierCountScript.soldierUpgrade1Cost = 500;

        healthAndPriates.health = 3;
    }

    public void OpenUpgradeMenu()
    {
        upgradeMenu.SetActive(!upgradeMenu.activeSelf);
    }
}

