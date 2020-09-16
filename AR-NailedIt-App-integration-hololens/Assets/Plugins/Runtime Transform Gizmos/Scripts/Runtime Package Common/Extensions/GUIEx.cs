using UnityEngine;
using System.Collections.Generic;

namespace RTG
{
    public static class GUIEx
    {
        private static Stack<Color> _colorStack = new Stack<Color>();

        public static void PushColor(Color color)
        {
            _colorStack.Push(GUI.color);
            GUI.color = color;
        }

        public static void PopColor()
        {
            if (_colorStack.Count > 0) GUI.color = _colorStack.Pop();
        }
    }
}
