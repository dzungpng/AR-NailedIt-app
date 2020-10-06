using UnityEngine;
using System.Collections.Generic;

namespace RTG
{
    public class LocalTransformSnapshot
    {
        private Transform _transform;
        private Transform _parentTransform;
        private Vector3 _localPosition;
        private Quaternion _localRotation;
        private Vector3 _localScale;

        public Transform Transform { get { return _transform; } }

        public static List<LocalTransformSnapshot> GetSnapshotCollection(IEnumerable<GameObject> gameObjects)
        {
            if (gameObjects == null) return new List<LocalTransformSnapshot>();

            var localTransformSnapshots = new List<LocalTransformSnapshot>(20);
            foreach(var gameObject in gameObjects)
            {
                if (gameObject != null)
                {
                    var snapshot = new LocalTransformSnapshot();
                    snapshot.Snapshot(gameObject.transform);
                    localTransformSnapshots.Add(snapshot);
                }
            }

            return localTransformSnapshots;
        }

        public void Snapshot(Transform transform)
        {
            if (transform == null) return;

            _transform = transform;
            _parentTransform = transform.parent;
            _localPosition = transform.localPosition;
            _localRotation = transform.localRotation;
            _localScale = transform.localScale;
        }

        public bool SameAs(Transform transform)
        {
            return _parentTransform == transform.parent &&
                   _localPosition == transform.localPosition &&
                   _localRotation == transform.localRotation &&
                   _localScale == transform.localScale;
        }

        public void Apply()
        {
            if (_transform == null) return;

            if (_parentTransform != null)
            {
                _transform.localPosition = _localPosition;
                _transform.localRotation = _localRotation;
                _transform.localScale = _localScale;
            }
            else
            {
                _transform.position = _localPosition;
                _transform.rotation = _localRotation;
                _transform.localScale = _localScale;
            }
        }
    }

    public class WorldTransformSnapshot
    {
        private Vector3 _worldPosition;
        private Quaternion _worldRotation;
        private Vector3 _worldScale;

        public Vector3 WorldPosition { get { return _worldPosition; } }
        public Quaternion WorldRotation { get { return _worldRotation; } }
        public Vector3 WorldScale { get { return _worldScale; } }

        public void Snaphot(Transform transform)
        {
            if (transform == null) return;

            _worldPosition = transform.position;
            _worldRotation = transform.rotation;
            _worldScale = transform.lossyScale;
        }

        public bool SameAs(Transform transform)
        {
            return _worldPosition == transform.position &&
                   _worldRotation == transform.rotation &&
                   _worldScale == transform.lossyScale;
        }
    }
}
