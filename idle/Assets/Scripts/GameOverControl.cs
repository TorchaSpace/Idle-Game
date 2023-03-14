using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class GameOverControl : MonoBehaviour
{
    public GameObject gameOverScreen;

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
        HealthAndPriates.health = 3;
        SceneManager.LoadScene(0);
    }

    public void BackButton()
    {
        SceneManager.LoadScene(0);
    }

}
