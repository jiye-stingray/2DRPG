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
        talkData.Add(1000, new string[] { "안녕?:0", 
                                          "이곳에 처음 왔구나?:1",
                                          "한 번 둘러 보도록 해:0"});
        talkData.Add(2000, new string[] { "이봐.:1", 
                                          "이 호수는 정말 아름답지?:0", 
                                          "호수 밑 바닥에 무언가가 숨겨져 있을 지도 몰라.:1" });

        talkData.Add(3000, new string[] { "평범한 나무 상자다." });
        talkData.Add(4000, new string[] { "누군가 사용한적 있는 책상이다." });

        //Quest Talk
        talkData.Add(10 + 1000, new string[] { "어서 와:0",
                                          "이 마을에 놀라운 전설이 있다는데:1",
                                          "오른쪽 호수에 가면 루도가 알려줄꺼야:0"});
        talkData.Add(11 + 1000, new string[] { "아직 못 찾았어?:0" });

        talkData.Add(11 + 2000, new string[] { "이봐.:1",
                                          "이 호수의 전설을 들으러 온거야?:0",
                                          "그럼 일 좀 하나 해주면 좋을텐데...:1",
                                           "내 집 앞에 떨어진 동전을 좀 주워줘:0"});

        talkData.Add(20 + 1000, new string[] { "루도의 동전?:1",
                                               "돈을 흘리고 다니면 어쩐담!:3",
                                               "나중에 루도에게 한마디 해줘야겠어!:3"});

        talkData.Add(20 + 2000, new string[] { "찾으면 꼭 가져다줘:1"});
        talkData.Add(20 + 5000, new string[] { "근처에서 동전을 찾았다." });

        talkData.Add(21 + 2000, new string[] { "엇, 찾아줘서 고마워.:2" });

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
