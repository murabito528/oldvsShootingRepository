using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class WLSViewerController : MonoBehaviour
{
    Text text;

    void Start()
    {
        text = GetComponent<Text>();
    }

    public void winlose()
    {
        if (EnemyController.Life < 0)
        {
            text.text = "勝利!\n" + "スコア:" + PlayerController.score.ToString("D7") + "\n次へ";
        }
        else
        {
            text.text = "敗北...\n" + "スコア:" + PlayerController.score.ToString("D7") + "\nタイトルに戻る";
        }
    }
}
