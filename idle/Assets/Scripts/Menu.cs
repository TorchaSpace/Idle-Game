using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class Menu : MonoBehaviour
{
    private void Start()
    {
        StartCoroutine(Kontrolcu());
    }

    IEnumerator Kontrolcu()
    {
        yield return new WaitForSeconds(9.3f);
        SceneManager.LoadSceneAsync(1);
    }
}
