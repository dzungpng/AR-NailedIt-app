#if UNITY_EDITOR
using UnityEngine;
using UnityEditor;

namespace RTG
{
    public abstract class DragAndDropHandler
    {
        public void Handle(Event dragAndDropEvent, Rect dropAreaRectangle)
        {
            switch (dragAndDropEvent.type)
            {
                case EventType.DragUpdated:

                    DragAndDrop.visualMode = DragAndDropVisualMode.Copy;
                    break;

                case EventType.DragPerform:

                    if (dropAreaRectangle.Contains(dragAndDropEvent.mousePosition) &&
                        dragAndDropEvent.type == EventType.DragPerform) PerformDrop();
                    break;
            }
        }

        protected abstract void PerformDrop();
    }
}
#endif