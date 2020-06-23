using UnityEngine;

namespace RTG
{
    public class MeshPool : Singleton<MeshPool>
    {
        private Mesh _unitTorus;
        private Mesh _unitCylindricalTorus;
        private Mesh _unitBox;
        private Mesh _unitWireBox;
        private Mesh _unitPyramid;
        private Mesh _unitWirePyramid;
        private Mesh _unitTriangularPrism;
        private Mesh _unitWireTriangularPrism;
        private Mesh _unitCone;
        private Mesh _unitCylinder;
        private Mesh _unitSphere;
        private Mesh _unitCoordSystem;
        private Mesh _unitSegmentX;
        private Mesh _unitQuadXY;
        private Mesh _unitQuadXZ;
        private Mesh _unitWireQuadXY;
        private Mesh _unitCircleXY;
        private Mesh _unitWireCircleXY;
        private Mesh _unitRightAngledTriangleXY;
        private Mesh _unitWireRightAngledTriangleXY;
        private Mesh _unitEqTriangleXY;
        private Mesh _unitWireEqTriangleXY;

        public Mesh UnitTorus
        {
            get
            {
                if (_unitTorus == null) _unitTorus = TorusMesh.CreateTorus(Vector3.zero, 1.0f, 1.0f, 80, 80, Color.white);
                return _unitTorus;
            }
        }
        public Mesh UnitCylindricalTorus
        {
            get
            {
                if (_unitCylindricalTorus == null) _unitCylindricalTorus = TorusMesh.CreateCylindricalTorus(Vector3.zero, 1.0f, 1.0f, 1.0f, 80, Color.white);
                return _unitCylindricalTorus;
            }
        }
        public Mesh UnitQuadXY
        {
            get
            {
                if (_unitQuadXY == null) _unitQuadXY = QuadMesh.CreateQuadXY(1.0f, 1.0f, Color.white);
                return _unitQuadXY;
            }        
        }
        public Mesh UnitQuadXZ
        {
            get
            {
                if (_unitQuadXZ == null) _unitQuadXZ = QuadMesh.CreateQuadXZ(1.0f, 1.0f, Color.white);
                return _unitQuadXZ;
            }
        }
        public Mesh UnitBox
        {
            get
            {
                if (_unitBox == null) _unitBox = BoxMesh.CreateBox(1.0f, 1.0f, 1.0f, Color.white);
                return _unitBox;
            }
        }
        public Mesh UnitWireBox
        {
            get
            {
                if (_unitWireBox == null) _unitWireBox = BoxMesh.CreateWireBox(1.0f, 1.0f, 1.0f, Color.white);
                return _unitWireBox;
            }
        }
        public Mesh UnitPyramid
        {
            get
            {
                if (_unitPyramid == null) _unitPyramid = PyramidMesh.CreatePyramid(Vector3.zero, 1.0f, 1.0f, 1.0f, Color.white);
                return _unitPyramid;
            }
        }
        public Mesh UnitWirePyramid
        {
            get
            {
                if (_unitWirePyramid == null) _unitWirePyramid = PyramidMesh.CreateWirePyramid(Vector3.zero, 1.0f, 1.0f, 1.0f, Color.white);
                return _unitWirePyramid;
            }
        }
        public Mesh UnitTriangularPrism
        {
            get
            {
                if (_unitTriangularPrism == null) _unitTriangularPrism = PrismMesh.CreateTriangularPrism(Vector3.zero, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, Color.white);
                return _unitTriangularPrism;
            }
        }
        public Mesh UnitWireTriangularPrism
        {
            get
            {
                if (_unitWireTriangularPrism == null) _unitWireTriangularPrism = PrismMesh.CreateWireTriangularPrism(Vector3.zero, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, Color.white);
                return _unitWireTriangularPrism;
            }
        }
        public Mesh UnitCone
        {
            get
            {
                if (_unitCone == null) _unitCone = CylinderMesh.CreateCylinder(1.0f, 0.0f, 1.0f, 30, 30, 1, 1, Color.white);
                return _unitCone;
            }
        }
        public Mesh UnitCylinder
        {
            get
            {
                if (_unitCylinder == null) _unitCylinder = CylinderMesh.CreateCylinder(1.0f, 1.0f, 1.0f, 30, 30, 1, 1, Color.white);
                return _unitCylinder;
            }
        }
        public Mesh UnitSphere
        {
            get
            {
                if (_unitSphere == null) _unitSphere = SphereMesh.CreateSphere(1.0f, 30, 30, Color.white);
                return _unitSphere;
            }
        }
        public Mesh UnitCoordSystem
        {
            get
            {
                if (_unitCoordSystem == null) _unitCoordSystem = LineMesh.CreateCoordSystemAxesLines(1.0f, Color.white);
                return _unitCoordSystem;
            }
        }
        public Mesh UnitSegmentX
        {
            get
            {
                if (_unitSegmentX == null) _unitSegmentX = LineMesh.CreateLine(Vector3.zero, new Vector3(1.0f, 0.0f, 0.0f), Color.white);
                return _unitSegmentX;
            }
        }
        public Mesh UnitWireQuadXY
        {
            get
            {
                if (_unitWireQuadXY == null) _unitWireQuadXY = QuadMesh.CreateWireQuadXY(Vector3.zero, new Vector2(1.0f, 1.0f), Color.white);
                return _unitWireQuadXY;
            }
        }
        public Mesh UnitCircleXY
        {
            get
            {
                if (_unitCircleXY == null) _unitCircleXY = CircleMesh.CreateCircleXY(1.0f, 200, Color.white);
                return _unitCircleXY;
            }
        }
        public Mesh UnitWireCircleXY
        {
            get
            {
                if (_unitWireCircleXY == null) _unitWireCircleXY = CircleMesh.CreateWireCircleXY(1.0f, 200, Color.white);
                return _unitWireCircleXY;
            }
        }
        public Mesh UnitRightAngledTriangleXY
        {
            get
            {
                if (_unitRightAngledTriangleXY == null) _unitRightAngledTriangleXY = TriangleMesh.CreateRightAngledTriangleXY(Vector3.zero, 1.0f, 1.0f, Color.white);
                return _unitRightAngledTriangleXY;
            }
        }
        public Mesh UnitWireRightAngledTriangleXY
        {
            get
            {
                if (_unitWireRightAngledTriangleXY == null) _unitWireRightAngledTriangleXY = TriangleMesh.CreateWireRightAngledTriangleXY(Vector3.zero, 1.0f, 1.0f, Color.white);
                return _unitWireRightAngledTriangleXY;
            }
        }
        public Mesh UnitEqTriangleXY
        {
            get
            {
                if (_unitEqTriangleXY == null) _unitEqTriangleXY = TriangleMesh.CreateEqXY(Vector3.zero, 1.0f, Color.white);
                return _unitEqTriangleXY;
            }
        }
        public Mesh UnitWireEqTriangleXY
        {
            get
            {
                if (_unitWireEqTriangleXY == null) _unitWireEqTriangleXY = TriangleMesh.CreateWireEqXY(Vector3.zero, 1.0f, Color.white);
                return _unitWireEqTriangleXY;
            }
        }
    }
}
