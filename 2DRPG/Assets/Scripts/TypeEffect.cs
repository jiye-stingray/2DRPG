using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class TypeEffect : MonoBehaviour
{

    public GameObject EndCursor;
    public bool isAnim;
    public int CharPerSeconds;


    Text msgText;
    AudioSource audioSource;
    string targetMsg;
    int index;
    float interval;
    void Awake()
    {
        msgText = GetComponent<Text>();
        audioSource = GetComponent<AudioSource>();
    }
    public void setMsg(string msg)
    {
        if (isAnim)
        {
            CancelInvoke();
            msgText.text = targetMsg;
            EffectEnd();
        }
        else
        {
            targetMsg = msg;
            EffectStart();
        }
        
    }

    void EffectStart()
    {
        msgText.text = "";
        index = 0;
        EndCursor.SetActive(false);

        //Start Animation
        interval = 1.0f / CharPerSeconds;
        Debug.Log(interval);
        isAnim = true;
        Invoke("Effecting", interval);
    }
    void Effecting()
    {

        if (msgText.text == targetMsg)
        {
            EffectEnd();
            return;
        }
        msgText.text += targetMsg[index];
        
        //Sound
        if(targetMsg[index] != ' ' || targetMsg[index] != '.')
            audioSource.Play();

        index++;

        //Recursive
        Invoke("Effecting", interval);

    }
    void EffectEnd()
    {
        isAnim = false;
        EndCursor.SetActive(true);
    }
    
}
