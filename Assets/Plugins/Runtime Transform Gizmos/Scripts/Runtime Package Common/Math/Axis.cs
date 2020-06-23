using UnityEngine;

namespace RTG
{
    public enum Axis
    {
        X = 0,
        Y,
        Z
    }

    public static class AxisHelper
    {
        public static Vector3 GetWorldAxis(Axis axis)
        {
            if (axis == Axis.X) return Vector3.right;
            else if (axis == Axis.Y) return Vector3.up;
            else return Vector3.forward;
        }

        public static Vector3 GetWorldAxis(Axis axis, AxisSign axisSign)
        {
            if (axis == Axis.X) return axisSign == AxisSign.Positive ? Vector3.right : -Vector3.right;
            else if (axis == Axis.Y) return axisSign == AxisSign.Positive ? Vector3.up : -Vector3.up;
            else return axisSign == AxisSign.Positive ? Vector3.forward : -Vector3.forward;
        }
    }
}