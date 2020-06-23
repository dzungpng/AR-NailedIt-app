using System.Collections.Generic;
using System.Collections;
using UnityEngine;
using UnityEngine.UI;
using SimpleFileBrowser;
using Dummiesman; // ObjImporter

public class BoneModelDropdown : MonoBehaviour
{
    List<string> boneModelNames = new List<string>() { "Bone", "Browse..." };
    List<GameObject> boneModels = new List<GameObject>();
    public Dropdown boneDropdown;
    int boneCount;
    int selectedBoneIndex = 0;
    public static GameObject selectedBoneModel;

    // Start is called before the first frame update
    void Start()
    {
        boneCount = boneModelNames.Count;
        PopulateDropdown();
        PopulateModels();
        selectedBoneModel = boneModels[0];
        boneDropdown.onValueChanged.AddListener(delegate {
            MyDropdownValueChangedHandler(boneDropdown);
        });

        // File browsing settings
        FileBrowser.SetFilters(true, new FileBrowser.Filter("3D Models", ".obj"));
        FileBrowser.SetDefaultFilter(".obj");
        FileBrowser.AddQuickLink("Users", "C:\\Users", null);
    }

    void Destroy()
    {
        boneDropdown.onValueChanged.RemoveAllListeners();
    }

    void PopulateModels()
    {
        for (int i = 0; i < boneCount - 1; i++)
        {
            boneModels.Add(GameObject.Find(boneModelNames[i]));
        }
        for (int i = 1; i < boneCount - 1; i++)
        {
            boneModels[i].SetActive(false);
        }
    }

    void PopulateDropdown()
    {
        boneDropdown.AddOptions(boneModelNames);
    }


    IEnumerator ShowLoadDialogCoroutine()
    {
        // Show a load file dialog and wait for a response from user
        // Load file/folder: file, Allow multiple selection: true
        // Initial path: default (Documents), Title: "Load File", submit button text: "Load"
        yield return FileBrowser.WaitForLoadDialog(false, true, null, "Load File", "Load");

        if (FileBrowser.Success)
        {
            AddObj(FileBrowser.Result[0]);
        }
    }

    private void AddObj(string fileName)
    {
        // Loading the obj
        var loadedObj = new OBJLoader().Load(fileName);
        loadedObj.tag = "Bone";
        MeshRenderer mr = loadedObj.AddComponent<MeshRenderer>() as MeshRenderer;
        MeshCollider mc = loadedObj.AddComponent<MeshCollider>() as MeshCollider;
        mc.sharedMesh = loadedObj.GetComponentInChildren<MeshFilter>().mesh;

        // Set previously selected model inactive
        boneModels[selectedBoneIndex].SetActive(false);

        // Adding obj's name to dropdown list
        boneModelNames[boneCount - 1] = fileName;
        selectedBoneIndex = boneCount - 1;
        boneModelNames.Add("Browse...");
        boneCount++;
        boneDropdown.options.Clear();
        boneDropdown.AddOptions(boneModelNames);
        boneDropdown.SetValueWithoutNotify(selectedBoneIndex);

        // Transform the obj to the correct position on screen
        loadedObj.transform.SetParent(GameObject.FindGameObjectWithTag("GroundPlane").transform, true);
        loadedObj.transform.localPosition = new Vector3(0, 1, 0);
        selectedBoneModel = loadedObj;
        boneModels.Add(loadedObj);

        // Set other scripts referencing to active bone
        PlaneGenerator.bone = selectedBoneModel;
        DrillPointScript.bone = selectedBoneModel;
        VuMarkPlacement.bone = selectedBoneModel;
    }

    private void MyDropdownValueChangedHandler(Dropdown target)
    {
       // If selecting a loaded model
       if(target.value != boneCount - 1)
       {
            boneModels[selectedBoneIndex].SetActive(false);
            selectedBoneIndex = target.value;
            boneModels[selectedBoneIndex].SetActive(true);
            selectedBoneModel = boneModels[selectedBoneIndex];

            // Changes the bone object of other scripts to the currently loaded bone
            PlaneGenerator.bone = selectedBoneModel;
            DrillPointScript.bone = selectedBoneModel;
            VuMarkPlacement.bone = selectedBoneModel;
        }
       // If browsing new models, go to coroutine and open file browser
       else
       {
            StartCoroutine(ShowLoadDialogCoroutine());
       }
    }

}
