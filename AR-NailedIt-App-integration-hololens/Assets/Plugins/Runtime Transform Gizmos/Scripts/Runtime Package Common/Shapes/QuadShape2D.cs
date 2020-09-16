using UnityEngine;

namespace RTG
{
    public class QuadShape2D : Shape2D
    {
        private Vector2 _center = ModelCenter;
        private Vector2 _size = Vector2.one;
        private float _rotationDegrees;
        private QuadEpsilon _epsilon = new QuadEpsilon();
        private Shape2DPtContainMode _ptContainMode = Shape2DPtContainMode.InsideArea;

        public float RotationDegrees { get { return _rotationDegrees; } set { _rotationDegrees = value % 360.0f; } }
        public Quaternion Rotation { get { return Quaternion.AngleAxis(_rotationDegrees, Vector3.forward); } }
        public Vector2 Center { get { return _center; } set { _center = value; } }
        public Vector2 Size { get { return _size; } set { _size = value.Abs(); } }
        public Vector2 Extents { get { return _size * 0.5f; } }
        public float Width { get { return _size.x; } set { _size.x = Mathf.Abs(value); } }
        public float Height { get { return _size.y; } set { _size.y = Mathf.Abs(value); } }
        public QuadEpsilon Epsilon { get { return _epsilon; } set { _epsilon = value; } }
        public Shape2DPtContainMode PtContainMode { get { return _ptContainMode; } set { _ptContainMode = value; } }
        public Vector2 SizeEps { get { return _epsilon.SizeEps; } set { _epsilon.SizeEps = value; } }
        public float WidthEps { get { return _epsilon.WidthEps; } set { _epsilon.WidthEps = value; } }
        public float HeightEps { get { return _epsilon.HeightEps; } set { _epsilon.HeightEps = value; } }
        public float WireEps { get { return _epsilon.WireEps; } set { _epsilon.WireEps = value; } }
        public Vector2 Right { get { return Quaternion.AngleAxis(_rotationDegrees, Vector3.forward) * ModelRight; } }
        public Vector2 Up { get { return Quaternion.AngleAxis(_rotationDegrees, Vector3.forward) * ModelUp; } }

        public static Vector2 ModelRight { get { return Vector2.right; } }
        public static Vector2 ModelUp { get { return Vector2.up; } }
        public static Vector2 ModelCenter { get { return Vector2.zero; } }

        public Vector2 GetExtentPoint(Shape2DExtentPoint extentPt)
        {
            Vector2 extents = Extents;
            switch (extentPt)
            {
                case Shape2DExtentPoint.Left:

                    return _center - Right * extents.x;

                case Shape2DExtentPoint.Top:

                    return _center + Up * extents.y;

                case Shape2DExtentPoint.Right:

                    return _center + Right * extents.x;

                case Shape2DExtentPoint.Bottom:

                    return _center - Up * extents.y;
            }

            return Vector2.zero;
        }

        public void AlignWidth(Vector2 axis)
        {
            Quaternion newRotation = QuaternionEx.FromToRotation2D(Right, axis) * Rotation;
            RotationDegrees = QuaternionEx.ConvertTo2DRotation(newRotation);
        }

        public float GetSizeAlongDirection(Vector2 direction)
        {
            return Vector2Ex.AbsDot(direction, Rotation * _size);
        }

        public override void RenderArea(Camera camera)
        {
            GraphicsEx.DrawQuad2D(_center, _size, _rotationDegrees, camera);
        }

        public override void RenderBorder(Camera camera)
        {
            GraphicsEx.DrawQuadBorder2D(_center, _size, _rotationDegrees, camera);
        }

        public override bool ContainsPoint(Vector2 point)
        {
            if (_ptContainMode == Shape2DPtContainMode.InsideArea)
                return QuadMath.Contains2DPoint(point, _center, _size.x, _size.y, Right, Up, _epsilon);
            else
                return QuadMath.Is2DPointOnBorder(point, _center, _size.x, _size.y, Right, Up, _epsilon);
        }

        public override Rect GetEncapsulatingRect()
        {
            var cornerPoints = QuadMath.Calc2DQuadCornerPoints(_center, _size, _rotationDegrees);
            return RectEx.FromPoints(cornerPoints);
        }
    }
}
