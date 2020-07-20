using System.Collections;
using UnityEngine;
using System.IO;
using UnityEngine.UI;
using SimpleFileBrowser;


public class FileParser : MonoBehaviour
{
    public string data;
    public Text dataContainer;
    public MessageHandler messageHandler;

    // Start is called before the first frame update
    void Start()
    {
        data = "Empty data";
    }

    public void ReadData(string path)
    {
        StreamReader rd = new StreamReader(path);
        data = rd.ReadToEnd();
        dataContainer.text += "New data: \n" + data + "\n\n";
        rd.Close();
    }

    public void SendData()
    {
        messageHandler.OnSendDataButton("PLANNINGDATA|" + data);
    }

    public void BrowseData()
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
            ReadData(FileBrowser.Result[0]);
        }
    }
}
