using UnityEngine;

namespace RTG
{
    public class QuaternionRef
    {
        private Quaternion _value = Quaternion.identity;

        public Quaternion Value { get { return _value; } set { _value = value; } }

        public QuaternionRef()
        {
        }

        public QuaternionRef(Quaternion quat)
        {
            _value = quat;
        }
    }
}
