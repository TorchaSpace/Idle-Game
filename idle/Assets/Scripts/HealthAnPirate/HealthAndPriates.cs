using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class HealthAndPriates : MonoBehaviour
{
    public GainCoinButton gainCoinButton;

    public static int health = 3;

    public float pirateArriveTime = 10;

    public int korsanSayısı;

    public GameObject pirateShip;

    public GameObject pirateGameUI;

    public Text winChanceText;

    public int defencePower = 1;
    public int GuardCount = 1;
    public int korsanPower;

    public int a;
    public int b;

    public float winChance;
    public int c;

    public int reducedPower = 0;

    public SellFish sellFish;

    public GameObject can1;
    public GameObject can2;
    public GameObject can3;

    public AudioSource pirateSong;
    public AudioSource paraSayma;
    public AudioSource InGameMusic;
    public AudioSource BattleMusic;

    public Text winLoseText;

    public int takenMoney = 5000;
    public Text moneyPayText;

    private void Update()
    {
        korsanPower = GuardCount + defencePower - reducedPower;

        pirateArriveTime -= Time.deltaTime;

        if (pirateArriveTime <= 0)
        {
            pirateShip.SetActive(true);
            StartCoroutine(PlayGame());
            InGameMusic.enabled = false;
            
        }

        if(health == 0)
        {
            //GameOver();
        }

        if (pirateGameUI.activeSelf)
        {
            moneyPayText.text = "PAY! " + takenMoney + " COINS";
        }
        else
        {
            pirateGameUI.SetActive(false);
        }

        
        if(gainCoinButton.coins < 10000 && !pirateGameUI.activeSelf && pirateArriveTime <= 0)
        {
            korsanSayısı = Random.Range(1, 6);
            pirateArriveTime = Random.Range(600f, 1200f);
        }

        if(gainCoinButton.coins >= 10000 && gainCoinButton.coins < 100000 && !pirateGameUI.activeSelf && pirateArriveTime <= 0)
        {
            korsanSayısı = Random.Range(10, 16);
            pirateArriveTime = Random.Range(600f, 1200f);
        }

        if(gainCoinButton.coins >= 100000 && !pirateGameUI.activeSelf && pirateArriveTime <= 0)
        {
            korsanSayısı = Random.Range(20, 26);
            pirateArriveTime = Random.Range(600f, 1200f);
        }

        

        if (pirateGameUI.activeSelf)
        {
            

            a = defencePower * GuardCount;
            b = korsanSayısı * korsanPower;
            winChance = (a - b) * 100 / (a + b);
            winChanceText.text = "Win Cahnce: " + "%" + winChance.ToString("F0");
            
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

    public void Attack()
    {
        
        BattleMusic.Play();


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
    }

    IEnumerator YouLose()
    {
        yield return new WaitForSeconds(10f);
        pirateShip.GetComponent<Animator>().Play("GoneAnim");

        StartCoroutine(ShipDeactive());
        winLoseText.enabled = true;
        health--;
        if(GuardCount > 0)
        {
            GuardCount--;
        }
    }
}
