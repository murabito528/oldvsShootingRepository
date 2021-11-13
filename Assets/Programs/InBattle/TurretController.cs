using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TurretController : MonoBehaviour
{
    public GameObject bullet;
    public GameObject Ebullet;

    //GameObject target;

    int lifetime;

    int pattern;

    bool enemy = false;

    // Start is called before the first frame update
    void Start()
    {

        if (this.transform.position.y < 0)
        {
            enemy = true;
            pattern = PlayerController.RApattern;
            var target = GameObject.FindGameObjectWithTag("TeamPlayer").transform.position;
            switch (pattern)
            {
                case 0:
                    break;
                case 1:
                    Vector3 vec = (target - this.transform.position);
                    this.transform.rotation = Quaternion.FromToRotation(Vector3.up, vec);
                    transform.Rotate(0, 0, 90);
                    lifetime = 15;
                    //Debug.Log(target);
                    break;
            }
        }
        else
        { 
            pattern = EnemyController.RApattern;
            var target = GameObject.FindGameObjectWithTag("TeamEnemy").transform.position;
            switch (pattern)
            {
                case 0:
                    break;
                case 1:
                    Vector3 vec = (target - this.transform.position);
                    this.transform.rotation = Quaternion.FromToRotation(Vector3.up, vec);
                    transform.Rotate(0, 0, 90);
                    lifetime = 15;
                    //Debug.Log(target);
                    break;
            }
        }

    }

    // Update is called once per frame
    void Update()
    {
        if (pattern == 1)
        {
            if (enemy == false)
            {
                if (lifetime % (10 - (Mathf.Floor(PlayerController.lv / 4f))) == 0) Instantiate(bullet, this.transform.position, transform.rotation);
            }
            else
            {
                if (lifetime % (10 - (Mathf.Floor(EnemyController.lv / 4f))) == 0) Instantiate(Ebullet, this.transform.position, transform.rotation);
            }
        }
        if (lifetime <= 0)
        {
            Destroy(this.gameObject);
        }
        lifetime--;
    }
}
