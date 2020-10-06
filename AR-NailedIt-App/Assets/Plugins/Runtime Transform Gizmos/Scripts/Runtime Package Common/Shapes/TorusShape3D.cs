using UnityEngine;
using System.Collections.Generic;

namespace RTG
{
    public class TorusShape3D : Shape3D
    {
        public enum WireRenderFlags
        {
            None = 0,
            TubeSlices = 1,
            AxialSlices = 2,
            All = TubeSlices | AxialSlices
        }

        public class WireRenderDescriptor
        {
            private WireRenderFlags _wireFlags = WireRenderFlags.AxialSlices;
            private int _numTubeSlices = 30;
            private int _numAxialSlices = 30;

            public int NumTubeSlices { get { return _numTubeSlices; } set { _numTubeSlices = Mathf.Max(0, value); } }
            public int NumAxialSlices { get { return _numAxialSlices; } set { _numAxialSlices = Mathf.Max(2, value); } }
            public WireRenderFlags WireFlags { get { return _wireFlags; } set { _wireFlags = value; } }
        }

        private float _coreRadius = 1.0f;
        private float _tubeRadius = 1.0f;
        private Vector3 _center = ModelCenter;
        private Quaternion _rotation = Quaternion.identity;
        private TorusEpsilon _epsilon = new TorusEpsilon();
        private WireRenderDescriptor _wireRenderDesc = new WireRenderDescriptor();

        public float CoreRadius { get { return _coreRadius; } set { _coreRadius = Mathf.Abs(value); } }
        public float TubeRadius { get { return _tubeRadius; } set { _tubeRadius = Mathf.Abs(value); } }
        public Vector3 Center { get { return _center; } set { _center = value; } }
        public Quaternion Rotation { get { return _rotation; } set { _rotation = value; } }
        public Vector3 Right { get { return _rotation * ModelRight; } }
        public Vector3 Up { get { return _rotation * ModelUp; } }
        public Vector3 Look { get { return _rotation * ModelLook; } }
        public TorusEpsilon Epsilon { get { return _epsilon; } set { _epsilon = value; } }
        public float TubeRadiusEps { get { return _epsilon.TubeRadiusEps; } set { _epsilon.TubeRadiusEps = value; } }
        public WireRenderDescriptor WireRenderDesc { get { return _wireRenderDesc; } }

        public static Vector3 ModelRight { get { return Vector3.right; } }
        public static Vector3 ModelUp { get { return Vector3.up; } }
        public static Vector3 ModelLook { get { return Vector3.forward; } }
        public static Vector3 ModelCenter { get { return Vector3.zero; } }

        public override bool Raycast(Ray ray, out float t)
        {
            return TorusMath.Raycast(ray, out t, _center, _coreRadius, _tubeRadius, _rotation, _epsilon);
        }

        public override void RenderSolid()
        {
            Graphics.DrawMeshNow(MeshPool.Get.UnitTorus, Matrix4x4.TRS(_center, _rotation, Vector3.one));
        }

        public override void RenderWire()
        {
            Mesh circleMesh = MeshPool.Get.UnitWireCircleXY;
            if (_wireRenderDesc.NumTubeSlices != 0 && (_wireRenderDesc.WireFlags & WireRenderFlags.TubeSlices) != 0)
            {
                Vector3 circleScale = new Vector3(_tubeRadius, _tubeRadius, 1.0f);
                float angleStep = 360.0f / _wireRenderDesc.NumTubeSlices;
                for(int sliceIndex = 0; sliceIndex < _wireRenderDesc.NumTubeSlices; ++sliceIndex)
                {
                    float angle = angleStep * sliceIndex * Mathf.Deg2Rad;
                    float cos = Mathf.Cos(angle);
                    float sin = Mathf.Sin(angle);
                    Vector3 sliceCenter = _center + Right * cos * _coreRadius + Look * sin * _coreRadius;

                    Vector3 toCenter = sliceCenter - _center;
                    Vector3 circleLook = Vector3.Cross(toCenter, Up).normalized;
                    Graphics.DrawMeshNow(circleMesh, Matrix4x4.TRS(sliceCenter, Quaternion.LookRotation(circleLook, Up), circleScale));
                }
            }

            if (_wireRenderDesc.NumAxialSlices != 0 && (_wireRenderDesc.WireFlags & WireRenderFlags.AxialSlices) != 0)
            {
                Quaternion circleRotation = _rotation * Quaternion.Euler(90.0f, 0.0f, 0.0f);
                float angleStep = 360.0f / _wireRenderDesc.NumAxialSlices;
                for (int sliceIndex = 0; sliceIndex < _wireRenderDesc.NumAxialSlices; ++sliceIndex)
                {
                    float angle = angleStep * sliceIndex * Mathf.Deg2Rad;
                    float cos = Mathf.Cos(angle);
                    float sin = Mathf.Sin(angle);

                    float sliceRadius = _coreRadius - _tubeRadius * sin;
                    float offsetAlongUp = _tubeRadius * cos;

                    Vector3 circleScale = new Vector3(sliceRadius, sliceRadius, 1.0f);
                    Graphics.DrawMeshNow(circleMesh, Matrix4x4.TRS(_center + Up * offsetAlongUp, circleRotation, circleScale));
                }
            }
        }

        public List<Vector3> GetHrzExtents()
        {
            return TorusMath.Calc3DHrzExtentPoints(_center, _coreRadius, _tubeRadius, _rotation);
        }

        public override AABB GetAABB()
        {
            float sphereRadius = TorusMath.CalcSphereRadius(_coreRadius, _tubeRadius);
            return new AABB(_center, Vector3Ex.FromValue(sphereRadius * 2.0f));
        }
    }
}
