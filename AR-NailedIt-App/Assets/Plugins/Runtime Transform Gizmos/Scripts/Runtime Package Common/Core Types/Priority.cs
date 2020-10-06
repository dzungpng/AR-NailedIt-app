using UnityEngine;

namespace RTG
{
    public class Priority
    {
        private int _priority = 0;

        public int Value { get { return _priority; } set { _priority = value; } }

        public static int Lowest { get { return int.MaxValue; } }
        public static int Highest { get { return int.MinValue; } }

        public void MakeLowest()
        {
            _priority = Lowest;
        }

        public void MakeHighest()
        {
            _priority = Highest;
        }

        public void MakeLowerThan(Priority priority)
        {
            _priority = priority.Value + 1;
        }

        public void MakeHigherThan(Priority priority)
        {
            _priority = priority.Value - 1;
        }

        public override int GetHashCode()
        {
            return base.GetHashCode();
        }

        public override bool Equals(object obj)
        {
            if (obj is Priority) return _priority == ((Priority)obj)._priority;
            return false;
        }

        public int CompareTo(Priority other)
        {
            return _priority.CompareTo(other.Value);
        }

        public static bool operator ==(Priority firstPriority, Priority secondPriority)
        {
            return firstPriority.Value == secondPriority.Value;
        }

        public static bool operator !=(Priority firstPriority, Priority secondPriority)
        {
            return firstPriority.Value != secondPriority.Value;
        }

        public static bool operator >(Priority firstPriority, Priority secondPriority)
        {
            return firstPriority.Value < secondPriority.Value;
        }

        public static bool operator >=(Priority firstPriority, Priority secondPriority)
        {
            return firstPriority.Value <= secondPriority.Value;
        }

        public static bool operator <(Priority firstPriority, Priority secondPriority)
        {
            return firstPriority.Value > secondPriority.Value;
        }

        public static bool operator <=(Priority firstPriority, Priority secondPriority)
        {
            return firstPriority.Value >= secondPriority.Value;
        }
    }
}
