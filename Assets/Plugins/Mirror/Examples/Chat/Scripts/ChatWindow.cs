using System.Collections;
using UnityEngine;
using UnityEngine.UI;

namespace Mirror.Examples.Chat
{
    public class ChatWindow : MonoBehaviour
    {
        static readonly ILogger logger = LogFactory.GetLogger(typeof(ChatWindow));

        public InputField chatMessage;
        public Text chatHistory;
        public Scrollbar scrollbar;

        public void Awake()
        {
            Player.OnMessage += OnPlayerMessage;
        }

        void OnPlayerMessage(Player player, string message)
        {
            if(player.isServer)
            {
                // Pass message through server message handler
                switch (message)
                {
                    case "HANDLEDAT":
                        Debug.Log("Handdle data case");
                        break;
                    default:
                        string prettyMessage = player.isLocalPlayer ?
                           $"<color=red>{player.playerName}: </color> {message}" :
                            $"<color=blue>{player.playerName}: </color> {message}";
                        AppendMessage(prettyMessage);
                        logger.Log(message);
                        break;
                }
            }
            if(player.isClientOnly)
            {
                // Pass message through client message handler
                switch (message)
                {
                    default:
                        string prettyMessage = player.isLocalPlayer ?
                               $"<color=red>{player.playerName}: </color> {message}" :
                                $"<color=blue>{player.playerName}: </color> {message}";
                        AppendMessage(prettyMessage);
                        logger.Log(message);
                        break;
                }
            }
        }

        public void OnSend()
        {
            if (chatMessage.text.Trim() == "")
                return;

            // get our player
            Player player = NetworkClient.connection.identity.GetComponent<Player>();

            // send a message
            player.CmdSend(chatMessage.text.Trim());

            chatMessage.text = "";
        }

        internal void AppendMessage(string message)
        {
            StartCoroutine(AppendAndScroll(message));
        }

        IEnumerator AppendAndScroll(string message)
        {
            chatHistory.text += message + "\n";

            // it takes 2 frames for the UI to update ?!?!
            yield return null;
            yield return null;

            // slam the scrollbar down
            scrollbar.value = 0;
        }
    }
}
