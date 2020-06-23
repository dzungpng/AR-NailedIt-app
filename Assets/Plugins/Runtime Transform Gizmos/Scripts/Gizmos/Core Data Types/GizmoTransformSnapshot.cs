using UnityEngine;
using System.Collections.Generic;

namespace RTG
{
    public class LocalGizmoTransformSnapshot
    {
        private GizmoTransform _transform;
        private GizmoTransform _parentTransform;
        private Vector3 _localPosition3D;
        private Quaternion _localRotation3D;
        private Vector2 _localPosition2D;
        private float _localRotation2D_Degrees;

        public GizmoTransform Transform { get { return _transform; } }

        public static List<LocalGizmoTransformSnapshot> GetSnapshotCollection(IEnumerable<Gizmo> gizmos)
        {
            if (gizmos == null) return new List<LocalGizmoTransformSnapshot>();

            var localTransformSnapshots = new List<LocalGizmoTransformSnapshot>(20);
            foreach (var gizmo in gizmos)
            {
                var snapshot = new LocalGizmoTransformSnapshot();
                snapshot.Snapshot(gizmo.Transform);
                localTransformSnapshots.Add(snapshot);
            }

            return localTransformSnapshots;
        }

        public void Snapshot(GizmoTransform transform)
        {
            if (transform == null) return;

            _transform = transform;
            _parentTransform = transform.Parent;
            _localPosition3D = transform.LocalPosition3D;
            _localRotation3D = transform.LocalRotation3D;
            _localPosition2D = transform.LocalPosition2D;
            _localRotation2D_Degrees = transform.LocalRotation2DDegrees;
        }

        public void Apply()
        {
            if (_transform == null) return;

            if (_parentTransform != null)
            {
                _transform.LocalPosition3D = _localPosition3D;
                _transform.LocalRotation3D = _localRotation3D;
                _transform.LocalPosition2D = _localPosition2D;
                _transform.LocalRotation2DDegrees = _localRotation2D_Degrees;
            }
            else
            {
                _transform.Position3D = _localPosition3D;
                _transform.Rotation3D = _localRotation3D;
                _transform.Position2D = _localPosition2D;
                _transform.Rotation2DDegrees = _localRotation2D_Degrees;
            }
        }
    }
}