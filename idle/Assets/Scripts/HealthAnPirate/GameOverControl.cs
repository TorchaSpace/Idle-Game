using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class GameOverControl : MonoBehaviour
{
    public GameObject gameOverScreen;
    public GainCoinButton gainCoinButton;
    public HealthAndPriates HealthAndPriates;

    public GameObject image;

    private void Update()
    {
        if(HealthAndPriates.health <= 0)
        {
            gameOverScreen.SetActive(true);
        }
        else
        {
            gameOverScreen.SetActive(false);
        }
        
    }

    public void RastartButton()
    {
        StartCoroutine(Kontrolcu());
    }

    public void BackButton()
    {
        SceneManager.LoadScene(0);
    }


    IEnumerator Kontrolcu()
    {
        image.GetComponent<Animator>().Play("FadeIn");
        yield return new WaitForSeconds(2f);
        gainCoinButton.FullReset();
        image.SetActive(false);
    }

   
}
