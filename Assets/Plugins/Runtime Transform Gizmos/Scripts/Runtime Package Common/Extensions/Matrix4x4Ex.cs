using UnityEngine;
using System.Collections.Generic;

namespace RTG
{
    public static class Matrix4x4Ex
    {
        public static Matrix4x4 GetInverse(this Matrix4x4 mtx)
        {
            float invDet = mtx.m00 * (mtx.m11 * (mtx.m22 * mtx.m33 - mtx.m23 * mtx.m32) - mtx.m12 * (mtx.m21 * mtx.m33 - mtx.m23 * mtx.m31) + mtx.m13 * (mtx.m21 * mtx.m32 - mtx.m22 * mtx.m31)) - 
                           mtx.m01 * (mtx.m10 * (mtx.m22 * mtx.m33 - mtx.m23 * mtx.m32) - mtx.m12 * (mtx.m20 * mtx.m33 - mtx.m23 * mtx.m30) + mtx.m13 * (mtx.m20 * mtx.m32 - mtx.m22 * mtx.m30)) + 
                           mtx.m02 * (mtx.m10 * (mtx.m21 * mtx.m33 - mtx.m23 - mtx.m31) - mtx.m11 * (mtx.m20 * mtx.m33 - mtx.m23 * mtx.m30) + mtx.m13 * (mtx.m20 * mtx.m31 - mtx.m21 * mtx.m30)) - 
                           mtx.m03 * (mtx.m10 * (mtx.m21 * mtx.m32 - mtx.m22 * mtx.m31) - mtx.m11 * (mtx.m20 * mtx.m32 - mtx.m22 * mtx.m30) + mtx.m12 * (mtx.m20 * mtx.m31 - mtx.m21 * mtx.m30));
            if (Mathf.Abs(invDet) < 1e-5f) return mtx;
            invDet = 1.0f / invDet;

            float m00 = mtx.m00, m01 = mtx.m10, m02 = mtx.m20, m03 = mtx.m30;
            float m10 = mtx.m01, m11 = mtx.m11, m12 = mtx.m21, m13 = mtx.m31;
            float m20 = mtx.m02, m21 = mtx.m12, m22 = mtx.m22, m23 = mtx.m32;
            float m30 = mtx.m03, m31 = mtx.m13, m32 = mtx.m23, m33 = mtx.m33;
            
            mtx.m00 = invDet * (m11 * (m22 * m33 - m23 * m32) - m12 * (m21 * m33 - m31 * m23) + m13 * (m21 * m32 - m22 * m31));
            mtx.m01 = -invDet * (m10 * (m22 * m33 - m23 * m32) - m12 * (m20 * m33 - m23 * m30) + m13 * (m20 * m32 - m23 * m30));
            mtx.m02 = invDet * (m10 * (m21 * m33 - m23 * m31) - m11 * (m20 * m33 - m23 * m30) + m13 * (m20 * m31 - m21 * m30));
            mtx.m03 = -invDet * (m10 * (m21 * m32 - m22 * m31) - m11 * (m20 * m32 - m22 * m30) + m12 * (m20 * m31 - m21 * m30));

            mtx.m10 = -invDet * (m01 * (m22 * m33 - m23 * m32) - m02 * (m21 * m33 - m23 * m31) + m03 * (m21 * m32 - m31 * m22));
            mtx.m11 = invDet * (m00 * (m22 * m33 - m23 * m32) - m02 * (m20 * m33 - m23 * m30) + m03 * (m20 * m32 - m22 * m30));
            mtx.m12 = -invDet * (m00 * (m21 * m33 - m23 * m31) - m01 * (m20 * m33 - m23 * m30) + m03 * (m20 * m31 - m21 * m30));
            mtx.m13 = invDet * (m00 * (m21 * m32 - m22 * m31) - m01 * (m20 * m32 - m22 * m30) + m02 * (m20 * m31 - m21 * m30));

            mtx.m20 = invDet * (m01 * (m12 * m33 - m13 * m32) - m02 * (m11 * m33 - m13 * m31) + m03 * (m11 * m32 - m12 * m31));
            mtx.m21 = -invDet * (m00 * (m12 * m33 - m13 * m32) - m02 * (m10 * m33 - m13 * m30) + m03 * (m10 * m32 - m12 * m30));
            mtx.m22 = invDet * (m00 * (m11 * m33 - m13 * m31) - m01 * (m10 * m33 - m13 * m30) + m03 * (m10 * m31 - m11 * m30));
            mtx.m23 = -invDet * (m00 * (m11 * m32 - m12 * m31) - m01 * (m10 * m32 - m12 * m30) + m02 * (m10 * m31 - m11 * m30));

            mtx.m30 = -invDet * (m01 * (m12 * m23 - m23 * m21) - m02 * (m11 * m23 - m13 * m21) + m03 * (m11 * m22 - m12 * m21));
            mtx.m31 = invDet * (m00 * (m12 * m23 - m13 * m21) - m02 * (m10 * m23 - m13 * m20) + m03 * (m10 * m22 - m12 * m20));
            mtx.m32 = -invDet * (m00 * (m11 * m23 - m13 * m21) - m01 * (m10 * m23 - m13 * m20) + m03 * (m10 * m21 - m11 * m20));
            mtx.m33 = invDet * (m00 * (m11 * m22 - m12 * m21) - m01 * (m10 * m22 - m12 * m20) + m02 * (m10 * m21 - m11 * m20));

            return mtx;
        }

