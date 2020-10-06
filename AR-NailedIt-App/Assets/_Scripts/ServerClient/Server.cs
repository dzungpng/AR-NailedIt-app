using System;
using System.Collections;
using System.Collections.Generic;
using System.Text;
using UnityEngine;
using UnityEngine.Networking;
using UnityEngine.UI;

/// <summary>
/// Using the UDP protocol for transport layer.
/// </summary>

public class ServerClient
{
    public int connectionId;
    public string PlayerName;
    public Quaternion Rotation;
}
public class Server : MonoBehaviour
{
    private const int MAX_CONNECTION = 100;

    private int port = 5701;

    private int HostId;
    private int WebHostID;

    private int ReliableChannel;
    private int UnreliableChannel;
    //private int ReliableFragmentedChannel;

    private bool is_started = false;
    private byte error;

    private List<ServerClient> clients = new List<ServerClient>();

    private float lastRotationUpdate;
    private float UpdateRate = 0.05f;

    public bool Broadcasting;
    private bool BoradCasting_Changed;

    public Text status;
    public InputField xPos;
    public InputField yPos;
    public InputField zPos;
    public InputField xRot;
    public InputField yRot;
    public InputField zRot;

    // Chatbox UI
    public InputField inputChatText;
    public Button sendInputChatText;
    public Text chatBox;

    public Button bStep1;
    public Button bStep2;
    public Button bStep3;
    public Button bChangeDrillPoint;


    //Drill guide
    public Button drill_fwd;
    public Button drill_back;
    public Button drill_left;
    public Button drill_right;
    public Button drill_up;
    public Button drill_down;

    //nail axis
    public Button nail_fwd;
    public Button nail_back;
    public Button nail_left;
    public Button nail_right;
    public Button nail_up;
    public Button nail_down;


    private void Start()
    {
        NetworkTransport.Init();
        ConnectionConfig CC = new ConnectionConfig();

        ReliableChannel = CC.AddChannel(QosType.Reliable);
        UnreliableChannel = CC.AddChannel(QosType.Unreliable);
        //ReliableFragmentedChannel = CC.AddChannel(QosType.ReliableFragmented);

        HostTopology topo = new HostTopology(CC,MAX_CONNECTION);

        HostId = NetworkTransport.AddHost(topo, port, null);

        WebHostID = NetworkTransport.AddWebsocketHost(topo, port, null);

        is_started = true;
        Utils.updateScrollBox(status,"Server is ready!");
        Broadcasting = false;


        //Buttons for changing steps
        if (bStep1 != null)
            bStep1.onClick.AddListener(mStep1);

        if (bStep2 != null)
            bStep2.onClick.AddListener(mStep2);

        if (bStep3 != null)
            bStep3.onClick.AddListener(mStep3);

        if (bStep3 != null)
            bChangeDrillPoint.onClick.AddListener(mChangeDrillPoint);

        drill_back.onClick.AddListener(mdrill_back);
        drill_fwd.onClick.AddListener(mdrill_fwd);
        drill_right.onClick.AddListener(mdrill_right);
        drill_left.onClick.AddListener(mdrill_left);
        drill_up.onClick.AddListener(mdrill_up);
        drill_down.onClick.AddListener(mdrill_down);

        nail_back.onClick.AddListener(mnail_back);
        nail_fwd.onClick.AddListener(mnail_fwd);
        nail_right.onClick.AddListener(mnail_right);
        nail_left.onClick.AddListener(mnail_left);
        nail_up.onClick.AddListener(mnail_up);
        nail_down.onClick.AddListener(mnail_down);

    }

    //Functions for sending STEP command to hololens
    public void mStep1()
    {
        bStep1.GetComponent<Image>().color = Color.green;
        bStep2.GetComponent<Image>().color = Color.white;
        bStep3.GetComponent<Image>().color = Color.white;

        StartCoroutine(start_Step1());
    }
    IEnumerator start_Step1()
    {
        yield return new WaitForSeconds(0.55f);
        string msg = "STP|1";
        Send(msg, ReliableChannel, clients);
    }

    public void mStep2()
    {
        bStep1.GetComponent<Image>().color = Color.white;
        bStep2.GetComponent<Image>().color = Color.green;
        bStep3.GetComponent<Image>().color = Color.white;
        StartCoroutine(start_Step2());
    }
 
