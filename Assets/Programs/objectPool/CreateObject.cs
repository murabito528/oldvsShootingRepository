using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Pool;

public class CreateObject : MonoBehaviour
{
    ObjectPool<GameObject> objectPool;

    void Awake()
    {
        // �I�u�W�F�N�g�v�[�����쐬
        objectPool = new ObjectPool<GameObject>(() =>
        {
            // ��������
            var cube = GameObject.CreatePrimitive(PrimitiveType.Cube);
            var pooled = cube.AddComponent<PooledObject>();
            pooled.objectPool = objectPool;
            return cube;
        },
        target =>
        {
            // �ė��p����
            //print("GET");
            target.SetActive(true);
        },
        target =>
        {
            // �v�[���ɖ߂�����
            //print("RELEASE");
            target.SetActive(false);
        },
        target =>
        {
            // �v�[���̋��e�ʂ𒴂����ꍇ�̔j������
            //print("DESTROY");
            Destroy(target);
        }, true, 100, 1000);
    }

    void Update()
    {
        // �v�[������擾
        // �v�[���̃I�u�W�F�N�g������Ȃ��ꍇ�͐���
        GameObject pooledObject = objectPool.Get();
        pooledObject.transform.position = transform.position + transform.forward * 20 + Random.onUnitSphere * 5;
        //pooledObject.transform.rotation = Random.rotation;

        // �I�u�W�F�N�g�v�[�����g��Ȃ��ꍇ�̒ʏ�̐���
        // Instantiate(pooledObject, transform.position + transform.forward * 20 + Random.onUnitSphere * 5, Random.rotation);
    }

    void OnGUI()
    {
        // ���\��
        GUILayout.Label("Pool Size: " + objectPool.CountInactive);
        GUILayout.Label("Active Size: " + objectPool.CountActive);
    }
}
