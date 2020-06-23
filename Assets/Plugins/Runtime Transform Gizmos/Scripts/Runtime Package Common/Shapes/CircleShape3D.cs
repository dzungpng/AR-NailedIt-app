using System.Collections.Generic;
using UnityEngine;

namespace RTG
{
    public class CircleShape3D : Shape3D
    {
        private Vector3 _center = ModelCenter;
        private float _radius = 1.0f;
        private Quaternion _rotation = Quaternion.identity;
        private CircleEpsilon _epsilon = new CircleEpsilon();
        private Shape3DRaycastMode _raycastMode = Shape3DRaycastMode.Solid;

        public Vector3 Center { get { return _center; } set { _center = value; } }
        public float Radius { get { return _radius; } set { _radius = Mathf.Abs(value); } }
        public Quaternion Rotation { get { return _rotation; } set { _rotation = value; } }
        public Vector3 Right { get { return _rotation * ModelRight; } }
        public Vector3 Up { get { return _rotation * ModelUp; } }
        public Vector3 Look { get { return _rotation * ModelLook; } }
        public Vector3 Normal { get { return Look; } }
        public CircleEpsilon Epsilon { get { return _epsilon; } set { _epsilon = value; } }
        public float RadiusEps { get { return _epsilon.RadiusEps; } set { _epsilon.RadiusEps = value; } }
        public float ExtrudeEps { get { return _epsilon.ExtrudeEps; } set { _epsilon.ExtrudeEps = value; } }
        public float WireEps { get { return _epsilon.WireEps; } set { _epsilon.WireEps = value; } }
        public Shape3DRaycastMode RaycastMode { get { return _raycastMode; } set { _raycastMode = value; } }

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

        public override void RenderSolid()
        {
            Graphics.DrawMeshNow(MeshPool.Get.UnitCircleXY, Matrix4x4.TRS(_center, _rotation, Vector3Ex.FromValue(_radius)));
        }

        public override void RenderWire()
        {
            Graphics.DrawMeshNow(MeshPool.Get.UnitWireCircleXY, Matrix4x4.TRS(_center, _rotation, Vector3Ex.FromValue(_radius)));
        }

        public override bool Raycast(Ray ray, out float t)
        {
            if(_raycastMode == Shape3DRaycastMode.Solid)
                return CircleMath.Raycast(ray, out t, _center, _radius, Normal, _epsilon);
            else 
                return CircleMath.RaycastWire(ray, out t, _center, _radius, Normal, _epsilon);
        }

        public override bool RaycastWire(Ray ray, out float t)
        {
            return CircleMath.RaycastWire(ray, out t, _center, _radius, Normal, _epsilon);
        }

        public bool ContainsPoint(Vector3 point, bool checkOnPlane)
        {
            return CircleMath.Contains3DPoint(point, checkOnPlane, _center, _radius, Normal, _epsilon);
        }

        public List<Vector3> GetExtentPoints()
        {
            return CircleMath.Calc3DExtentPoints(_center, _radius, _rotation);
        }

        public override AABB GetAABB()
        {
            return new AABB(GetExtentPoints());
        }
    }
}
