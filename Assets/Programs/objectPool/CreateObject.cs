using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Pool;

public class CreateObject : MonoBehaviour
{
    ObjectPool<GameObject> objectPool;

    void Awake()
    {
        // オブジェクトプールを作成
        objectPool = new ObjectPool<GameObject>(() =>
        {
            // 生成処理
            var cube = GameObject.CreatePrimitive(PrimitiveType.Cube);
            var pooled = cube.AddComponent<PooledObject>();
            pooled.objectPool = objectPool;
            return cube;
        },
        target =>
        {
            // 再利用処理
            //print("GET");
            target.SetActive(true);
        },
        target =>
        {
            // プールに戻す処理
            //print("RELEASE");
            target.SetActive(false);
        },
        target =>
        {
            // プールの許容量を超えた場合の破棄処理
            //print("DESTROY");
            Destroy(target);
        }, true, 100, 1000);
    }

    void Update()
    {
        // プールから取得
        // プールのオブジェクトが足りない場合は生成
        GameObject pooledObject = objectPool.Get();
        pooledObject.transform.position = transform.position + transform.forward * 20 + Random.onUnitSphere * 5;
        //pooledObject.transform.rotation = Random.rotation;

        // オブジェクトプールを使わない場合の通常の生成
        // Instantiate(pooledObject, transform.position + transform.forward * 20 + Random.onUnitSphere * 5, Random.rotation);
    }

    void OnGUI()
    {
        // 情報表示
        GUILayout.Label("Pool Size: " + objectPool.CountInactive);
        GUILayout.Label("Active Size: " + objectPool.CountActive);
    }
}
