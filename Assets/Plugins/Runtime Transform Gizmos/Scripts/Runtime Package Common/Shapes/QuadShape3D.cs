using System;
using System.Collections.Generic;
using UnityEngine;

namespace RTG
{
    public class QuadShape3D : Shape3D
    {
        [Flags]
        public enum WireEdgeFlags
        {
            None = 0,
            Top = 1,
            Right = 2,
            Bottom = 4,
            Left = 8,
            All = Top | Right | Bottom | Left
        }

        public class WireRenderDescriptor
        {
            private WireEdgeFlags _wireEdgeFlags = WireEdgeFlags.All;
            public WireEdgeFlags WireEdgeFlags { get { return _wireEdgeFlags; } set { _wireEdgeFlags = value; } }
        }

        private Shape3DRaycastMode _raycastMode = Shape3DRaycastMode.Solid;
        private Vector3 _center = ModelCenter;
        private Vector2 _size = Vector2.one;
        private Quaternion _rotation = Quaternion.identity;
        private QuadEpsilon _epsilon = new QuadEpsilon();
        private WireRenderDescriptor _wireRenderDesc = new WireRenderDescriptor();

        public Vector3 Center { get { return _center; } set { _center = value; } }
        public Vector2 Size { get { return _size; } set { _size = value.Abs(); } }
        public float Width { get { return _size.x; } set { _size.x = Mathf.Abs(value); } }
        public float Height { get { return _size.y; } set { _size.y = Mathf.Abs(value); } }
        public Quaternion Rotation { get { return _rotation; } set { _rotation = value; } }
        public Vector3 Right { get { return _rotation * ModelRight; } }
        public Vector3 Up { get { return _rotation * ModelUp; } }
        public Vector3 Look { get { return _rotation * ModelLook; } }
        public Vector3 Normal { get { return Look; } }
        public QuadEpsilon Epsilon { get { return _epsilon; } set { _epsilon = value; } }
        public Vector2 SizeEps { get { return _epsilon.SizeEps; } set { _epsilon.SizeEps = value; } }
        public float WidthEps { get { return _epsilon.WidthEps; } set { _epsilon.WidthEps = value; } }
        public float HeightEps { get { return _epsilon.HeightEps; } set { _epsilon.HeightEps = value; } }
        public float ExtrudeEps { get { return _epsilon.ExtrudeEps; } set { _epsilon.ExtrudeEps = value; } }
        public float WireEps { get { return _epsilon.WireEps; } set { _epsilon.WireEps = value;} }
        public Shape3DRaycastMode RaycastMode { get { return _raycastMode; } set { _raycastMode = value; } }
        public WireRenderDescriptor WireRenderDesc { get { return _wireRenderDesc; } }

        public static Vector3 ModelRight { get { return Vector3.right; } }
        public static Vector3 ModelUp { get { return Vector3.up; } }
        public static Vector3 ModelLook { get { return Vector3.forward; } }
        public static Vector3 ModelCenter { get { return Vector3.zero; } }
        public static Vector3 ModelNormal { get { return ModelLook; } }

        public void AlignNormal(Vector3 axis)
        {
            Rotation = QuaternionEx.FromToRotation3D(Normal, axis, Right) * _rotation;
        }

        public void AlignRight(Vector3 axis)
        {
            Rotation = QuaternionEx.FromToRotation3D(Right, axis, Up) * _rotation;
        }

        public void AlignUp(Vector3 axis)
        {
            Rotation = QuaternionEx.FromToRotation3D(Up, axis, Normal) * _rotation;
        }

        public List<Vector3> GetCornerPoints()
        {
            return QuadMath.Calc3DQuadCornerPoints(_center, _size, _rotation);
        }

        public Vector3 GetCornerPosition(QuadCorner quadCorner)
        {
            return QuadMath.Calc3DQuadCorner(_center, _size, _rotation, quadCorner);
        }

        public void SetCornerPointPosition(QuadCorner quadCorner, Vector3 position)
        {
            Vector3 cornerPt = GetCornerPosition(quadCorner);
            Vector3 toCenter = _center - cornerPt;

            Center = position + toCenter;
        }

        public override void RenderSolid()
        {
            Graphics.DrawMeshNow(MeshPool.Get.UnitQuadXY, Matrix4x4.TRS(_center, _rotation, new Vector3(_size.x, _size.y, 1.0f)));
        }

        public override void RenderWire()
        {
            if(_wireRenderDesc.WireEdgeFlags == WireEdgeFlags.All)
                Graphics.DrawMeshNow(MeshPool.Get.UnitWireQuadXY, Matrix4x4.TRS(_center, _rotation, new Vector3(_size.x, _size.y, 1.0f)));
            else
            {
                var cornerPoints = GetCornerPoints();
                if ((_wireRenderDesc.WireEdgeFlags & WireEdgeFlags.Top) != 0)
                    GLRenderer.DrawLine3D(cornerPoints[(int)QuadCorner.TopLeft], cornerPoints[(int)QuadCorner.TopRight]);
                if ((_wireRenderDesc.WireEdgeFlags & WireEdgeFlags.Right) != 0)
                    GLRenderer.DrawLine3D(cornerPoints[(int)QuadCorner.TopRight], cornerPoints[(int)QuadCorner.BottomRight]);
                if ((_wireRenderDesc.WireEdgeFlags & WireEdgeFlags.Bottom) != 0)
                    GLRenderer.DrawLine3D(cornerPoints[(int)QuadCorner.BottomRight], cornerPoints[(int)QuadCorner.BottomLeft]);
                if ((_wireRenderDesc.WireEdgeFlags & WireEdgeFlags.Left) != 0)
                    GLRenderer.DrawLine3D(cornerPoints[(int)QuadCorner.BottomLeft], cornerPoints[(int)QuadCorner.TopLeft]);
            }
        }

        public override bool Raycast(Ray ray, out float t)
        {
            if (_raycastMode == Shape3DRaycastMode.Solid)
                return QuadMath.Raycast(ray, out t, _center, _size.x, _size.y, Right, Up, _epsilon);
            else return RaycastWire(ray, out t);
        }

        public override bool RaycastWire(Ray ray, out float t)
        {
            return QuadMath.RaycastWire(ray, out t, _center, _size.x, _size.y, Right, Up, _epsilon);
        }

        public bool ContainsPoint(Vector3 point, bool checkOnPlane)
        {
            return QuadMath.Contains3DPoint(point, checkOnPlane, _center, _size.x, _size.y, Right, Up, _epsilon);
        }

        public List<Vector3> GetCorners()
        {
            return QuadMath.Calc3DQuadCornerPoints(_center, _size, _rotation);
        }

        public override AABB GetAABB()
        {
            return new AABB(GetCorners());
        }
    }
}
