using System;
using UnityEngine;

namespace RTG
{
    public class BoxShape3D : Shape3D
    {
        public enum WireRenderMode
        {
            Wire = 0,
            WireCorners
        }

        public class WireRenderDescriptor
        {
            private float _cornerLinePercentage = 0.2f;
            private WireRenderMode _wireMode = WireRenderMode.Wire;

            public WireRenderMode WireMode { get { return _wireMode; } set { _wireMode = value; } }
            public float CornerLinePercentage { get { return _cornerLinePercentage; } set { _cornerLinePercentage = Mathf.Clamp(value, 0.0f, 1.0f); } }
        }

        private WireRenderDescriptor _wireRenderDesc = new WireRenderDescriptor();
        private Vector3 _size = Vector3.one;
        private Vector3 _center = ModelCenter;
        private Quaternion _rotation = Quaternion.identity;
        private BoxEpsilon _epsilon = new BoxEpsilon();

        public Vector3 Size { get { return _size; } set { _size = value.Abs(); } }
        public float Width { get { return _size.x; } set { _size.x = Mathf.Abs(value); } }
        public float Height { get { return _size.y; } set { _size.y = Mathf.Abs(value); } }
        public float Depth { get { return _size.z; } set { _size.z = Mathf.Abs(value); } }
        public Vector3 Extents { get { return _size * 0.5f; } }
        public Vector3 Center { get { return _center; } set { _center = value; } }
        public BoxEpsilon Epsilon { get { return _epsilon; } set { _epsilon = value; } }
        public Vector3 SizeEps { get { return _epsilon.SizeEps; } set { _epsilon.SizeEps = value; } }
        public float WidthEps { get { return _epsilon.WidthEps; } set { _epsilon.WidthEps = value; } }
        public float HeightEps { get { return _epsilon.HeightEps; } set { _epsilon.HeightEps = value; } }
        public float DepthEps { get { return _epsilon.DepthEps; } set { _epsilon.DepthEps = value; } }
        public Vector3 Min
        {
            get { return _center - Extents; }
            set 
            {
                Vector3 max = Max;
                _center = (value + max) * 0.5f;
                _size = max - value;
            }
        }
        public Vector3 Max
        {
            get { return _center + Extents; }
            set
            {
                Vector3 min = Min;
                _center = (value + min) * 0.5f;
                _size = value - min;
            }
        }
        public Quaternion Rotation { get { return _rotation; } set { _rotation = QuaternionEx.Normalize(value); } }
        public Vector3 Right { get { return _rotation * ModelRight; } }
        public Vector3 Up { get { return _rotation * ModelUp; } }
        public Vector3 Look { get { return _rotation * ModelLook; } }
        public WireRenderDescriptor WireRenderDesc { get { return _wireRenderDesc; } }

        public static Vector3 ModelRight { get { return Vector3.right; } }
        public static Vector3 ModelUp { get { return Vector3.up; } }
        public static Vector3 ModelLook { get { return Vector3.forward; } }
        public static Vector3 ModelCenter { get { return Vector3.zero; } }

        public void FromOBB(OBB obb)
        {
            Center = obb.Center;
            Size = obb.Size;
            Rotation = obb.Rotation;
        }

        public float GetSizeAlongDirection(Vector3 direction)
        {
            return Vector3Ex.AbsDot(direction, _rotation * _size);
        }

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

        public Vector3 GetFaceCenter(BoxFace boxFace)
        {
            return BoxMath.CalcBoxFaceCenter(_center, _size, _rotation, boxFace);
        }

        public void SetFaceCenter(BoxFace boxFace, Vector3 newCenter)
        {
            Vector3 currentFaceCenter = BoxMath.CalcBoxFaceCenter(_center, _size, _rotation, boxFace);
            Center = newCenter + (_center - currentFaceCenter);
        }

        public override void RenderSolid()
        {
            Graphics.DrawMeshNow(MeshPool.Get.UnitBox, Matrix4x4.TRS(_center, _rotation, _size));
        }

        public override void RenderWire()
        {
            OBB obb = new OBB(GetAABB(), _rotation);
            if (_wireRenderDesc.WireMode == WireRenderMode.Wire) GraphicsEx.DrawWireBox(obb);
            else GraphicsEx.DrawWireCornerBox(obb, _wireRenderDesc.CornerLinePercentage);
        }

        public override bool Raycast(Ray ray, out float t)
        {
            return BoxMath.Raycast(ray, out t, _center, _size, _rotation, _epsilon);
        }

        public override AABB GetAABB()
        {
            return new AABB(_center, _size);
        }

        public OBB GetOBB()
        {
            return new OBB(GetAABB(), _rotation);
        }

        public bool ContainsPoint(Vector3 point)
        {
            return BoxMath.ContainsPoint(point, _center, _size, _rotation, _epsilon);
        }
    }
}
