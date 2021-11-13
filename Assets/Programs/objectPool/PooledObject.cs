using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Pool;

public class PooledObject : MonoBehaviour
{
    public ObjectPool<GameObject> objectPool;
    float time;

    void Update()
    {
        if (time > 1)
        {
            time = 0;

            // オブジェクトをプールに入れる
            objectPool.Release(gameObject);

            // オブジェクトプールを使わない場合の通常の破棄
            // Destroy(gameObject);
        }
        time += Time.deltaTime;
    }
}
