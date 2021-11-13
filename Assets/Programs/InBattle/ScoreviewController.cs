using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ScoreviewController : MonoBehaviour
{
    Text Stext;
    // Start is called before the first frame update
    void Start()
    {
        Stext = GetComponent<Text>();
        Stext.text = "Lv0";
    }

    void Update()
    {

        Stext.text = "Score:" + PlayerController.score.ToString("D7");
        
    }
}
