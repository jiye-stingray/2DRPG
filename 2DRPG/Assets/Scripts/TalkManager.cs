using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TalkManager : MonoBehaviour
{
    Dictionary<int, string[]> talkData;
    Dictionary<int, Sprite> portraionData;

    public Sprite[] portraitArr;
        void Awake()
        {
            talkData = new Dictionary<int, string[]>();
            portraionData = new Dictionary<int, Sprite>();
            GeneratorData();
        }

    void GeneratorData()
    {
        //TalkData
        //NPC1:1000, NPC2:2000
        ////Box:100 , Dexk:200
        talkData.Add(1000, new string[] { "�ȳ�?:0", 
                                          "�̰��� ó�� �Ա���?:1",
                                          "�� �� �ѷ� ������ ��:0"});
        talkData.Add(2000, new string[] { "�̺�.:1", 
                                          "�� ȣ���� ���� �Ƹ�����?:0", 
                                          "ȣ�� �� �ٴڿ� ���𰡰� ������ ���� ���� ����.:1" });

        talkData.Add(3000, new string[] { "����� ���� ���ڴ�." });
        talkData.Add(4000, new string[] { "������ ������� �ִ� å���̴�." });

        //Quest Talk
        talkData.Add(10 + 1000, new string[] { "� ��:0",
                                          "�� ������ ���� ������ �ִٴµ�:1",
                                          "������ ȣ���� ���� �絵�� �˷��ٲ���:0"});
        talkData.Add(11 + 1000, new string[] { "���� �� ã�Ҿ�?:0" });

        talkData.Add(11 + 2000, new string[] { "�̺�.:1",
                                          "�� ȣ���� ������ ������ �°ž�?:0",
                                          "�׷� �� �� �ϳ� ���ָ� �����ٵ�...:1",
                                           "�� �� �տ� ������ ������ �� �ֿ���:0"});

        talkData.Add(20 + 1000, new string[] { "�絵�� ����?:1",
                                               "���� �긮�� �ٴϸ� ��¾��!:3",
                                               "���߿� �絵���� �Ѹ��� ����߰ھ�!:3"});

        talkData.Add(20 + 2000, new string[] { "ã���� �� ��������:1"});
        talkData.Add(20 + 5000, new string[] { "��ó���� ������ ã�Ҵ�." });

        talkData.Add(21 + 2000, new string[] { "��, ã���༭ ����.:2" });

        //Portration Data
        //0:Normal, 1:Speak, 2:Happy, 3:Angry
        portraionData.Add(1000 + 0, portraitArr[0]);
        portraionData.Add(1000 + 1, portraitArr[1]);
        portraionData.Add(1000 + 2, portraitArr[2]);
        portraionData.Add(1000 + 3, portraitArr[3]);
        portraionData.Add(2000 + 0, portraitArr[4]);
        portraionData.Add(2000 + 1, portraitArr[5]);
        portraionData.Add(2000 + 2, portraitArr[6]);
        portraionData.Add(2000 + 3, portraitArr[7]);
    }

    public string GetTalk(int id, int talkindex)
    {
        if (!talkData.ContainsKey(id))
        {
            if (!talkData.ContainsKey(id - id % 10))
                return GetTalk(id - id % 100, talkindex); //Get first Talk
            else
                return GetTalk(id - id % 10, talkindex); //Get First Quest Talk
        }
        if (talkindex == talkData[id].Length)
            return null;
        else 
            return talkData[id][talkindex];
    }

    public Sprite GetPortrait(int id, int portrationIndex)
    {
        return portraionData[id + portrationIndex];
    }
}
