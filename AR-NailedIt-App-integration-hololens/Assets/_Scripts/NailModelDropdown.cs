using System.Collections.Generic;
using System.Collections;
using UnityEngine;
using UnityEngine.UI;
using SimpleFileBrowser;
using Dummiesman; // ObjImporter
using System.Linq;

public class NailModelDropdown : MonoBehaviour
{
    List<string> nailModelNames = new List<string>() { "Nail", "Browse..." };
    List<GameObject> nailModels = new List<GameObject>();
    public Dropdown nailDropdown;
    int nailCount;
    int selectedNailIndex = 0;
    public static GameObject selectedNailModel;

    // Start is called before the first frame update
    void Start()
    {
        nailCount = nailModelNames.Count;
        PopulateDropdown();
        PopulateModels();
        selectedNailModel = nailModels[0];
        nailDropdown.onValueChanged.AddListener(delegate {
            MyDropdownValueChangedHandler(nailDropdown);
        });

        // File browsing settings
        FileBrowser.SetFilters(true, new FileBrowser.Filter("3D Models", ".obj"), new FileBrowser.Filter("Textfiles", ".txt"));
        FileBrowser.SetDefaultFilter(".obj");
        FileBrowser.AddQuickLink("Users", "C:\\Users", null);
    }

    void Destroy()
    {
        nailDropdown.onValueChanged.RemoveAllListeners();
    }

    void PopulateModels()
    {
        for (int i = 0; i < nailCount - 1; i++)
        {
            nailModels.Add(GameObject.Find(nailModelNames[i]));
        }
        for (int i = 1; i < nailCount - 1; i++)
        {
            nailModels[i].SetActive(false);
        }
    }

    void PopulateDropdown()
    {
        nailDropdown.AddOptions(nailModelNames);
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
        nailModels[selectedNailIndex].SetActive(false);

        // Adding obj's name to dropdown list
        nailModelNames[nailCount - 1] = fileName;
        selectedNailIndex = nailCount - 1;
        nailModelNames.Add("Browse...");
        nailCount++;
        nailDropdown.options.Clear();
        nailDropdown.AddOptions(nailModelNames);
        nailDropdown.SetValueWithoutNotify(selectedNailIndex);

        // Transform the obj to the correct position on screen
        loadedObj.transform.SetParent(GameObject.FindGameObjectWithTag("GroundPlane").transform, true);
        loadedObj.transform.localPosition = new Vector3(0, 1, 0);
        selectedNailModel = loadedObj;
        nailModels.Add(loadedObj);
    }

    private void MyDropdownValueChangedHandler(Dropdown target)
    {
        // If selecting a loaded model
        if (target.value != nailCount - 1)
        {
            nailModels[selectedNailIndex].SetActive(false);
            selectedNailIndex = target.value;
            nailModels[selectedNailIndex].SetActive(true);
            selectedNailModel = nailModels[selectedNailIndex];
        }
        // If browsing new models
        else
        {
            StartCoroutine(ShowLoadDialogCoroutine());
        }
    }

}
