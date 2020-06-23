using UnityEngine;
using System.Collections.Generic;

namespace RTG
{
    public class ObjectPool
    {
        public enum GrowMode
        {
            None = 0,
            Increment,
            ByAmount
        }

        private GameObject _sourceObject;

        private GrowMode _growMode = GrowMode.ByAmount;
        private int _growAmount = 50;
        private List<GameObject> _pooledObjects = new List<GameObject>(100);
        private Transform _pooledParent;

        public GrowMode PoolGrowMode { get { return _growMode; } set { _growMode = value; } }
        public int GrowAmount { get { return _growAmount; } set { _growAmount = Mathf.Max(1, value); } }

        public ObjectPool(GameObject sourceObject, int numPooled, GrowMode growMode)
        {
            _sourceObject = sourceObject;
            _growMode = growMode;
        }

        public void SetPooledObjectsParent(Transform parent)
        {
            _pooledParent = parent;
            foreach (var pooledObject in _pooledObjects)
                if (pooledObject != null && !pooledObject.activeSelf) pooledObject.transform.SetParent(parent, false);
        }

        public GameObject GetPooledObject()
        {
            foreach (var pooledObject in _pooledObjects)
            {
                if (pooledObject != null && !pooledObject.activeSelf)
                {
                    pooledObject.SetActive(true);
                    if (_pooledParent != null) pooledObject.transform.SetParent(_pooledParent, false);
                    return pooledObject;
                }
            }

            if (PoolGrowMode != GrowMode.None)
            {
                int objectIndex = _pooledObjects.Count;
                Grow();

                GameObject pooledObject = _pooledObjects[objectIndex];
                pooledObject.SetActive(true);
                if (_pooledParent != null) pooledObject.transform.SetParent(_pooledParent, false);
                return pooledObject;
            }

            return null;
        }

        public void MarkAsUnused(GameObject gameObject)
        {
            if (gameObject != null) gameObject.SetActive(false);
        }

        public void MarkAllAsUnused()
        {
            foreach(var poolObject in _pooledObjects)
            {
                MarkAsUnused(poolObject);
            }
        }

        private void Grow()
        {
            if (PoolGrowMode == GrowMode.None) return;

            if (PoolGrowMode == GrowMode.ByAmount)
            {
                for (int objectIndex = 0; objectIndex < GrowAmount; ++objectIndex)
                    CreatePooledObject();
            }
            else
            if (PoolGrowMode == GrowMode.Increment) CreatePooledObject();
        }

        private GameObject CreatePooledObject()
        {
            GameObject newPooledObject = GameObject.Instantiate(_sourceObject);
            _pooledObjects.Add(newPooledObject);

            if (_pooledParent != null) newPooledObject.transform.SetParent(_pooledParent, false);
            newPooledObject.SetActive(false);

            return newPooledObject;
        }
    }
}
