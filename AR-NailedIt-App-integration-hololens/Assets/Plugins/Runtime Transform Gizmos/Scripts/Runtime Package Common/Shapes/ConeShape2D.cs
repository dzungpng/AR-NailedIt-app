using UnityEngine;
using System.Collections.Generic;

namespace RTG
{
    public class ConeShape2D : Shape2D
    {
        private Vector2 _baseCenter = ModelBaseCenter;
        private float _rotationDegrees;
        private float _baseRadius = 15.0f;
        private float _height = 15.0f;

        public Vector2 BaseCenter { get { return _baseCenter; } set { _baseCenter = value; } }
        public Vector2 BaseLeft { get { return _baseCenter - Right * _baseRadius; } set { _baseCenter = value + Right * _baseRadius; } }
        public Vector2 BaseRight { get { return _baseCenter + Right * _baseRadius; } set { _baseCenter = value - Right * _baseRadius; } }
        public Vector2 Tip { get { return _baseCenter + CentralAxis * _height; } set { _baseCenter = value - CentralAxis * _height; } }
        public float BaseRadius { get { return _baseRadius; } set { _baseRadius = Mathf.Abs(value); } }
        public float Height { get { return _height; } set { _height = Mathf.Abs(value); } }
        public float RotationDegrees { get { return _rotationDegrees; } set { _rotationDegrees = value % 360.0f; } }
        public Quaternion Rotation { get { return Quaternion.AngleAxis(_rotationDegrees, Vector3.forward); } }
        public Vector2 CentralAxis { get { return Up; } }
        public Vector2 Right { get { return Rotation * ModelRight; } }
        public Vector2 Up { get { return Rotation * ModelUp; } }

        public static Vector2 ModelRight { get { return Vector2.right; } }
        public static Vector2 ModelUp { get { return Vector2.up; } }
        public static Vector2 ModelBaseCenter { get { return Vector2.zero; } }

        public override void RenderArea(Camera camera)
        {
            GLRenderer.DrawTriangleFan2D(BaseLeft, new List<Vector2> { Tip, BaseRight }, camera);
        }

        public override void RenderBorder(Camera camera)
        {
            GLRenderer.DrawLineLoop2D(new List<Vector2> { BaseLeft, Tip, BaseRight }, camera);
        }

        public override bool ContainsPoint(Vector2 point)
        {
            return TriangleMath.Contains2DPoint(point, BaseLeft, Tip, BaseRight);
        }

        public override Rect GetEncapsulatingRect()
        {
            return RectEx.FromPoints(new List<Vector2> { BaseLeft, Tip, BaseRight });
        }
    }
}
