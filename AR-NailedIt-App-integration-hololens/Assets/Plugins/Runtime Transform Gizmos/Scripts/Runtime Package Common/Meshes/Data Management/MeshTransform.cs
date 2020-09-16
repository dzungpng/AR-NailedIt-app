using UnityEngine;

namespace RTG
{
    public class MeshTransform
    {
        private Vector3 _position;
        private Quaternion _rotation;
        private Vector3 _scale;

        public Vector3 Position { get { return _position; } }
        public Quaternion Rotation { get { return _rotation; } }
        public Vector3 Scale { get { return _scale; } }

        public MeshTransform(Vector3 position, Quaternion rotation, Vector3 scale)
        {
            _position = position;
            _rotation = rotation;
            _scale = scale;
        }

        public MeshTransform(Transform transform)
        {
            _position = transform.position;
            _rotation = transform.rotation;
            _scale = transform.lossyScale;
        }

        public OBB InverseTransformOBB(OBB obb)
        {
            OBB meshSpaceOBB = new OBB(InverseTransformPoint(obb.Center), Vector3.Scale(_scale.GetInverse(), obb.Size));
            meshSpaceOBB.Rotation = Quaternion.Inverse(_rotation) * obb.Rotation;

            return meshSpaceOBB;
        }

        public Vector3 TransformPoint(Vector3 point)
        {
            return (_rotation * Vector3.Scale(point, _scale)) + _position;
        }

        public Vector3 InverseTransformPoint(Vector3 point)
        {
            return Vector3.Scale(_scale.GetInverse(), Quaternion.Inverse(_rotation) * (point - _position));
        }
    }
}
