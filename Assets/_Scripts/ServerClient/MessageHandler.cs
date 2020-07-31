using System.Collections;
using UnityEngine;
using UnityEngine.UI;
using Mirror;
using System;
using System.IO;


public class MessageHandler : MonoBehaviour
{
    static readonly ILogger logger = LogFactory.GetLogger(typeof(MessageHandler));
    
    private InputField chatMessage = null;
    private Text chatHistory = null;

    // Variables facilitating data transfer between HoloLens and Desktop
    public ModelGeneration clientModelGenerator;
    public bool handleTargetFound { get; set; } = false;
    public bool isTransferringHandleData { get; set; } = false;
    public bool isLoggingHandleData { get; set; } = false;
    public GameObject hololensHandle;
    public Toggle logDataToggle;
    private string logDataPath;

    // Server handle orientation data containers
    public InputField xPos;
    public InputField yPos;
    public InputField zPos;
    public InputField xRot;
    public InputField yRot;
    public InputField zRot;

    public void Awake()
    {
        Player.OnMessage += OnPlayerMessage;

        // logDataToggle only exists on the server side
        if(logDataToggle != null)
        {
            logDataToggle.onValueChanged.AddListener(delegate
            {
                ToggleValueChanged(logDataToggle);
            });
        }
        logDataPath = Environment.GetFolderPath(Environment.SpecialFolder.Desktop) + @"\loggedData.txt";
        StreamWriter sw = File.CreateText(logDataPath);
        sw.Close();
    }

        public void Update()
    {
        if (handleTargetFound && isTransferringHandleData)
        {
            OnFoundHandleVuMark();
        }
    }

    public void InitializeChatUIComponents()
    {
        chatMessage = GameObject.Find("ChatInputField").GetComponent<InputField>();
        chatHistory = GameObject.Find("ChatText").GetComponent<Text>();
    }

    void OnPlayerMessage(Player player, string message)
    {
        if (chatMessage == null)
        {
            InitializeChatUIComponents();
        }
        if (player.isServer)
        {
            // Player is server and is receiving the message
            if (!player.isLocalPlayer)
            {
                string[] messageParts = message.Split('|');
                switch (messageParts[0])
                {
                    case "HANDLEDATA":
                        // Don't add messages to chatHistory if client is trying to send handle data
                        // Otherwise the chatbox will be overflowed with messages
                        OnReceiveHandleData(messageParts[1]);
                        return;
                    default:
                        break;
                }
            }

        }
        else if (player.isClientOnly)
        {
            // player is client and is sending message
            if (player.isLocalPlayer)
            {
                string[] messageParts = message.Split('|');
                switch (messageParts[0])
                {
                    case "HANDLEDATA":
                        // Don't add messages to chatHistory if client is trying to send handle data
                        // Otherwise the chatbox will be overflowed with messages
                        return;
                    default:
                        break;
                }
            }
            // player is client and is receiving message
            else
            {
                string[] messageParts = message.Split('|');
                switch (messageParts[0])
                {
                    case "PLANNINGDATA":
                        clientModelGenerator.ParseData(messageParts[1]);
                        break;
                    default:
                        break;
                }
            }
        }
        string prettyMessage = player.isLocalPlayer ?
                            $"<color=red>{player.playerName}: </color> {message}" :
                            $"<color=blue>{player.playerName}: </color> {message}";
        AppendMessage(prettyMessage);
        logger.Log(message);
    }

    // Player sending the message by pressing the Enter key
    public void OnSend()
    {
        if (chatMessage == null)
        {
            InitializeChatUIComponents();
        }
        if (Input.GetKeyDown(KeyCode.Return)) {
            if (chatMessage.text.Trim() == "")
                return;

            // get our player
            Player player = NetworkClient.connection.identity.GetComponent<Player>();

            // send a message
            player.CmdSend(chatMessage.text.Trim());

            chatMessage.text = "";
        }
    }

    // Player sending the message by pressing the Send button in chatbox panel
    public void OnSendButton()
    {
        if (chatMessage == null)
        {
            InitializeChatUIComponents();
        }
        if (chatMessage.text.Trim() == "")
            return;

        // get our player
        Player player = NetworkClient.connection.identity.GetComponent<Player>();

        // send a message
        player.CmdSend(chatMessage.text.Trim());

        chatMessage.text = "";
    }

    // Player hitting the send data button (Server side)
    public void OnSendDataButton(string message)
    {
        if (message.Trim() == "")
            return;

        // get our player
        Player player = NetworkClient.connection.identity.GetComponent<Player>();

        // send data
        player.CmdSend(message);
    }

    // When the HoloLens' handle image target is found, the Hololens automatically send orientation data
    // to the server
    private void OnFoundHandleVuMark()
    {
        Debug.Log("OnFoundHandleVuMark");
        Vector3 position = hololensHandle.transform.position;
        Vector3 rotation = hololensHandle.transform.eulerAngles;
        string handleData =
                "HANDLEDATA|" + position.x + "," + position.y + "," + position.z + ";" + rotation.x + "," + rotation.y + "," + rotation.z;

        Player player = NetworkClient.connection.identity.GetComponent<Player>();
        player.CmdSend(handleData);
    }

    // When the server receives handle data from the HoloLens, it processes the data and orient the handle on 
    // the desktop app to match the orientation of the handle on the holoLens app. If the log data checkbox 
    // is checked, the data will also gets logged to a file on the desktop
    private void OnReceiveHandleData(string handleData)
    {
        string[] splitHandleData = handleData.Split(';');
        Vector3 position = Utils.StringToVector3(splitHandleData[0]);
        Vector3 rotation = Utils.StringToVector3(splitHandleData[1]);

        // Modifies the current orientation and position of the arm on desktop to match the one on HoloLens client
        // Make sure the arm is marked visible with the display arm checkbox

        // ArmModelDropdown.selectedArmModel.transform.position = position; --> uncomment to match position
        ArmModelDropdown.selectedArmModel.transform.rotation = Quaternion.Euler(rotation);
        //NailModelDropdown.selectedNailModel.transform.rotation = Quaternion.Euler(rotation);

        xPos.SetTextWithoutNotify(position.x.ToString());
        yPos.SetTextWithoutNotify(position.y.ToString());
        zPos.SetTextWithoutNotify(position.z.ToString());

        xRot.SetTextWithoutNotify(rotation.x.ToString());
        yRot.SetTextWithoutNotify(rotation.y.ToString());
        zRot.SetTextWithoutNotify(rotation.z.ToString());

        // Log the handle data to log file in the current directory
        if (isLoggingHandleData)
        {
            string logData =
            "Handle Image Target\n" +
            "[Position]" + position.x + " " + position.y + " " + position.z + " " + "\n" +
            "[Rotation]" + rotation.x + " " + rotation.y + " " + rotation.z + " " + "\n";
            Utils.LogData(logData, logDataPath, includesTimeStamp: true);
        }
    }

    void ToggleValueChanged(Toggle toggle)
    {
        isLoggingHandleData = toggle.isOn;
    }

    internal void AppendMessage(string message)
    {
        StartCoroutine(AppendMessageToScrollView(message));
    }

    IEnumerator AppendMessageToScrollView(string message)
    {
        chatHistory.text += message + "\n";

        // it takes 2 frames for the UI to update ?!?!
        yield return null;
        yield return null;
    }
}

