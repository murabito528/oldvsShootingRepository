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

            // �I�u�W�F�N�g���v�[���ɓ����
            objectPool.Release(gameObject);

            // �I�u�W�F�N�g�v�[�����g��Ȃ��ꍇ�̒ʏ�̔j��
            // Destroy(gameObject);
        }
        time += Time.deltaTime;
    }
}
