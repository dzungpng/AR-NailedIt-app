using System.Collections.Generic;
using System.Collections;
using UnityEngine;
using UnityEngine.UI;
using SimpleFileBrowser;
using Dummiesman; // ObjImporter
using System.Linq;

public class ArmModelDropdown : MonoBehaviour
{
    List<string> armModelNames = new List<string>() { "Arm", "Browse..." };
    List<GameObject> armModels = new List<GameObject>();
    public Dropdown armDropdown;
    int armCount;
    int selectedArmIndex = 0;
    public static GameObject selectedArmModel;

    // Start is called before the first frame update
    void Start()
    {
        armCount = armModelNames.Count;
        PopulateDropdown();
        PopulateModels();
        selectedArmModel = armModels[0];
        armDropdown.onValueChanged.AddListener(delegate {
            MyDropdownValueChangedHandler(armDropdown);
        });

        // File browsing settings
        FileBrowser.SetFilters(true, new FileBrowser.Filter("3D Models", ".obj"), new FileBrowser.Filter("Textfiles", ".txt"));
        FileBrowser.SetDefaultFilter(".obj");
        FileBrowser.AddQuickLink("Users", "C:\\Users", null);
    }

    void Destroy()
    {
        armDropdown.onValueChanged.RemoveAllListeners();
    }

    void PopulateModels()
    {
        for (int i = 0; i < armCount - 1; i++)
        {
            armModels.Add(GameObject.Find(armModelNames[i]));
        }
        for (int i = 1; i < armCount - 1; i++)
        {
            armModels[i].SetActive(false);
        }
    }

    void PopulateDropdown()
    {
        armDropdown.AddOptions(armModelNames);
    }


    IEnumerator ShowLoadDialogCoroutine()
    {
        // Show a load file dialog and wait for a response from user
        // Load file/folder: file, Allow multiple selection: true
        // Initial path: default (Documents), Title: "Load File", submit button text: "Load"
        yield return FileBrowser.WaitForLoadDialog(false, true, null, "Load File", "Load");

        // Dialog is closed
        // Print whether the user has selected some files/folders or cancelled the operation (FileBrowser.Success)
        Debug.Log(FileBrowser.Success);

        if (FileBrowser.Success)
        {
            AddObj(FileBrowser.Result[0]);
        }
    }

    private void AddObj(string fileName)
    {
        // Loading the obj and mtl files
        string[] splitString = fileName.Split('/');
        string[] nameAndExtension = splitString[splitString.Length - 1].Split('.');
        splitString = splitString.Take(splitString.Length - 1).ToArray();
        string mltFilePath = splitString + nameAndExtension[0] + ".mtl";

        var loadedObj = new OBJLoader().Load(fileName);

        // Set previously selected model inactive
        armModels[selectedArmIndex].SetActive(false);

        // Adding obj's name to dropdown list
        armModelNames[armCount - 1] = fileName;
        selectedArmIndex = armCount - 1;
        armModelNames.Add("Browse...");
        armCount++;
        armDropdown.options.Clear();
        armDropdown.AddOptions(armModelNames);
        armDropdown.SetValueWithoutNotify(selectedArmIndex);

        // Transform the obj to the correct position on screen
        loadedObj.transform.SetParent(GameObject.FindGameObjectWithTag("GroundPlane").transform, true);
        loadedObj.transform.localPosition = new Vector3(0, 1, 0);
        selectedArmModel = loadedObj;
        armModels.Add(loadedObj);
    }

    private void MyDropdownValueChangedHandler(Dropdown target)
    {
        // If selecting a loaded model
        if (target.value != armCount - 1)
        {
            armModels[selectedArmIndex].SetActive(false);
            selectedArmIndex = target.value;
            armModels[selectedArmIndex].SetActive(true);
            selectedArmModel = armModels[selectedArmIndex];
        }
        // If browsing new models
        else
        {
            StartCoroutine(ShowLoadDialogCoroutine());
        }
    }

}
