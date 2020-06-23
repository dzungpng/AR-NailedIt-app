using UnityEngine;

namespace RTG
{
    public class ColorRef
    {
        private Color _value = Color.white;

        public Color Value { get { return _value; } set { _value = value; } }

        public ColorRef()
        {
        }

        public ColorRef(Color color)
        {
            _value = color;
        }
    }
}
