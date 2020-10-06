using UnityEngine;
using System.Collections.Generic;

namespace RTG
{
    public class TriangPrismShape3D : Shape3D
    {
        private Vector3 _baseCenter = ModelBaseCenter;
        private float _width = 1.0f;
        private float _height = 1.0f;
        private float _depth = 1.0f;
        private Quaternion _rotation = Quaternion.identity;
        private PrismEpsilon _epsilon = new PrismEpsilon();

        public Vector3 BaseCenter { get { return _baseCenter; } set { _baseCenter = value; } }
        public Vector3 TopCenter { get { return _baseCenter + CentralAxis * _height; } set { _baseCenter = value - CentralAxis * _height; } }
        public Vector3 FrontCenter { get { return Center - Look * _depth * 0.5f; } set { _baseCenter = value + 0.5f * (Look * _depth - CentralAxis * _height); } }
        public Vector3 Center { get { return _baseCenter + CentralAxis * _height * 0.5f; } set { _baseCenter = value - CentralAxis * _height * 0.5f; } }
        public Vector3 MidTip { get { return BaseCenter + 0.5f * (CentralAxis * _height + Look * _depth); } set { _baseCenter = value - 0.5f * (Look * _depth - CentralAxis * _height); } }
        public float Width { get { return _width; } set { _width = Mathf.Abs(value); } }
        public float Height { get { return _height; } set { _height = Mathf.Abs(value); } }
        public float Depth { get { return _depth; } set { _depth = Mathf.Abs(value); } }
        public PrismEpsilon Epsilon { get { return _epsilon; } set { _epsilon = value; } }
        public float PtContainEps { get { return _epsilon.PtContainEps; } set { _epsilon.PtContainEps = value; } }
        public Quaternion Rotation { get { return _rotation; } set { _rotation = value; } }
        public Vector3 CentralAxis { get { return _rotation * ModelUp; } }
        public Vector3 Right { get { return _rotation * ModelRight; } }
        public Vector3 Up { get { return _rotation * ModelUp; } }
        public Vector3 Look { get { return _rotation * ModelLook; } }

        public static Vector3 ModelRight { get { return Vector3.right; } }
        public static Vector3 ModelUp { get { return Vector3.up; } }
        public static Vector3 ModelLook { get { return Vector3.forward; } }
        public static Vector3 ModelBaseCenter { get { return Vector3.zero; } }

        public void AlignWidth(Vector3 axis)
        {
            Rotation = QuaternionEx.FromToRotation3D(Right, axis, Up) * _rotation;
        }

        public void AlignHeight(Vector3 axis)
        {
            Rotation = QuaternionEx.FromToRotation3D(Up, axis, Right) * _rotation;
        }

        public void AlignDepth(Vector3 axis)
        {
            Rotation = QuaternionEx.FromToRotation3D(Look, axis, Right) * _rotation;
        }

        public override void RenderSolid()
        {
            Graphics.DrawMeshNow(MeshPool.Get.UnitTriangularPrism, Matrix4x4.TRS(_baseCenter, _rotation, new Vector3(_width, _height, _depth)));
        }

        public override void RenderWire()
        {
            Graphics.DrawMeshNow(MeshPool.Get.UnitWireTriangularPrism, Matrix4x4.TRS(_baseCenter, _rotation, new Vector3(_width, _height, _depth)));
        }

        public void MakeEquilateral(float sideLength)
        {
            _width = sideLength;

            float halfWidth = 0.5f * _width;
            _depth = Mathf.Sqrt(sideLength * sideLength - halfWidth * halfWidth);
        }

        public override bool Raycast(Ray ray, out float t)
        {
            return PrismMath.RaycastTriangular(ray, out t, _baseCenter, _width, _depth, _width, _depth, _height, _rotation);
        }

        public bool ContainsPoint(Vector3 point)
        {
            return PrismMath.ContainsPoint(point, _baseCenter, _width, _depth, _width, _depth, _height, _rotation, _epsilon);
        }

        public override AABB GetAABB()
        {
            return new AABB(PrismMath.CalcTriangPrismCornerPoints(_baseCenter, _width, _depth, _width, _depth, _height, _rotation));
        }
    }
}
