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
            text.text = "����!\n" + "�X�R�A:" + PlayerController.score.ToString("D7") + "\n����";
        }
        else
        {
            text.text = "�s�k...\n" + "�X�R�A:" + PlayerController.score.ToString("D7") + "\n�^�C�g���ɖ߂�";
        }
    }
}
