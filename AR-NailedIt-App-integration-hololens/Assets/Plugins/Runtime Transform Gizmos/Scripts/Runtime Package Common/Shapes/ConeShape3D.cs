using System.Collections.Generic;
using UnityEngine;

namespace RTG
{
    public class ConeShape3D : Shape3D
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
            private int _numDetailAxialSegments = 20;

            public WireRenderMode WireMode { get { return _wireMode; } set { _wireMode = value; } }
            public int NumDetailAxialRings { get { return _numDetailAxialRings; } set { _numDetailAxialRings = Mathf.Max(2, value); } }
            public int NumDetailAxialSegments { get { return _numDetailAxialSegments; } set { _numDetailAxialSegments = Mathf.Max(2, value); } }
        }

        private WireRenderDescriptor _wireRenderDesc = new WireRenderDescriptor();
        private Vector3 _baseCenter = ModelBaseCenter;
        private Quaternion _rotation = Quaternion.identity;
        private float _baseRadius = 1.0f;
        private float _height = 1.0f;
        private ConeEpsilon _epsilon = new ConeEpsilon();

        public Vector3 BaseCenter { get { return _baseCenter; } set { _baseCenter = value; } }
        public Vector3 Tip { get { return _baseCenter + CentralAxis * _height; } set { _baseCenter = value - CentralAxis * _height; } }
        public float BaseRadius { get { return _baseRadius; } set { _baseRadius = Mathf.Abs(value); } }
        public float Height { get { return _height; } set { _height = Mathf.Abs(value); } }
        public Quaternion Rotation { get { return _rotation; } set { _rotation = value; } }
        public Vector3 CentralAxis { get { return Up; } }
        public Vector3 Right { get { return _rotation * ModelRight; } }
        public Vector3 Up { get { return _rotation * ModelUp; } }
        public Vector3 Look { get { return _rotation * ModelLook; } }
        public ConeEpsilon Epsilon { get { return _epsilon; } set { _epsilon = value; } }
        public float HrzEps { get { return _epsilon.HrzEps; } set { _epsilon.HrzEps = value; } }
        public float VertEps { get { return _epsilon.VertEps; } set { _epsilon.VertEps = value; } }
        public WireRenderDescriptor WireRenderDesc { get { return _wireRenderDesc; } }

        public static Vector3 ModelRight { get { return Vector3.right; } }
        public static Vector3 ModelUp { get { return Vector3.up; } }
        public static Vector3 ModelLook { get { return Vector3.forward; } }
        public static Vector3 ModelBaseCenter { get { return Vector3.zero; } }

        public void AlignTip(Vector3 axis)
        {
            Rotation = QuaternionEx.FromToRotation3D(CentralAxis, axis, Look) * _rotation;
        }

        public override void RenderSolid()
        {
            Graphics.DrawMeshNow(MeshPool.Get.UnitCone, Matrix4x4.TRS(_baseCenter, _rotation, new Vector3(_baseRadius, _height, _baseRadius)));
        }

        public override void RenderWire()
        {
            Vector3 coneTip = Tip;
            if(_wireRenderDesc.WireMode == WireRenderMode.Basic)
            {
                Graphics.DrawMeshNow(MeshPool.Get.UnitWireCircleXY, Matrix4x4.TRS(_baseCenter,
                    _rotation * Quaternion.AngleAxis(90.0f, Vector3.right), new Vector3(_baseRadius, _baseRadius, 1.0f)));

                List<Vector3> baseExtents = GetBaseExtents();
                GLRenderer.DrawLines3D(new List<Vector3>() { baseExtents[0], coneTip, baseExtents[1], coneTip, baseExtents[2], coneTip, baseExtents[3], coneTip });
            }
            else
            {
                // Axial rings
                Vector3 centralAxis = CentralAxis;
                Quaternion circleRotation = Quaternion.AngleAxis(90.0f, Vector3.right);
                float upStep = _height / (_wireRenderDesc.NumDetailAxialRings - 1);
                float tan = _height / Mathf.Max(_baseRadius, 1e-5f);

                for (int ringIndex = 0; ringIndex < _wireRenderDesc.NumDetailAxialRings; ++ringIndex)
                {
                    float upOffset = upStep * (float)ringIndex;
                    Vector3 ringCenter = _baseCenter + centralAxis * upStep * (float)ringIndex;
                    float ringRadius = (_height - upOffset) / tan;
                    Vector3 circleMeshScale = new Vector3(ringRadius, ringRadius, 1.0f);
                    Graphics.DrawMeshNow(MeshPool.Get.UnitWireCircleXY, Matrix4x4.TRS(ringCenter, circleRotation, circleMeshScale));
                }

                // Axial segments
                var axialSegmentPts = new List<Vector3>(_wireRenderDesc.NumDetailAxialSegments * 2);
                float angleStep = 360.0f / (float)_wireRenderDesc.NumDetailAxialSegments;
                for(int segIndex = 0; segIndex < _wireRenderDesc.NumDetailAxialSegments; ++segIndex)
                {
                    Vector3 pivotAxis = (Quaternion.AngleAxis(segIndex * angleStep, centralAxis) * Vector3.right).normalized;
                    Vector3 ptOnBorder = _baseCenter + pivotAxis * _baseRadius;
                    axialSegmentPts.Add(ptOnBorder);
                    axialSegmentPts.Add(coneTip);
                }
                GLRenderer.DrawLines3D(axialSegmentPts);
            }
        }

        public override bool Raycast(Ray ray, out float t)
        {
            return ConeMath.Raycast(ray, out t, _baseCenter, _baseRadius, _height, _rotation);
        }

        public bool ContainsPoint(Vector3 point)
        {
            return ConeMath.ContainsPoint(point, _baseCenter, _baseRadius, _height, _rotation);
        }

        public List<Vector3> GetBaseExtents()
        {
            return ConeMath.CalcConeBaseExtentPoints(_baseCenter, _baseRadius, _rotation);
        }

        public override AABB GetAABB()
        {
            AABB aabb = new AABB(GetBaseExtents());
            aabb.Encapsulate(Tip);

            return aabb;
        }
    }
}
