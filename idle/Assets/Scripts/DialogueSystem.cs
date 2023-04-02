using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class DialogueSystem : MonoBehaviour, IDataPersistence
{
    public Text text;
    public string[] lines;
    public float textSpeed;

    public GameObject dialoguePanel;

    private int index;

    public int sayı;

    private void Start()
    {   
        text.text = string.Empty;
        StartCoroutine(Baslat());
    }

    private void Update()
    {
        if (Input.GetMouseButtonDown(0))
        {
            if(text.text == lines[index])
            {
                NextLine();
            }
            else
            {
                StopAllCoroutines();
                text.text = lines[index];
            }
        }
    }

    void StartDialogue()
    {
        index = 0;

        dialoguePanel.SetActive(true);

        StartCoroutine(TypeLine());
    }

    void NextLine()
    {
        if(index < lines.Length - 1)
        {
            index++;
            text.text = string.Empty;

            if(sayı == 0)
            {
                StartCoroutine(TypeLine());
            }
        }
        else
        {
            dialoguePanel.SetActive(false);
            sayı = 1;
        }
    }

    IEnumerator TypeLine()
    {
        foreach (char c in lines[index].ToCharArray())
        {
            text.text += c;
            yield return new WaitForSeconds(textSpeed);
        }
    }

    IEnumerator Baslat()
    {
        yield return new WaitForSeconds(1f);
        if(sayı == 0)
        {
            StartDialogue();
        }
    }

    public void LoadData(GameData data)
    {
        this.sayı = data.sayı;
    }

    public void SaveData(ref GameData data)
    {
        data.sayı = this.sayı;
    }
}
