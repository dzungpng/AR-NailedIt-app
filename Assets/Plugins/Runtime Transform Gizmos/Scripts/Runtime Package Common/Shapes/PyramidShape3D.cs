using UnityEngine;
using System.Collections.Generic;

namespace RTG
{
    public class PyramidShape3D : Shape3D
    {
        private Vector3 _baseCenter = ModelBaseCenter;
        private float _baseWidth = 1.0f;
        private float _baseDepth = 1.0f;
        private float _height = 1.0f;
        private Quaternion _rotation = Quaternion.identity;
        private PyramidEpsilon _epsilon = new PyramidEpsilon();

        public Vector3 BaseCenter { get { return _baseCenter; } set { _baseCenter = value; } }
        public Vector3 Tip { get { return _baseCenter + CentralAxis * _height; } set { _baseCenter = value - CentralAxis * _height; } }
        public Quaternion Rotation { get { return _rotation; } set { _rotation = value; } }
        public float BaseWidth { get { return _baseWidth; } set { _baseWidth = Mathf.Abs(value); } }
        public float BaseDepth { get { return _baseDepth; } set { _baseDepth = Mathf.Abs(value); } }
        public float Height { get { return _height; } set { _height = Mathf.Abs(value); } }
        public PyramidEpsilon Epsilon { get { return _epsilon; } set { _epsilon = value; } }
        public float PtContainEps { get { return _epsilon.PtContainEps; } set { _epsilon.PtContainEps = value; } }
        public Vector3 CentralAxis { get { return _rotation * ModelUp; } }
        public Vector3 Right { get { return _rotation * ModelRight; } }
        public Vector3 Up { get { return _rotation * ModelUp; } }
        public Vector3 Look { get { return _rotation * ModelLook; } }

        public static Vector3 ModelRight { get { return Vector3.right; } }
        public static Vector3 ModelUp { get { return Vector3.up; } }
        public static Vector3 ModelLook { get { return Vector3.forward; } }
        public static Vector3 ModelBaseCenter { get { return Vector3.zero; } }

        public void PointTipAlongAxis(Vector3 axis)
        {
            Rotation = QuaternionEx.FromToRotation3D(CentralAxis, axis, Right) * _rotation;
        }

        public override void RenderSolid()
        {
            Graphics.DrawMeshNow(MeshPool.Get.UnitPyramid, Matrix4x4.TRS(_baseCenter, _rotation, new Vector3(_baseWidth, _height, _baseDepth)));
        }

        public override void RenderWire()
        {
            Graphics.DrawMeshNow(MeshPool.Get.UnitWirePyramid, Matrix4x4.TRS(_baseCenter, _rotation, new Vector3(_baseWidth, _height, _baseDepth)));
        }

        public List<Vector3> GetBaseCornerPoints()
        {
            return PyramidMath.CalcBaseCornerPoints(_baseCenter, _baseWidth, _baseDepth, _rotation);
        }

        public override AABB GetAABB()
        {
            var pyramidPoints = GetBaseCornerPoints();
            pyramidPoints.Add(Tip);

            return new AABB(pyramidPoints);
        }

        public override bool Raycast(Ray ray, out float t)
        {
            return PyramidMath.Raycast(ray, out t, _baseCenter, _baseWidth, _baseDepth, _height, _rotation);
        }

        public bool ContainsPoint(Vector3 point)
        {
            return PyramidMath.ContainsPoint(point, _baseCenter, _baseWidth, _baseDepth, _height, _rotation, _epsilon);
        }
    }
}