    public void mStep3()
    {
        bStep1.GetComponent<Image>().color = Color.white;
        bStep2.GetComponent<Image>().color = Color.white;
        bStep3.GetComponent<Image>().color = Color.green;
        StartCoroutine(start_Step3());
    }
    public void mChangeDrillPoint()
    {
        StartCoroutine(change_drill_point());
    }

    IEnumerator start_Step2()
    {
        yield return new WaitForSeconds(0.55f);
        string msg = "STP|2";
        Send(msg, ReliableChannel, clients);
    }
    IEnumerator start_Step3()
    {
        yield return new WaitForSeconds(0.55f);
        string msg = "STP|3";
        Send(msg, ReliableChannel, clients);
    }
    IEnumerator change_drill_point()
    {
        yield return new WaitForSeconds(0.55f);
        string msg = "NAL|1";
        Send(msg, ReliableChannel, clients);
    }
    /////////////////////////////////////////////////////////////////////
    //////NAIL CONTROLS
    /////////////////////////////////////////////////////////////////////
    public void mnail_fwd()
    {
        StartCoroutine(start_nail_fwd());
    }
    IEnumerator start_nail_fwd()
    {
        yield return new WaitForSeconds(0.55f);
        string msg = "NIL|f";
        Send(msg, ReliableChannel, clients);
    }

    public void mnail_back()
    {
        StartCoroutine(start_nail_back());
    }
    IEnumerator start_nail_back()
    {
        yield return new WaitForSeconds(0.55f);
        string msg = "NIL|b";
        Send(msg, ReliableChannel, clients);
    }
    public void mnail_left()
    {
        StartCoroutine(start_nail_left());
    }
    IEnumerator start_nail_left()
    {
        yield return new WaitForSeconds(0.55f);
        string msg = "NIL|l";
        Send(msg, ReliableChannel, clients);
    }
    public void mnail_right()
    {
        StartCoroutine(start_nail_right());
    }
    IEnumerator start_nail_right()
    {
        yield return new WaitForSeconds(0.55f);
        string msg = "NIL|r";
        Send(msg, ReliableChannel, clients);
    }

    public void mnail_up()
    {
        StartCoroutine(start_nail_up());
    }
    IEnumerator start_nail_up()
    {
        yield return new WaitForSeconds(0.55f);
        string msg = "NIL|u";
        Send(msg, ReliableChannel, clients);
    }

    public void mnail_down()
    {
        StartCoroutine(start_nail_down());
    }
    IEnumerator start_nail_down()
    {
        yield return new WaitForSeconds(0.55f);
        string msg = "NIL|d";
        Send(msg, ReliableChannel, clients);
    }

    /////////////////////////////////////////////////////////////////////
    ///DRILL CONTROLS
    /////////////////////////////////////////////////////////////////////
    public void mdrill_fwd()
    {
        StartCoroutine(start_drill_fwd());
    }
    IEnumerator start_drill_fwd()
    {
        yield return new WaitForSeconds(0.55f);
        string msg = "DRL|f";
        Send(msg, ReliableChannel, clients);
    }

    public void mdrill_back()
    {
        StartCoroutine(start_drill_back());
    }
    IEnumerator start_drill_back()
    {
        yield return new WaitForSeconds(0.55f);
        string msg = "DRL|b";
        Send(msg, ReliableChannel, clients);
    }
    public void mdrill_left()
    {
        StartCoroutine(start_drill_left());
    }
    IEnumerator start_drill_left()
    {
        yield return new WaitForSeconds(0.55f);
        string msg = "DRL|l";
        Send(msg, ReliableChannel, clients);
    }
    public void mdrill_right()
    {
        StartCoroutine(start_drill_right());
    }
    IEnumerator start_drill_right()
    {
        yield return new WaitForSeconds(0.55f);
        string msg = "DRL|r";
        Send(msg, ReliableChannel, clients);
    }

    public void mdrill_up()
    {
        StartCoroutine(start_drill_up());
    }
    IEnumerator start_drill_up()
    {
        yield return new WaitForSeconds(0.55f);
        string msg = "DRL|u";
        Send(msg, ReliableChannel, clients);
    }

    public void mdrill_down()
    {
        StartCoroutine(start_drill_down());
    }
    IEnumerator start_drill_down()
    {
        yield return new WaitForSeconds(0.55f);
        string msg = "DRL|d";
        Send(msg, ReliableChannel, clients);
    }

