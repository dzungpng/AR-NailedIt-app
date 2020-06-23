using System;
using UnityEngine;

namespace RTG
{
    public class SphereShape3D : Shape3D
    {
        public enum WireRenderMode
        {
            Basic = 0,
            Detailed
        }

        public class WireRenderDescriptor
        {
            private WireRenderMode _wireMode = WireRenderMode.Basic;
            private int _numDetailAxialRings = 20;
            private int _numDetailSliceRings = 20;
            private float _radiusAdd = 0.0f;

            public WireRenderMode WireMode { get { return _wireMode; } set { _wireMode = value; } }
            public int NumDetailAxialRings { get { return _numDetailAxialRings; } set { _numDetailAxialRings = Mathf.Max(2, value); } }
            public int NumDetailSliceRings { get { return _numDetailSliceRings; } set { _numDetailSliceRings = Mathf.Max(0, value); } }
            public float RadiusAdd { get { return _radiusAdd; } set { _radiusAdd = value; } }
        }

        private float _radius = 1.0f;
        private Vector3 _center = ModelCenter;
        private Quaternion _rotation = Quaternion.identity;
        private SphereEpsilon _epsilon = new SphereEpsilon();
        private WireRenderDescriptor _wireRenderDesc = new WireRenderDescriptor();

        public float Radius { get { return _radius; } set { _radius = Mathf.Abs(value); } }
        public float WireRadius { get { return _wireRenderDesc.RadiusAdd + _radius; } }
        public Vector3 Center { get { return _center; } set { _center = value; } }
        public Quaternion Rotation { get { return _rotation; } set { _rotation = value; } }
        public SphereEpsilon Epsilon { get { return _epsilon; } set { _epsilon = value; } }
        public float RadiusEps { get { return _epsilon.RadiusEps; } set { _epsilon.RadiusEps = value; } }
        public WireRenderDescriptor WireRenderDesc { get { return _wireRenderDesc; } }
        public Vector3 CentralAxis { get { return Up; } }
        public Vector3 Right { get { return _rotation * ModelRight; } }
        public Vector3 Up { get { return _rotation * ModelUp; } }
        public Vector3 Look { get { return _rotation * ModelLook; } }

        public static Vector3 ModelRight { get { return Vector3.right; } }
        public static Vector3 ModelUp { get { return Vector3.up; } }
        public static Vector3 ModelLook { get { return Vector3.forward; } }

        public static Vector3 ModelCenter { get { return Vector3.zero; } }

        public override void RenderSolid()
        {
            Graphics.DrawMeshNow(MeshPool.Get.UnitSphere, Matrix4x4.TRS(Center, Quaternion.identity, Vector3Ex.FromValue(Radius)));
        }

        public override void RenderWire()
        {
            float wireRadius = WireRadius;
            if(_wireRenderDesc.WireMode == WireRenderMode.Basic)
            {
                Vector3 circleMeshScale = new Vector3(wireRadius, wireRadius, 1.0f);
                Graphics.DrawMeshNow(MeshPool.Get.UnitWireCircleXY, Matrix4x4.TRS(_center, _rotation, circleMeshScale));
                Graphics.DrawMeshNow(MeshPool.Get.UnitWireCircleXY, Matrix4x4.TRS(_center, _rotation * Quaternion.Euler(90.0f, 0.0f, 0.0f), circleMeshScale));
                Graphics.DrawMeshNow(MeshPool.Get.UnitWireCircleXY, Matrix4x4.TRS(_center, _rotation * Quaternion.Euler(0.0f, -90.0f, 0.0f), circleMeshScale));
            }
            else
            {
                if(_wireRenderDesc.NumDetailSliceRings != 0)
                {
                    Vector3 circleMeshScale = new Vector3(wireRadius, wireRadius, 1.0f);
                    float angleStep = 360.0f / Mathf.Max(1, _wireRenderDesc.NumDetailSliceRings - 1);
                    for(int sliceIndex = 0; sliceIndex < _wireRenderDesc.NumDetailSliceRings; ++sliceIndex)
                    {
                        float angle = angleStep * sliceIndex;
                        Matrix4x4 circleTransform = Matrix4x4.TRS(_center, _rotation * Quaternion.AngleAxis(angle, Vector3.up), circleMeshScale);
                        Graphics.DrawMeshNow(MeshPool.Get.UnitWireCircleXY, circleTransform);
                    }
                }

                Quaternion circleRotation = _rotation * Quaternion.AngleAxis(90.0f, Vector3.right);
                Vector3 sphereTop = _center + Vector3.up * wireRadius;
                float downStep = 2.0f * wireRadius / _wireRenderDesc.NumDetailAxialRings;

                for(int ringIndex = 0; ringIndex < _wireRenderDesc.NumDetailAxialRings; ++ringIndex)
                {
                    Vector3 ringCenter = sphereTop - Vector3.up * downStep * (float)ringIndex;
                    float ringRadius = Mathf.Sqrt(wireRadius * wireRadius - (ringCenter - _center).sqrMagnitude);
                    Vector3 circleMeshScale = new Vector3(ringRadius, ringRadius, 1.0f);
                    Graphics.DrawMeshNow(MeshPool.Get.UnitWireCircleXY, Matrix4x4.TRS(ringCenter, circleRotation, circleMeshScale));
                }
            }
        }

        public override bool Raycast(Ray ray, out float t)
        {
            return SphereMath.Raycast(ray, out t, _center, _radius, _epsilon);
        }

        public bool ContainsPoint(Vector3 point)
        {
            return SphereMath.ContainsPoint(point, _center, _radius, _epsilon);
        }

        public override AABB GetAABB()
        {
            return new AABB(_center, Vector3Ex.FromValue(_radius * 2.0f));
        }
    }
}