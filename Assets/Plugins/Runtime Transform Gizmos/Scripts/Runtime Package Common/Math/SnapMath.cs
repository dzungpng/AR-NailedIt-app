using UnityEngine;

namespace RTG
{
    public struct NumSnapSteps
    {
        public float FltNumSteps;
        public float AbsFltNumSteps;
        public int IntNumSteps;
        public int AbsIntNumSteps;
        public float AbsFracSteps;
    }

    public static class SnapMath
    {
        public static NumSnapSteps CalculateNumSnapSteps(float snapStep, float total)
        {
            NumSnapSteps numSteps = new NumSnapSteps();

            numSteps.FltNumSteps = total / snapStep;
            numSteps.AbsFltNumSteps = Mathf.Abs(numSteps.FltNumSteps);
            numSteps.IntNumSteps = (int)numSteps.FltNumSteps;
            numSteps.AbsIntNumSteps = Mathf.Abs(numSteps.IntNumSteps);
            numSteps.AbsFracSteps = numSteps.AbsFltNumSteps - numSteps.AbsIntNumSteps;

            return numSteps;
        }

        public static bool CanExtractSnap(float snapStep, float accumulated)
        {
            return Mathf.Abs(accumulated) >= snapStep;
        }

        public static float ExtractSnap(float snapStep, ref float accumulated)
        {
            int numSteps = (int)(accumulated / snapStep);
            float ret = numSteps * snapStep;
            accumulated -= ret;

            return ret;
        }

        public static float ExtractSnap(float snapStep, float accumulated)
        {
            int numSteps = (int)(accumulated / snapStep);
            float ret = numSteps * snapStep;

            return ret;
        }
    }
}
