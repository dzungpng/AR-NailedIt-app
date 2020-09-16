using UnityEngine;
using System.Collections.Generic;

namespace RTG
{
    public static class TransformEx
    {
        public static void TransformPoints(this Transform transform, List<Vector3> points)
        {
            for(int ptIndex = 0; ptIndex < points.Count; ++ptIndex)
            {
                points[ptIndex] = transform.TransformPoint(points[ptIndex]);
            }
        }

        public static List<Transform> GetGameObjectTransformCollection(IEnumerable<GameObject> gameObjects)
        {
            var transforms = new List<Transform>(10);
            foreach (var gameObject in gameObjects) transforms.Add(gameObject.transform);

            return transforms;
        }

        public static List<Transform> FilterParentsOnly(IEnumerable<Transform> transforms)
        {
            if (transforms == null) return new List<Transform>();

            var parents = new List<Transform>(10);
            foreach (var transform in transforms)
            {
                bool foundParent = false;
                foreach (var possibleParent in transforms)
                {
                    if (possibleParent != transform)
                    {
                        if (transform.IsChildOf(possibleParent.transform))
                        {
                            foundParent = true;
                            break;
                        }
                    }
                }

                if (!foundParent) parents.Add(transform);
            }

            return parents;
        }

        public static void SetWorldScale(this Transform transform, Vector3 worldScale)
        {
            Transform transformParent = transform.parent;
            transform.parent = null;
            transform.localScale = worldScale;
            transform.parent = transformParent;
        }

        public static void ScaleFromPivot(this Transform transform, Vector3 scaleFactor, Vector3 pivot)
        {
            Vector3 worldScale = transform.lossyScale;
            worldScale = Vector3.Scale(worldScale, scaleFactor);
            transform.SetWorldScale(worldScale);

            Vector3 right = transform.right;
            Vector3 up = transform.up;
            Vector3 look = transform.forward;
            Vector3 fromPivotToPos = transform.position - pivot;

            float rightOffset = Vector3.Dot(fromPivotToPos, right) * scaleFactor.x;
            float upOffset = Vector3.Dot(fromPivotToPos, up) * scaleFactor.y;
            float lookOffset = Vector3.Dot(fromPivotToPos, look) * scaleFactor.z;

            transform.position = pivot + right * rightOffset + up * upOffset + look * lookOffset;
        }

        public static void RotateAroundPivot(this Transform transform, Quaternion rotation, Vector3 pivot)
        {
            Vector3 fromPivotToPos = transform.position - pivot;

            transform.rotation = rotation * transform.rotation;
            fromPivotToPos = rotation * fromPivotToPos;
            transform.position = pivot + fromPivotToPos;
        }

        public static Vector3 GetLocalAxis(this Transform transform, AxisDescriptor axisDesc)
        {
            Vector3 axis = transform.right;
            if (axisDesc.Index == 1) axis = transform.up;
            else if (axisDesc.Index == 2) axis = transform.forward;

            if (axisDesc.Sign == AxisSign.Negative) axis = -axis;
            return axis;
        }

        public static Plane GetLocalPlane(this Transform transform, PlaneDescriptor planeDesc)
        {
            Vector3 firstAxis = transform.GetLocalAxis(planeDesc.FirstAxisDescriptor);
            Vector3 secondAxis = transform.GetLocalAxis(planeDesc.SecondAxisDescriptor);

            return new Plane(Vector3.Normalize(Vector3.Cross(firstAxis, secondAxis)), transform.position);
        }

        public static Quaternion Align(this Transform transform, Vector3 normAlignVector, TransformAxis alignmentAxis)
        {
            Vector3 axis = transform.up;
            if (alignmentAxis != TransformAxis.PositiveY)
            {
                if (alignmentAxis == TransformAxis.PositiveX) axis = transform.right;
                else if (alignmentAxis == TransformAxis.NegativeX) axis = -transform.right;
                else if (alignmentAxis == TransformAxis.NegativeY) axis = -transform.up;
                else if (alignmentAxis == TransformAxis.PositiveZ) axis = transform.forward;
                else if (alignmentAxis == TransformAxis.NegativeZ) axis = -transform.forward;
            }

            float alignment = Vector3.Dot(axis, normAlignVector);
            if (1.0f - alignment < 1e-5f) return Quaternion.identity;

            Vector3 rotAxis = Vector3.zero;

            // Check if the alignment axis is aligned with the alignment vector in the opposite direction
            if (alignment + 1.0f < 1e-5f)
            {
                if (alignmentAxis == TransformAxis.PositiveX) rotAxis = transform.up;
                else if (alignmentAxis == TransformAxis.NegativeX) rotAxis = -transform.up;
                else if (alignmentAxis == TransformAxis.PositiveY) rotAxis = transform.right;
                else if (alignmentAxis == TransformAxis.NegativeY) rotAxis = -transform.right;
                else if (alignmentAxis == TransformAxis.PositiveZ) rotAxis = transform.up;
                else if (alignmentAxis == TransformAxis.NegativeZ) rotAxis = -transform.up;
            }
            else rotAxis = Vector3.Normalize(Vector3.Cross(axis, normAlignVector));

            float rotAngle = Vector3Ex.SignedAngle(axis, normAlignVector, rotAxis);

            transform.Rotate(rotAxis, rotAngle, Space.World);
            return Quaternion.AngleAxis(rotAngle, rotAxis);
        }
    }
}
