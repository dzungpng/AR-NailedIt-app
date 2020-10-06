using UnityEngine;
using System.Collections.Generic;

namespace RTG
{
    public class CylinderShape3D : Shape3D
    {
        private Vector3 _baseCenter = ModelBaseCenter;
        private float _radius = 1.0f;
        private float _height = 1.0f;
        private Quaternion _rotation = Quaternion.identity;
        private CylinderEpsilon _epsilon = new CylinderEpsilon();

        public Vector3 BaseCenter { get { return _baseCenter; } set { _baseCenter = value; } }
        public Vector3 TopCenter { get { return _baseCenter + CentralAxis * _height; } set { BaseCenter = value - CentralAxis * _height; } }
        public Vector3 Center { get { return _baseCenter + CentralAxis * _height * 0.5f; } set { BaseCenter = value - CentralAxis * _height * 0.5f; } }
        public float Radius { get { return _radius; } set { _radius = Mathf.Abs(value); } }
        public float Height { get { return _height; } set { _height = Mathf.Abs(value); } }
        public Quaternion Rotation { get { return _rotation; } set { _rotation = value; } }
        public CylinderEpsilon Epsilon { get { return _epsilon; } set { _epsilon = value; } }
        public float RadiusEps { get { return _epsilon.RadiusEps; } set { _epsilon.RadiusEps = value; } }
        public float VertEps { get { return _epsilon.VertEps; } set { _epsilon.VertEps = value; } }
        public Vector3 CentralAxis { get { return _rotation * ModelUp; } }
        public Vector3 Right { get { return _rotation * ModelRight; } }
        public Vector3 Up { get { return _rotation * ModelUp; } }
        public Vector3 Look { get { return _rotation * ModelLook; } }

        public static Vector3 ModelRight { get { return Vector3.right; } }
        public static Vector3 ModelUp { get { return Vector3.up; } }
        public static Vector3 ModelLook { get { return Vector3.forward; } }
        public static Vector3 ModelBaseCenter { get { return Vector3.zero; } }

        public void AlignCentralAxis(Vector3 axis)
        {
            Rotation = QuaternionEx.FromToRotation3D(CentralAxis, axis, Look) * _rotation;
        }

        public override void RenderSolid()
        {
            Graphics.DrawMeshNow(MeshPool.Get.UnitCylinder, Matrix4x4.TRS(_baseCenter, _rotation, new Vector3(_radius, _height, _radius)));
        }

        public override void RenderWire()
        {
            Vector3 circleMeshScale = new Vector3(_radius, _radius, 1.0f);
            Quaternion circleRotation = _rotation * Quaternion.AngleAxis(90.0f, Vector3.right);
            Graphics.DrawMeshNow(MeshPool.Get.UnitWireCircleXY, Matrix4x4.TRS(_baseCenter, circleRotation, circleMeshScale));
            Graphics.DrawMeshNow(MeshPool.Get.UnitWireCircleXY, Matrix4x4.TRS(TopCenter, circleRotation, circleMeshScale));

            var bottomCapPts = GetBottomCapExtentPoints();
            var topCapPts = GetTopCapExtentPoints();
            GLRenderer.DrawLinePairs3D(new List<Vector3>() { bottomCapPts[0], topCapPts[0], bottomCapPts[1], topCapPts[1], bottomCapPts[2], topCapPts[2], bottomCapPts[3], topCapPts[3], });
        }

        public override bool Raycast(Ray ray, out float t)
        {
            return CylinderMath.Raycast(ray, out t, _baseCenter, TopCenter, _radius, _height, _epsilon);
        }

        public bool ContainsPoint(Vector3 point)
        {
            return CylinderMath.ContainsPoint(point, _baseCenter, TopCenter, _radius, _height, _epsilon);
        }

        public List<Vector3> GetBottomCapExtentPoints()
        {
            return CylinderMath.CalcExtentPoints(_baseCenter, _radius, _rotation);
        }

        public List<Vector3> GetTopCapExtentPoints()
        {
            return CylinderMath.CalcExtentPoints(TopCenter, _radius, _rotation);
        }

        public AABB GetModelAABB()
        {
            float radiusTimes2 = _radius * 2.0f;
            return new AABB(ModelBaseCenter + ModelUp * _height * 2.0f, new Vector3(radiusTimes2, _height, radiusTimes2));
        }

        public override AABB GetAABB()
        {
            AABB aabb = GetModelAABB();
            aabb.Transform(Matrix4x4.TRS(_baseCenter, _rotation, Vector3.one));

            return aabb;
        }
    }
}
