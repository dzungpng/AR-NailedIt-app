using UnityEngine;
using System.Collections.Generic;

namespace RTG
{
    public class PostObjectSpawnAction : IUndoRedoAction
    {
        private bool _cleanupOnRemovedFromStack;
        private List<GameObject> _spawnedParents = new List<GameObject>();

        public PostObjectSpawnAction(List<GameObject> spawnedParents)
        {
            _spawnedParents = new List<GameObject>(spawnedParents);
        }

        public void Execute()
        {
            RTUndoRedo.Get.RecordAction(this);
        }

        public void Undo()
        {
            if (_spawnedParents != null)
            {
                foreach (var parent in _spawnedParents)
                {
                    parent.SetActive(false);
                }
                _cleanupOnRemovedFromStack = true;
            }
        }

        public void Redo()
        {
            if (_spawnedParents != null)
            {
                foreach (var parent in _spawnedParents)
                {
                    parent.SetActive(true);
                }
                _cleanupOnRemovedFromStack = false;
            }
        }

        public void OnRemovedFromUndoRedoStack()
        {
            if (_cleanupOnRemovedFromStack && _spawnedParents.Count != 0)
            {
                foreach (var parent in _spawnedParents) GameObject.Destroy(parent);
                _spawnedParents.Clear();
            }
        }
    }

    public class PostObjectTransformsChangedAction : IUndoRedoAction
    {
        private List<LocalTransformSnapshot> _preChangeTransformSnapshots = new List<LocalTransformSnapshot>();
        private List<LocalTransformSnapshot> _postChangeTransformSnapshots = new List<LocalTransformSnapshot>();

        public PostObjectTransformsChangedAction(List<LocalTransformSnapshot> preChangeTransformSnapshots,
                                                 List<LocalTransformSnapshot> postChangeTransformSnapshots)
        {
            _preChangeTransformSnapshots = new List<LocalTransformSnapshot>(preChangeTransformSnapshots);
            _postChangeTransformSnapshots = new List<LocalTransformSnapshot>(postChangeTransformSnapshots);
        }

        public void Execute()
        {
            RTUndoRedo.Get.RecordAction(this);
        }

        public void Undo()
        {
            foreach (var snapshot in _preChangeTransformSnapshots)
            {
                snapshot.Apply();
            }
        }

        public void Redo()
        {
            foreach (var snapshot in _postChangeTransformSnapshots)
            {
                snapshot.Apply();
            }
        }

        public void OnRemovedFromUndoRedoStack()
        {
        }
    }

    public class PostGizmoTransformsChangedAction : IUndoRedoAction
    {
        private List<LocalGizmoTransformSnapshot> _preChangeTransformSnapshots = new List<LocalGizmoTransformSnapshot>();
        private List<LocalGizmoTransformSnapshot> _postChangeTransformSnapshots = new List<LocalGizmoTransformSnapshot>();

        public PostGizmoTransformsChangedAction(List<LocalGizmoTransformSnapshot> preChangeTransformSnapshots,
                                                List<LocalGizmoTransformSnapshot> postChangeTransformSnapshots)
        {
            _preChangeTransformSnapshots = new List<LocalGizmoTransformSnapshot>(preChangeTransformSnapshots);
            _postChangeTransformSnapshots = new List<LocalGizmoTransformSnapshot>(postChangeTransformSnapshots);
        }

        public void Execute()
        {
            RTUndoRedo.Get.RecordAction(this);
        }

        public void Undo()
        {
            foreach (var snapshot in _preChangeTransformSnapshots)
            {
                snapshot.Apply();
            }
        }

        public void Redo()
        {
            foreach (var snapshot in _postChangeTransformSnapshots)
            {
                snapshot.Apply();
            }
        }

        public void OnRemovedFromUndoRedoStack()
        {
        }
    }

    public class DuplicateObjectsAction : IUndoRedoAction
    {
        private List<GameObject> _rootsToDuplicate;
        private List<GameObject> _duplicateResult = new List<GameObject>();
        private bool _cleanupOnRemovedFromStack;

        public List<GameObject> DuplicateResult { get { return new List<GameObject>(_duplicateResult); } }

        public DuplicateObjectsAction(List<GameObject> rootsToDuplicate)
        {
            _rootsToDuplicate = GameObjectEx.FilterParentsOnly(rootsToDuplicate);
        }

        public void Execute()
        {
            if (_rootsToDuplicate.Count != 0)
            {
                var cloneConfig = ObjectCloning.DefaultConfig;

                foreach (var root in _rootsToDuplicate)
                {
                    Transform rootTransform = root.transform;
                    cloneConfig.Layer = root.layer;
                    cloneConfig.Parent = rootTransform.parent;

                    GameObject clonedRoot = ObjectCloning.CloneHierarchy(root, cloneConfig);
                    _duplicateResult.Add(clonedRoot);
                }

                RTUndoRedo.Get.RecordAction(this);
            }
        }

        public void Undo()
        {
            if (_duplicateResult != null)
            {
                foreach (var duplicateRoot in _duplicateResult)
                {
                    duplicateRoot.SetActive(false);
                }
                _cleanupOnRemovedFromStack = true;
            }
        }

        public void Redo()
        {
            if (_duplicateResult != null)
            {
                foreach (var duplicateRoot in _duplicateResult)
                {
                    duplicateRoot.SetActive(true);
                }
                _cleanupOnRemovedFromStack = false;
            }
        }

        public void OnRemovedFromUndoRedoStack()
        {
            if (_cleanupOnRemovedFromStack && _duplicateResult.Count != 0)
            {
                foreach (var duplicateRoot in _duplicateResult) GameObject.Destroy(duplicateRoot);
                _duplicateResult.Clear();
            }
        }
    }
}
