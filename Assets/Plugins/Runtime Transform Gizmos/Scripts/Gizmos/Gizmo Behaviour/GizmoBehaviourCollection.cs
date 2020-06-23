using UnityEngine;
using System;
using System.Collections;
using System.Collections.Generic;

namespace RTG
{
    public class GizmoBehaviourCollection : IEnumerable
    {
        private List<IGizmoBehaviour> _behaviours = new List<IGizmoBehaviour>(10);

        public int Count { get { return _behaviours.Count; } }

        public bool Add(IGizmoBehaviour behaviour)
        {
            if (!Contains(behaviour))
            {
                _behaviours.Add(behaviour);
                return true;
            }

            return false;
        }

        public bool Remove(IGizmoBehaviour behaviour)
        {
            return _behaviours.Remove(behaviour);
        }

        public Type GetFirstBehaviourOfType<Type>()
             where Type : class, IGizmoBehaviour
        {
            var list = GetBehavioursOfType<Type>();
            if (list.Count != 0) return list[0];

            return null;
        }

        public IGizmoBehaviour GetFirstBehaviourOfType(Type behaviourType)
        {
            var list = GetBehavioursOfType(behaviourType);
            if (list.Count != 0) return list[0];

            return null;
        }

        public List<Type> GetBehavioursOfType<Type>() 
            where Type : class, IGizmoBehaviour
        {
            if(Count == 0) return new List<Type>();

            var outputList = new List<Type>(Count);
            var queryType = typeof(Type);
            foreach(var behaviour in _behaviours)
            {
                var bhvType = behaviour.GetType();
                if (bhvType == queryType || bhvType.IsSubclassOf(queryType)) outputList.Add(behaviour as Type);
            }
            return outputList;
        }

        public List<IGizmoBehaviour> GetBehavioursOfType(Type behaviourType)
        {
            if (Count == 0) return new List<IGizmoBehaviour>();

            var outputList = new List<IGizmoBehaviour>(Count);
            foreach (var behaviour in _behaviours)
            {
                var bhvType = behaviour.GetType();
                if (bhvType == behaviourType || bhvType.IsSubclassOf(behaviourType)) outputList.Add(behaviour);
            }
            return outputList;
        }

        public bool Contains(IGizmoBehaviour behaviour)
        {
            return _behaviours.Contains(behaviour);
        }

        public IEnumerator<IGizmoBehaviour> GetEnumerator()
        {
            return _behaviours.GetEnumerator();
        }

        IEnumerator IEnumerable.GetEnumerator()
        {
            return GetEnumerator();
        }
    }
}
