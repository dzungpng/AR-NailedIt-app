using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEditor;
using System.IO;
using UnityEngine.UI;
using SimpleFileBrowser;


public class FileParser : MonoBehaviour
{
    public string data;
    public Text dataContainer;

    // Start is called before the first frame update
    void Start()
    {
        data = "Empty data";
    }

    public void Read_Data(string path)
    {
        StreamReader rd = new StreamReader(path);
        data = rd.ReadToEnd();
        dataContainer.text += "New data: \n" + data + "\n\n";
        rd.Close();
    }

    public void Send_Data()
    {
        GameObject server = GameObject.Find("Server");
        if(server != null)
        {
            server.GetComponent<Server>().SendHandleData(data);
        }
    }

    public void Browse_Data()
    {
        StartCoroutine(ShowLoadDialogCoroutine());
    }

    IEnumerator ShowLoadDialogCoroutine()
    {
        // Show a load file dialog and wait for a response from user
        // Load file/folder: file, Allow multiple selection: true
        // Initial path: default (Documents), Title: "Load File", submit button text: "Load"
        yield return FileBrowser.WaitForLoadDialog(false, true, null, "Load File", "Load");

        if (FileBrowser.Success)
        {
            Debug.Log(FileBrowser.Result[0]);
            Read_Data(FileBrowser.Result[0]);
        }
    }
}
