using UnityEngine;

namespace RTG
{
    public struct PlaneDescriptor
    {
        private PlaneId _id;
        private PlaneQuadrantId _quadrant;
        private AxisDescriptor _firstAxisDescriptor;
        private AxisDescriptor _secondAxisDescriptor;

        public PlaneId Id { get { return _id; } }
        public PlaneQuadrantId Quadrant { get { return _quadrant; } }
        public AxisSign FirstAxisSign { get { return _firstAxisDescriptor.Sign; } }
        public AxisSign SecondAxisSign { get { return _secondAxisDescriptor.Sign; } }
        public int FirstAxisIndex { get { return _firstAxisDescriptor.Index; } }
        public int SecondAxisIndex { get { return _secondAxisDescriptor.Index; } }
        public AxisDescriptor FirstAxisDescriptor { get { return _firstAxisDescriptor; } }
        public AxisDescriptor SecondAxisDescriptor { get { return _secondAxisDescriptor; } }

        public PlaneDescriptor(PlaneId planeId, PlaneQuadrantId planeQuadrant)
        {
            _id = planeId;
            _quadrant = planeQuadrant;
            _firstAxisDescriptor = PlaneIdHelper.GetFirstAxisDescriptor(planeId, planeQuadrant);
            _secondAxisDescriptor = PlaneIdHelper.GetSecondAxisDescriptor(planeId, planeQuadrant);
        }
    }
}
