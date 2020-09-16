using UnityEngine;

namespace RTG
{
    public class YesNoAnswer
    {
        private bool _hasYes = false;
        private bool _hasNo = false;

        public bool HasYes { get { return _hasYes; } }
        public bool HasNo { get { return _hasNo; } }
        public bool HasOnlyYes { get { return HasYes && !HasNo; } }

        public void Yes()
        {
            _hasYes = true;
        }

        public void No()
        {
            _hasNo = true;
        }
    }
}