    /////////////////////////////////////////////////////////////////////

    private void Update()
    {
        if (!is_started) return;
        int recHostId;
        int connectionId;
        int channelId;
        byte[] recBuffer = new byte[1024];
        int bufferSize = 1024;
        int dataSize;
        byte error;
        NetworkEventType recData = NetworkTransport.Receive(out recHostId, out connectionId, out channelId, recBuffer, bufferSize, out dataSize, out error);
        switch (recData)
        {
            case NetworkEventType.ConnectEvent:
                Debug.Log("Player:" + connectionId + " has connected!");
                Onconnection(connectionId);
                Utils.updateScrollBox(status, "Player: " + connectionId + " has connected");
                break;
            case NetworkEventType.DataEvent:
                string msg = Encoding.Unicode.GetString(recBuffer,0,dataSize);
                string[] splitData = msg.Split('|');

                switch (splitData[0])
                {
                    case "NAMEIS":
                        OnNameIs(connectionId,splitData[1]);
                        break;

                    case "MYROT":
                        OnMyRot(connectionId,splitData[1]);
                        break;

                    case "CALIS":
                        OnCALIS(connectionId, splitData[1]);
                        break;

                    case "HANDLEDAT":
                        OnReceiveHandleData(splitData[1]);
                        break;

                    default:
                        Utils.updateScrollBox(status, "Invalid Message : " + msg);
                        break;
                }
                break;
            case NetworkEventType.DisconnectEvent:
                OnDisconnection(connectionId);
                Utils.updateScrollBox(status, "Player " + connectionId + " has disconnected");
                break;

            case NetworkEventType.BroadcastEvent:

                break;
        }
        //Ask for rotation update
        if (Broadcasting)
        {
            if (Time.time - lastRotationUpdate > UpdateRate)
            {
                if (BoradCasting_Changed)
                {
                    Send("ONBC|", ReliableChannel, clients);
                    BoradCasting_Changed = false;
                }
                lastRotationUpdate = Time.time;
                string m = "ROT|";
                GameObject datamanager = GameObject.Find("DataManager");
                Quaternion data = datamanager.GetComponent<DataManager>().RealSense_Rotation;
                m += data.x.ToString() + '%' + data.y.ToString() + '%' + data.z.ToString() + '%' + data.w.ToString() + '%';
                data = datamanager.GetComponent<DataManager>().Inertia_Rotation;
                m += data.x.ToString() + '%' + data.y.ToString() + '%' + data.z.ToString() + '%' + data.w.ToString() + '%';
                m += '|';
                Send(m, UnreliableChannel, clients);
            }
        }
        if(!Broadcasting)
        {
            if (BoradCasting_Changed)
            {
                Send("OFFBC|", ReliableChannel, clients);
                BoradCasting_Changed = false;
            }
        }
        
    }
    
    private void OnCALIS(int connectionId, string data)
    {
        string[] rots = data.Split('%');
        Quaternion rot = new Quaternion(float.Parse(rots[0]), float.Parse(rots[1]), float.Parse(rots[2]), float.Parse(rots[3]));
        GameObject Handle = GameObject.Find("RS_Handle");
        if(Handle!= null)
        {
            //Handle.GetComponent<Handle>().Set_Cali(rot);
            //Handle.GetComponent<Handle>().Calibrated = true;
        }
    }


    private void Onconnection(int connectionid)
    {
        //Add this player to a list;
        ServerClient c = new ServerClient();
        c.connectionId = connectionid;
        c.PlayerName = "Default";
        clients.Add(c);

        //When the player joins this server, tell him his id;
        //Ask for name and send this name to all the other clients.

        string msg = "ASKNAME|" + connectionid + "|";
        foreach(ServerClient sc in clients)
        {
            msg += sc.PlayerName + '%' + sc.connectionId + "|";
        }
        Send(msg, ReliableChannel, connectionid);
    }


    private void OnDisconnection(int cnnId)
    {
        clients.Remove(clients.Find(x => x.connectionId == cnnId));
        Send("DC|" + cnnId + "|", ReliableChannel, clients);
    }


    private void OnNameIs(int cnnId, string PlayerName)
    {

        clients.Find(x => x.connectionId == cnnId).PlayerName = PlayerName;
        string msg = "CNN|" + PlayerName + '|' + cnnId + '|';
        Send(msg, ReliableChannel, clients);
    }

