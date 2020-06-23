using UnityEngine;

namespace RTG
{
    public static class ExtrudeEpsThreshold
    {
        public static float Get { get { return 0.09f; } }
    }

    public struct SphereEpsilon
    {
        private float _radiusEps;

        public float RadiusEps { get { return _radiusEps; } set { _radiusEps = Mathf.Abs(value); } }
    }

    public struct CylinderEpsilon
    {
        private float _hrzEps;
        private float _vertEps;

        public float RadiusEps { get { return _hrzEps; } set { _hrzEps = Mathf.Abs(value); } }
        public float VertEps { get { return _vertEps; } set { _vertEps = Mathf.Abs(value); } }
    }

    public struct BoxEpsilon
    {
        private Vector3 _sizeEps;

        public Vector3 SizeEps { get { return _sizeEps; } set { _sizeEps = value.Abs(); } }
        public float WidthEps { get { return _sizeEps.x; } set { _sizeEps.x = Mathf.Abs(value); } }
        public float HeightEps { get { return _sizeEps.y; } set { _sizeEps.y = Mathf.Abs(value); } }
        public float DepthEps { get { return _sizeEps.z; } set { _sizeEps.z = Mathf.Abs(value); } }
    }

    public struct ConeEpsilon
    {
        private float _hrzEps;
        private float _vertEps;

        public float HrzEps { get { return _hrzEps; } set { _hrzEps = Mathf.Abs(value); } }
        public float VertEps { get { return _vertEps; } set { _vertEps = Mathf.Abs(value); } }
    }

    public struct SegmentEpsilon
    {
        private float _raycastEps;
        private float _ptOnSegmentEps;

        public float RaycastEps { get { return _raycastEps; } set { _raycastEps = Mathf.Abs(value); } }
        public float PtOnSegmentEps { get { return _ptOnSegmentEps; } set { _ptOnSegmentEps = Mathf.Abs(value); } }
    }

    public struct PrismEpsilon
    {
        private float _ptContainEps;

        public float PtContainEps { get { return _ptContainEps; } set { _ptContainEps = Mathf.Abs(value); } }
    }

    public struct PyramidEpsilon
    {
        private float _ptContainEps;

        public float PtContainEps { get { return _ptContainEps; } set { _ptContainEps = Mathf.Abs(value); } }
    }

    public struct ArcEpsilon
    {
        private float _areaEps;
        private float _extrudeEps;
        private float _wireEps;

        public float AreaEps { get { return _areaEps; } set { _areaEps = Mathf.Abs(value); } }
        public float ExtrudeEps { get { return _extrudeEps; } set { _extrudeEps = Mathf.Abs(value); } }
        public float WireEps { get { return _wireEps; } set { _wireEps = Mathf.Abs(value); } }
    }

    public struct CircleEpsilon
    {
        private float _radiusEps;
        private float _extrudeEps;
        private float _wireEps;

        public float RadiusEps { get { return _radiusEps; } set { _radiusEps = Mathf.Abs(value); } }
        public float ExtrudeEps { get { return _extrudeEps; } set { _extrudeEps = Mathf.Abs(value); } }
        public float WireEps { get { return _wireEps; } set { _wireEps = Mathf.Abs(value); } }
    }

    public struct PolygonEpsilon
    {
        private float _areaEps;
        private float _extrudeEps;
        private float _wireEps;
        private float _thickWireEps;

        public float AreaEps { get { return _areaEps; } set { _areaEps = Mathf.Abs(value); } }
        public float ExtrudeEps { get { return _extrudeEps; } set { _extrudeEps = Mathf.Abs(value); } }
        public float WireEps { get { return _wireEps; } set { _wireEps = Mathf.Abs(value); } }
        public float ThickWireEps { get { return _thickWireEps; } set { _thickWireEps = Mathf.Abs(value); } }
    }

    public struct QuadEpsilon
    {
        private Vector2 _sizeEps;
        private float _extrudeEps;
        private float _wireEps;

        public Vector2 SizeEps { get { return _sizeEps; } set { _sizeEps = value.Abs(); } }
        public float WidthEps { get { return _sizeEps.x; } set { _sizeEps.x = Mathf.Abs(value); } }
        public float HeightEps { get { return _sizeEps.y; } set { _sizeEps.y = Mathf.Abs(value); } }
        public float ExtrudeEps { get { return _extrudeEps; } set { _extrudeEps = Mathf.Abs(value); } }
        public float WireEps { get { return _wireEps; } set { _wireEps = Mathf.Abs(value); } }
    }

    public struct TriangleEpsilon
    {
        private float _areaEps;
        private float _extrudeEps;
        private float _wireEps;

        public float AreaEps { get { return _areaEps; } set { _areaEps = Mathf.Abs(value); } }
        public float ExtrudeEps { get { return _extrudeEps; } set { _extrudeEps = Mathf.Abs(value); } }
        public float WireEps { get { return _wireEps; } set { _wireEps = Mathf.Abs(value); } }
    }

    public struct TorusEpsilon
    {
        private float _tubeRadiusEps;
        private float _cylHrzRadius;
        private float _cylVertRadius;

        public float TubeRadiusEps { get { return _tubeRadiusEps; } set { _tubeRadiusEps = Mathf.Abs(value); } }
        public float CylHrzRadius { get { return _cylHrzRadius; } set { _cylHrzRadius = Mathf.Abs(value); } }
        public float CylVertRadius { get { return _cylVertRadius; } set { _cylVertRadius = Mathf.Abs(value); } }
    }
}