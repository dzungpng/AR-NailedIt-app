using UnityEngine;
using System;
using System.Collections.Generic;

namespace RTG
{
    public enum UndoRedoOpType
    {
        Undo = 0,
        Redo
    }

    public delegate void UndoStartHandler(IUndoRedoAction action);
    public delegate void UndoEndHandler(IUndoRedoAction action);
    public delegate void RedoStartHandler(IUndoRedoAction action);
    public delegate void RedoEndHandler(IUndoRedoAction action);
    public delegate void CanUndoRedoHandler(UndoRedoOpType undoRedoOpType, YesNoAnswer answer);

    public class RTUndoRedo : MonoSingleton<RTUndoRedo>
    {
        public event UndoStartHandler UndoStart;
        public event UndoEndHandler UndoEnd;
        public event RedoStartHandler RedoStart;
        public event RedoEndHandler RedoEnd;
        public event CanUndoRedoHandler CanUndoRedo;

        private class ActionGroup
        {
            public List<IUndoRedoAction> Actions = new List<IUndoRedoAction>();
            public ActionGroup(IUndoRedoAction action)
            {
                Actions.Add(action);
            }
        }

        [SerializeField]
        private bool _isEnabled = true;
        [SerializeField]
        private int _actionLimit = 50;

        private List<ActionGroup> _actionGroupStack = new List<ActionGroup>();
        private int _stackPointer = -1;
        public bool IsEnabled { get { return _isEnabled; } }
        public int ActionLimit { get { return _actionLimit; } set { ClearActions(); _actionLimit = Mathf.Max(value, 1); } }

        public void SetEnabled(bool isEnabled)
        {
            _isEnabled = isEnabled;
        }

        public void ClearActions()
        {
            RemoveGroups(0, _actionGroupStack.Count);
            _stackPointer = -1;
        }

        public void RecordAction(IUndoRedoAction action)
        {
            if (!_isEnabled) return;

            // We must handle a special scenario which can occur when the user has been undoing
            // actions and effectively moving the stack pointer somewhere in the middle of the
            // stack. In that case, when a new action is recorded, this action will invalidate
            // all actions which follow.
            if (_actionGroupStack.Count != 0 && 
                _stackPointer < _actionGroupStack.Count - 1)
            {
                // Calculate the index of the first action to be removed and the number of actions to remove
                // and then use these values to remove the correct range of actions from the stack.
                int removeStartIndex = _stackPointer + 1;
                int removeCount = _actionGroupStack.Count - removeStartIndex;
                RemoveGroups(removeStartIndex, removeCount);
            }

            _actionGroupStack.Add(new ActionGroup(action));

            // The last step is to check if the current number of recorded actions is bigger than the
            // allowed maximum. If it is, we need to remove the action from the bottom of the stack. 
            // Finally, we set the stack pointer to point to the last recorded action.
            if (_actionGroupStack.Count > _actionLimit) RemoveGroups(0, 1);
            _stackPointer = _actionGroupStack.Count - 1;
        }

        public void Update_SystemCall()
        {
            if (!_isEnabled) return;

            if (!Application.isEditor)
            {
                if (Input.GetKeyDown(KeyCode.Z) && Input.GetKey(KeyCode.LeftControl)) Undo();
                else
                if (Input.GetKeyDown(KeyCode.Y) && Input.GetKey(KeyCode.LeftControl)) Redo();
            }
            else
            {
                // Note: When running inside the editor, it seems that we need to add the LSHIFT key into
                //       the mix. Otherwise, Undo/Redo does not work.
                if (Input.GetKeyDown(KeyCode.Z) && Input.GetKey(KeyCode.LeftControl) && Input.GetKey(KeyCode.LeftShift)) Undo();
                else
                if (Input.GetKeyDown(KeyCode.Y) && Input.GetKey(KeyCode.LeftControl) && Input.GetKey(KeyCode.LeftShift)) Redo();
            }
        }

        private void Undo()
        {
            if (!_isEnabled || _stackPointer < 0) return;

            var group = _actionGroupStack[_stackPointer];
            YesNoAnswer answer = new YesNoAnswer();
            if (CanUndoRedo != null) CanUndoRedo(UndoRedoOpType.Undo, answer);
            if (answer.HasNo) return;

            --_stackPointer;

            foreach(var action in group.Actions)
            {
                if (UndoStart != null) UndoStart(action);
                action.Undo();
                if (UndoEnd != null) UndoEnd(action);
            }
        }

        private void Redo()
        {
            if (!_isEnabled) return;
            if (_actionGroupStack.Count == 0 || _stackPointer == _actionGroupStack.Count - 1) return;

            var group = _actionGroupStack[_stackPointer + 1];
            YesNoAnswer answer = new YesNoAnswer();
            if (CanUndoRedo != null) CanUndoRedo(UndoRedoOpType.Redo, answer);
            if (answer.HasNo) return;

            ++_stackPointer;

            foreach (var action in group.Actions)
            {
                if (RedoStart != null) RedoStart(action);
                action.Redo();
                if (RedoEnd != null) RedoEnd(action);
            }
        }

        private void RemoveGroups(int startIndex, int count)
        {
            List<ActionGroup> groupsToRemove = _actionGroupStack.GetRange(startIndex, count);
        
            _actionGroupStack.RemoveRange(startIndex, count);
            foreach (var group in groupsToRemove)
            {
                foreach(var action in group.Actions)
                    action.OnRemovedFromUndoRedoStack();
            }
        }

        private void OnValidate()
        {
            ActionLimit = ActionLimit;
        }
    }
}
