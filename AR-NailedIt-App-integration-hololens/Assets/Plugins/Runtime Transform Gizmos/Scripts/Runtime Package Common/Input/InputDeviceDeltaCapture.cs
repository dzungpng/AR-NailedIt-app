using UnityEngine;

namespace RTG
{
    public class InputDeviceDeltaCapture
    {
        private int _id;
        private Vector3 _origin;
        private Vector3 _delta;

        public int Id { get { return _id; } }
        public Vector3 Origin { get { return _origin; } }
        public Vector3 Delta { get { return _delta; } }

        public InputDeviceDeltaCapture(int id, Vector3 origin)
        {
            _id = id;
            _origin = origin;
        }

        public void Update(Vector3 devicePosition)
        {
            _delta = devicePosition - _origin;
        }
    }
}
