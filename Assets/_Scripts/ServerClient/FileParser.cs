using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEditor;
using System.IO;
using UnityEngine.UI;

public class FileParser : MonoBehaviour
{

    private string path = "data.txt";
    public string data;
    public Text dataContainer;

    // Start is called before the first frame update
    void Start()
    {
        data = "Empty data";
    }

    public void Read_Data()
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
}
