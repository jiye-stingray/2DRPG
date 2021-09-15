using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class GameManager : MonoBehaviour
{
    [Header("UI")]
    public TalkManager talkManager;
    public Animator talkPanel;
    public Image portraitImg;
    public Animator portraitAnim;
    public Sprite prevPortrait;
    public TypeEffect talk;
    public Text questText;
    public Text nameText;

    [Header("Quest")]
    public QuestManager questManager;

    public GameObject scanObject;
    public bool isAction;
    public int talkindex;

    public GameObject menuSet;
    public GameObject player;
    void Start()
    {
        GameLoad();
        questText.text = questManager.CheckQuest();
    }
    void Awake()
    {
        talkManager = GetComponentInChildren<TalkManager>();
        questManager = GetComponentInChildren<QuestManager>();
    }

    void Update()
    {
        //Sub Menu
        if (Input.GetButtonDown("Cancel"))
        {
            SubMenuActive();
        }
    }
    public void SubMenuActive()
    {
        if (menuSet.activeSelf)
            menuSet.SetActive(false);
        else
            menuSet.SetActive(true);
    }
    public void Action(GameObject scanObj)
    {
        //Get Current Data
        scanObject = scanObj;
        ObjData objdata = scanObject.GetComponent<ObjData>();
        Talk(objdata.id, objdata.isNPC);
        //Visible Talk for Action
        talkPanel.SetBool("isShow", isAction);
    }

    void Talk(int id, bool isNPC)
    {
        int questTalkIndex = 0;
        string talkData = "";
        //Set Talk Data
        if (talk.isAnim)
        {
            talk.setMsg("");
            return;
        }
        else
        {
            questTalkIndex = questManager.GetQuestTalkIndex(id);
            talkData = talkManager.GetTalk(id + questTalkIndex, talkindex);
        }
        //EndTalk
        if (talkData == null)
        {
            isAction = false;
            talkindex = 0;
            questText.text = questManager.CheckQuest(id);
            return;
        }
        //Continue Talk
        if (isNPC)
        {
            talk.setMsg(talkData.Split(':')[0]);
            //Show Portrait
            portraitImg.sprite = talkManager.GetPortrait(id, int.Parse(talkData.Split(':')[1]));
            if (id == 1000)
                nameText.text = "루나";
            else if (id == 2000)
                nameText.text = "루도";
            portraitImg.color = new Color(1, 1, 1, 1);
            //Animation Portrait
            if(prevPortrait != portraitImg.sprite)
            {
                portraitAnim.SetTrigger("doEffect");
                prevPortrait = portraitImg.sprite;
    
            }
        }
        else
        {
            nameText.text = "";
            talk.setMsg(talkData);
            //Hide Portrait
            portraitImg.color = new Color(1, 1, 1, 0);
        }
        isAction = true;
        talkindex++;    
    }

    public void GameSave()
    {
        Debug.Log("저장"); 
        PlayerPrefs.SetFloat("PlayerX", player.transform.position.x);
        PlayerPrefs.SetFloat("PlayerY", player.transform.position.y);
        PlayerPrefs.SetInt("QuestId", questManager.questId);
        PlayerPrefs.SetInt("QuestActionId", questManager.questActionIndex);
        PlayerPrefs.Save();

        menuSet.SetActive(false);

        //player.x,
        //player.y
        //Quest Id
        //Quest Action Index
    }
    public void GameLoad()
    {
        if (!PlayerPrefs.HasKey("PlayerX"))
            return;

        float x = PlayerPrefs.GetFloat("PlayerX");
        float y = PlayerPrefs.GetFloat("PlayerY");
        int questId = PlayerPrefs.GetInt("QuestId");
        int questActionIndex = PlayerPrefs.GetInt("QuestActionId");

        player.transform.position = new Vector3(x, y, 0);
        questManager.questId = questId;
        questManager.questActionIndex = questActionIndex;
        questManager.ControllObject();
    }
    public void GameExit()
    {
        Application.Quit();
    }
}
