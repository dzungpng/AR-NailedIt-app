using UnityEngine;
using System.Collections.Generic;

namespace RTG
{
    public class Vec3Samples
    {
        private int _maxNumSamples = 2;
        private List<Vector3> _samples = new List<Vector3>();

        public int NumSamples { get { return _samples.Count; } }
        public int MaxNumSamples { get { return _maxNumSamples; } }

        public void AddSample(Vector3 sample)
        {
            if (NumSamples < MaxNumSamples) _samples.Insert(0, sample);
            else
            {
                for (int sampIndex = 0; sampIndex < NumSamples - 1; ++sampIndex)
                {
                    _samples[sampIndex + 1] = _samples[sampIndex];
                }
                _samples[0] = sample;
            }
        }

        public void SetMaxNumSamples(int maxNumSamples)
        {
            if (maxNumSamples == MaxNumSamples) return;

            if (maxNumSamples < NumSamples)
            {
                int surplus = maxNumSamples - NumSamples;
                int counter = 0;
                while(counter < surplus)
                {
                    _samples.RemoveAt(_samples.Count - 1);
                    ++counter;
                }
            }
        }

        public Vector3 GetAverage()
        {
            Vector3 average = Vector3.zero;
            foreach (var vec in _samples)
                average += vec;

            return average.normalized;
        }
    }
}
