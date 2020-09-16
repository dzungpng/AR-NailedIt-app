using UnityEngine;

namespace RTG
{
    public static class MathEx
    {
        public static bool AlmostEqual(float v1, float v2, float epsilon)
        {
            return Mathf.Abs(v1 - v2) < epsilon;
        }

        public static int GetNumDigits(int number)
        {
            return number == 0 ? 1 : Mathf.FloorToInt(Mathf.Log10(Mathf.Abs(number)) + 1);
        }

        public static float SafeAcos(float cosine)
        {
            cosine = Mathf.Max(-1.0f, Mathf.Min(1.0f, cosine));
            return Mathf.Acos(cosine);
        }

        public static bool SolveQuadratic(float a, float b, float c, out float t1, out float t2)
        {
            t1 = t2 = 0.0f;

            // Calculate delta. If negative, the equation has no solutions.
            float delta = b * b - 4.0f * a * c;
            if (delta < 0.0f) return false;

            float _2TimesA = 2.0f * a;
            if (_2TimesA == 0.0f) return false;

            if (delta == 0.0f)
            {
                t1 = t2 = -b / _2TimesA;
                return true;
            }
            else
            {
                float sqrtDelta = Mathf.Sqrt(delta);

                t1 = (-b + sqrtDelta) / _2TimesA;
                t2 = (-b - sqrtDelta) / _2TimesA;

                // Swap t values if t1 is greater than t2
                if (t1 > t2)
                {
                    float tSwap = t1;
                    t1 = t2;
                    t2 = tSwap;
                }

                return true;
            }
        }
    }
}
