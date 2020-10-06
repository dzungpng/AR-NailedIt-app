using UnityEngine;

namespace RTG
{
    public class Vector3Ref
    {
        private Vector3 _value;

        public Vector3 Value { get { return _value; } set { _value = value; } }

        public Vector3Ref()
        {
        }

        public Vector3Ref(Vector3 vec)
        {
            _value = vec;
        }
    }
}