    private void OnMyRot(int cnnId,string data)
    {
        return;
    }
    private void Send(string message,int channelId, int cnnId)
    {
        List<ServerClient> c = new List<ServerClient>();
        c.Add(clients.Find(x => x.connectionId == cnnId));
        Send(message, channelId, c);
    }

    private void Send(string message,int channelId, List<ServerClient> c)
    {
        Utils.updateScrollBox(status, "Sending : " + message);
        byte[] msg = Encoding.Unicode.GetBytes(message);
        foreach (ServerClient sc in clients)
        {
            NetworkTransport.Send(HostId, sc.connectionId, channelId, msg, msg.Length * sizeof(char), out error);
        }
    }

    // Use for sending LZ4-compressed messages in form of bytes
    private void Send(byte[] message, int channelId, List<ServerClient> c)
    {
        Utils.updateScrollBox(status, "Sending : " + message);
        foreach (ServerClient sc in clients)
        {
            NetworkTransport.Send(HostId, sc.connectionId, channelId, message, message.Length * sizeof(char), out error);
        }
    }


    public void Set_BoradCasting()
    {
        Broadcasting = !Broadcasting;
        BoradCasting_Changed = true;
    }


    public void Calibrate()
    {
        GameObject DataManager = GameObject.Find("DataManager");
        int Cal_x, Cal_y, Cal_z;
        bool Reversed;
        if (DataManager != null)
        {
            Cal_x = DataManager.GetComponent<DataManager>().cal_x;
            Cal_y = DataManager.GetComponent<DataManager>().cal_y;
            Cal_z = DataManager.GetComponent<DataManager>().cal_z;
            Reversed = DataManager.GetComponent<DataManager>().XZ_Reversed;
        }
        else
        {
            Cal_x = 1;
            Cal_y = 1;
            Cal_z = 1;
            Reversed = false;
        }
        string msg = "CAL|" + Cal_x.ToString() + '%' + Cal_y.ToString() + '%' + Cal_z.ToString() + '%' + Reversed.ToString() + '%' + '|';
        Send(msg,ReliableChannel,clients);
    }


    public void MoveDrill()
    {
        Send("MD" + '|', ReliableChannel, clients);
    }


    // Send to HoloLens client drill cone and plane data
    public void SendPlanningData(string data)
    {
        string msg = "DAT|" + data + '|';
        Send(msg, ReliableChannel, clients);
    }


    public void Send_Adjust(float x, float y, float z,float x_rot,float y_rot,float z_rot, float scale)
    {
        string msg = "ADJ|";
        msg += x.ToString() + '%' + y.ToString() + '%' + z.ToString() + '%' + x_rot.ToString()+ '%' + y_rot.ToString() + '%' + z_rot.ToString() +'%'+ scale.ToString() + '|';
        Send(msg, ReliableChannel, clients);
    }


    public void SendNailData(bool Nail_Status)
    {
        bool status = Nail_Status;
        int code;
        if (status) code = 1;
        else code = 0;
        string msg = "NAIL|" + code.ToString() + '|';
        Send(msg, ReliableChannel, clients);
    }

    private void OnReceiveHandleData(string handleData)
    {

        //Debug.Log("receiving handle data.................................");
        string[] splitHandleData = handleData.Split(';');
        Vector3 position = Utils.StringToVector3(splitHandleData[0]);
        Vector3 rotation = Utils.StringToVector3(splitHandleData[1]);


        // Modifies the current orientation and position of the arm on desktop to match the one on HoloLens client
        // Make sure the arm is marked visible with the display arm checkbox
        // ArmModelDropdown.selectedArmModel.transform.position = position;
        ArmModelDropdown.selectedArmModel.transform.rotation = Quaternion.Euler(rotation);

        xPos.SetTextWithoutNotify(position.x.ToString());
        yPos.SetTextWithoutNotify(position.y.ToString());
        zPos.SetTextWithoutNotify(position.z.ToString());

        xRot.SetTextWithoutNotify(rotation.x.ToString());
        yRot.SetTextWithoutNotify(rotation.y.ToString());
        zRot.SetTextWithoutNotify(rotation.z.ToString());
    }

    public void SendInputChatText()
    {
        string msg = "MSG|" + inputChatText.text;
        Send(msg, ReliableChannel, clients);
        chatBox.text += "Server: " + inputChatText.text + "\n";
    }
}
