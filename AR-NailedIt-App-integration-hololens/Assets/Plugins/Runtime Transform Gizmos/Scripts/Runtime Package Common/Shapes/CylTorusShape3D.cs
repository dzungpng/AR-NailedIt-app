using UnityEngine;
using System.Collections.Generic;

namespace RTG
{
    public class CylTorusShape3D : Shape3D
    {
        private float _coreRadius = 1.0f;
        private float _hrzRadius = 1.0f;
        private float _vertRadius = 1.0f;
        private Vector3 _center = ModelCenter;
        private Quaternion _rotation = Quaternion.identity;
        private TorusEpsilon _epsilon = new TorusEpsilon();

        public float CoreRadius { get { return _coreRadius; } set { _coreRadius = Mathf.Abs(value); } }
        public float HrzRadius { get { return _hrzRadius; } set { _hrzRadius = Mathf.Abs(value); } }
        public float VertRadius { get { return _vertRadius; } set { _vertRadius = Mathf.Abs(value); } }
        public Vector3 Bottom { get { return _center - Up * VertRadius; } set { _center = value + Up * VertRadius; } }
        public Vector3 Top { get { return _center + Up * VertRadius; } set { _center = value - Up * VertRadius; } }
        public Vector3 Center { get { return _center; } set { _center = value; } }
        public Quaternion Rotation { get { return _rotation; } set { _rotation = value; } }
        public Vector3 Right { get { return _rotation * ModelRight; } }
        public Vector3 Up { get { return _rotation * ModelUp; } }
        public Vector3 Look { get { return _rotation * ModelLook; } }
        public TorusEpsilon Epsilon { get { return _epsilon; } set { _epsilon = value; } }
        public float CylHrzRadiusEps { get { return _epsilon.CylHrzRadius; } set { _epsilon.CylHrzRadius = Mathf.Abs(value); } }
        public float CylVertRadiusEps { get { return _epsilon.CylVertRadius; } set { _epsilon.CylVertRadius = Mathf.Abs(value); } }

        public static Vector3 ModelRight { get { return Vector3.right; } }
        public static Vector3 ModelUp { get { return Vector3.up; } }
        public static Vector3 ModelLook { get { return Vector3.forward; } }
        public static Vector3 ModelCenter { get { return Vector3.zero; } }

        public override bool Raycast(Ray ray, out float t)
        {
            return TorusMath.RaycastCylindrical(ray, out t, _center, _coreRadius, _hrzRadius, _vertRadius, _rotation, _epsilon);
        }

        public override void RenderSolid()
        {
            Graphics.DrawMeshNow(MeshPool.Get.UnitCylindricalTorus, Matrix4x4.TRS(_center, _rotation, Vector3.one));
        }

        public override void RenderWire()
        {
            Mesh circleMesh = MeshPool.Get.UnitWireCircleXY;

            // Outer rings
            Vector3 circleScale = new Vector3(_coreRadius + _hrzRadius, _coreRadius + _hrzRadius, 1.0f);
            Quaternion circleRotation = Quaternion.Euler(90.0f, 0.0f, 0.0f);
            Graphics.DrawMeshNow(circleMesh, Matrix4x4.TRS(Bottom, _rotation * circleRotation, circleScale));
            Graphics.DrawMeshNow(circleMesh, Matrix4x4.TRS(Top, _rotation * circleRotation, circleScale));

            // Inner rings
            circleScale = new Vector3(_coreRadius - _hrzRadius, _coreRadius - _hrzRadius, 1.0f);
            Graphics.DrawMeshNow(circleMesh, Matrix4x4.TRS(Bottom, _rotation * circleRotation, circleScale));
            Graphics.DrawMeshNow(circleMesh, Matrix4x4.TRS(Top, _rotation * circleRotation, circleScale));
        }

        public List<Vector3> GetHrzExtents()
        {
            return TorusMath.Calc3DHrzExtentPoints(_center, _coreRadius, _hrzRadius, _rotation);
        }

        public override AABB GetAABB()
        {
            return TorusMath.CalcCylAABB(_center, _coreRadius, _hrzRadius, _vertRadius, _rotation);
        }
    }
}
