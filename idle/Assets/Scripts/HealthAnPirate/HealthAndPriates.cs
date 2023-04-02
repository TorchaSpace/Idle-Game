 using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using BreakInfinity;
using static BreakInfinity.BigDouble;


public class HealthAndPriates : MonoBehaviour, IDataPersistence
{
    public Text guardCountText;
    public Text defencePowerText;

    public GainCoinButton gainCoinButton;

    public int health;

    public float pirateArriveTime = 240f;

    public float korsanSayısı;

    public GameObject pirateShip;

    public GameObject pirateGameUI;

    public Text winChanceText;

    public BigDouble defencePower;
    public BigDouble GuardCount;
    public BigDouble korsanPower;

    public BigDouble a;
    public BigDouble b;

    public BigDouble winChance;
    public BigDouble c;

    public BigDouble reducedPower;

    public SellFish sellFish;

    public GameObject can1;
    public GameObject can2;
    public GameObject can3;

    public AudioSource pirateSong;
    public AudioSource paraSayma;
    public AudioSource InGameMusic;
    public AudioSource BattleMusic;

    public Text winLoseText;

    public BigDouble takenMoney;
    public Text moneyPayText;

    public double inGameTime;

    float minPirate;
    float maxPirate;

    public string NotationMethod(BigDouble x, string y)
    {
        if (x > 100000)
        {
            var exponent = Floor(Log10(Abs(x)));
            var mantissa = x / Pow(10, exponent);
            return mantissa.ToString(format: "F2") + "e" + exponent;

        }
        return x.ToString(y);

    }

    private void Update()
    {
        minPirate = (float)inGameTime * 0.01f;
        maxPirate = (float)inGameTime * .2f;

        inGameTime += Time.deltaTime;

        if(GuardCount < 0)
        {
            GuardCount = 0;
        }

        if(defencePower < 0)
        {
            defencePower = 0;
        }

        guardCountText.text = GuardCount.ToString("F0");
        defencePowerText.text = defencePower.ToString();

        korsanPower = (GuardCount + defencePower - reducedPower) + (inGameTime * 0.01f);

        pirateArriveTime -= Time.deltaTime;

        if (pirateArriveTime <= 0)
        {
            korsanSayısı = Random.Range(minPirate, maxPirate);
            pirateShip.SetActive(true);
            StartCoroutine(PlayGame());
            InGameMusic.enabled = false;
            pirateArriveTime = Random.Range(240f, 420f);      
        }

        korsanSayısı = Mathf.Round(korsanSayısı);

        if (health == 0)
        {
            //GameOver();
        }

        if (pirateGameUI.activeSelf)
        {
            string moneyPayTextString;
            moneyPayTextString = NotationMethod(takenMoney, y: "F0");
            moneyPayText.text = "PAY! " + moneyPayTextString + " COINS";
        }
        else
        {
            pirateGameUI.SetActive(false);
        }

        
        
        

        if (pirateGameUI.activeSelf)
        {
            

            a = defencePower * GuardCount;
            b = korsanSayısı * korsanPower;
            winChance = (a - b) * 100 / (a + b);
            winChanceText.text = "Win Chance: " + "%" + winChance.ToString("F0");
            
        }

        if(health == 3)
        {
            can1.SetActive(true);
            can2.SetActive(true);
            can3.SetActive(true);
        }

        if(health == 2)
        {
            can1.SetActive(false);
        }

        if(health == 1)
        {
            can1.SetActive(false);
            can2.SetActive(false);
        }

        if(health == 0)
        {
            can1.SetActive(false);
            can2.SetActive(false);
            can3.SetActive(false);
        }
    }

    public void LoadData(GameData data)
    {
        this.defencePower = data.defencePower;
        this.GuardCount = data.GuardCount;
        this.reducedPower = data.reducePower;
        this.takenMoney = data.takenMoney;
        health = data.health;
        this.inGameTime = data.inGameTime;
    }

    public void SaveData(ref GameData data)
    {
        data.defencePower = this.defencePower;
        data.GuardCount = this.GuardCount;
        data.reducePower = this.reducedPower;
        data.takenMoney = this.takenMoney;
        data.health = health;
        data.inGameTime = this.inGameTime;
    }

    public void Attack()
    {
        
        BattleMusic.Play();

        takenMoney *= 2;

        if (winChance <= 10)
        {
            c = Random.Range(1, 3);
        }

        if (winChance > 10 && winChance <= 20)
        {
            c = Random.Range(1, 4);
        }
 
        if (winChance > 20 && winChance <= 30)
        {
            c = Random.Range(1, 6);
        }

        if (winChance > 30 && winChance <= 40)
        {
            c = Random.Range(1, 8);
        }

        if (winChance > 40 && winChance <= 50)
        {
            c = Random.Range(1, 10);
        }

        if (winChance > 50 && winChance <= 60)
        {
            c = Random.Range(1, 12);
        }

        if (winChance > 60 && winChance <= 70)
        {
            c = Random.Range(1, 14);
        }

        if (winChance > 70 && winChance <= 80)
        {
            c = Random.Range(1, 16);
        }

        if (winChance > 80 && winChance <= 90)
        {
            c = Random.Range(1, 18);
        }

        if (winChance > 90 && winChance <= 100)
        {
            c = Random.Range(1, 20);
        }

        if (a < b || ((a - b / a + b) * 100) <= 0 || c == 2)
        {
            winLoseText.text = "You Lost!";
            pirateGameUI.SetActive(false);
            Time.timeScale = 1;
            StartCoroutine(YouLose());
        }
        else
        {
            winLoseText.text = "You Won!";
            pirateGameUI.SetActive(false);
            StartCoroutine(YouWon());
            Time.timeScale = 1;
        }
    }

    public void Pay()
    {
        paraSayma.Play();
        pirateGameUI.SetActive(false);
        pirateShip.GetComponent<Animator>().Play("GoneAnim");
        StartCoroutine(ShipDeactive());

        

        if (sellFish.gainedCoin < takenMoney)
        {
            health--;
            GuardCount--;
           
        }
        else
        {
            sellFish.gainedCoin -= takenMoney;

            if(sellFish.gainedCoin <= 0)
            {
                sellFish.gainedCoin = 0;
            }
            
        }
        Time.timeScale = 1;
        takenMoney *= 2;
    }

    IEnumerator PlayGame()
    {
        pirateSong.Play();
        yield return new WaitForSeconds(45f);
        pirateGameUI.SetActive(true);
        Time.timeScale = 0;
    }

    IEnumerator ShipDeactive()
    {
        yield return new WaitForSeconds(10);
        pirateSong.Stop();
        InGameMusic.enabled = true;

        pirateShip.SetActive(false);
        yield return null;
    }


    IEnumerator YouWon()
    {
        yield return new WaitForSeconds(10f);
        StartCoroutine(ShipDeactive());
        pirateShip.GetComponent<Animator>().Play("GoneAnim");

        winLoseText.enabled = true;

        defencePower -= korsanPower;

        GuardCount -= korsanSayısı;
    }

    IEnumerator YouLose()
    {
        yield return new WaitForSeconds(10f);
        pirateShip.GetComponent<Animator>().Play("GoneAnim");

        StartCoroutine(ShipDeactive());
        winLoseText.enabled = true;
        health--;
        GuardCount -= korsanSayısı;
        defencePower -= korsanPower;

        
    }

    
}
