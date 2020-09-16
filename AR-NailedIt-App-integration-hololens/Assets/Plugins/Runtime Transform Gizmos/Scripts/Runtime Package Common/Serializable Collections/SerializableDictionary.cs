using UnityEngine;
using System;
using System.Linq;
using System.Collections.Generic;

namespace RTG
{
    [Serializable]
    public class SerializableDictionary<SerializedKeyType, SerializedValueType>
        : ISerializationCallbackReceiver
    {
        private Dictionary<SerializedKeyType, SerializedValueType> _dictionary = new Dictionary<SerializedKeyType, SerializedValueType>();
        [SerializeField]
        private List<SerializedKeyType> _serializedKeys = new List<SerializedKeyType>();
        [SerializeField]
        private List<SerializedValueType> _serializedValues = new List<SerializedValueType>();

        public Dictionary<SerializedKeyType, SerializedValueType> Dictionary { get { return _dictionary; } }
        public SerializedValueType this[SerializedKeyType index] { get { return _dictionary[index]; } set { _dictionary[index] = value; } } 

        public void OnBeforeSerialize()
        {
            RemoveNullKeys();
            _serializedKeys.Clear();
            _serializedValues.Clear();

            foreach (var keyValuePair in _dictionary)
            {
                _serializedKeys.Add(keyValuePair.Key);
                _serializedValues.Add(keyValuePair.Value);
            }
        }

        public void OnAfterDeserialize()
        {
            _dictionary = new Dictionary<SerializedKeyType, SerializedValueType>();

            int numberOfKeyValuePairs = Math.Min(_serializedKeys.Count, _serializedValues.Count);
            for (int keyValuePairIndex = 0; keyValuePairIndex < numberOfKeyValuePairs; keyValuePairIndex++)
            {
                _dictionary.Add(_serializedKeys[keyValuePairIndex], _serializedValues[keyValuePairIndex]);
            }

            _serializedKeys.Clear();
            _serializedValues.Clear();
        }

        public void Clear()
        {
            _dictionary.Clear();
        }

        public void Add(SerializedKeyType key, SerializedValueType value)
        {
            _dictionary.Add(key, value);
        }

        public bool ContainsKey(SerializedKeyType key)
        {
            return _dictionary.ContainsKey(key);
        }

        public void Copy(SerializableDictionary<SerializedKeyType, SerializedValueType> other)
        {
            Clear();
            foreach(var pair in other.Dictionary)
            {
                _dictionary.Add(pair.Key, pair.Value);
            }
        }

        public void RemoveNullKeys()
        {
            _dictionary = (from keyValuePair in _dictionary
                           where !EqualityComparer<SerializedKeyType>.Default.Equals(keyValuePair.Key, default(SerializedKeyType))
                           select keyValuePair).ToDictionary(keyValuePair => keyValuePair.Key, keyValuePair => keyValuePair.Value);
        }
    }
}