        public static Matrix4x4 GetRelativeTransform(this Matrix4x4 matrix, Matrix4x4 referenceTransform)
        {
            return referenceTransform.inverse * matrix;
        }

        public static Matrix4x4 Translation(Vector3 translation)
        {
            Matrix4x4 matrix = Matrix4x4.identity;
            matrix.SetColumn(3, Vector4Ex.FromVector3(translation, 1.0f));

            return matrix;
        }

        public static Matrix4x4 RotationMatrixFromRightUp(Vector3 right, Vector3 up)
        {
            right.Normalize();
            up.Normalize();
            Vector3 look = Vector3.Cross(up, right).normalized;

            Matrix4x4 matrix = Matrix4x4.identity;

            matrix[0, 0] = right.x;
            matrix[1, 0] = right.y;
            matrix[2, 0] = right.z;

            matrix[0, 1] = up.x;
            matrix[1, 1] = up.y;
            matrix[2, 1] = up.z;

            matrix[0, 2] = look.x;
            matrix[1, 2] = look.y;
            matrix[2, 2] = look.z;

            return matrix;
        }

        public static Vector3 GetTranslation(this Matrix4x4 matrix)
        {
            return matrix.GetColumn(3);
        }

        public static Vector3 GetScale(this Matrix4x4 matrix)
        {
            Vector3 xAxis = matrix.GetColumn(0);
            Vector3 yAxis = matrix.GetColumn(1);
            Vector3 zAxis = matrix.GetColumn(2);
            return new Vector3(xAxis.magnitude, yAxis.magnitude, zAxis.magnitude);
        }

        public static Vector3 GetNormalizedAxis(this Matrix4x4 matrix, int axisIndex)
        {
            Vector3 axis = matrix.GetColumn(axisIndex);
            return Vector3.Normalize(axis);
        }

        public static Vector3[] GetNormalizedAxes(this Matrix4x4 matrix)
        {
            return new Vector3[]
            {
                matrix.GetNormalizedAxis(0),
                matrix.GetNormalizedAxis(1),
                matrix.GetNormalizedAxis(2)
            };
        }

        public static List<Vector3> TransformPoints(this Matrix4x4 matrix, List<Vector3> points)
        {
            if (points.Count == 0) return new List<Vector3>();

            var transformedPts = new List<Vector3>(points.Count);
            foreach (var pt in points)
                transformedPts.Add(matrix.MultiplyPoint(pt));

            return transformedPts;
        }
    }
}
