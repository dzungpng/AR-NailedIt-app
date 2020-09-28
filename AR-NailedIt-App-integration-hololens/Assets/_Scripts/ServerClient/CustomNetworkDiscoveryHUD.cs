using System.Collections.Generic;
using System.Collections;
using UnityEngine;
using Mirror.Discovery;
using UnityEngine.UI;

/*
 * This class allows the clients to "discover" active servers' IP address.
 */
[RequireComponent(typeof(NetworkDiscovery))]
public class CustomNetworkDiscoveryHUD : MonoBehaviour
{
    readonly Dictionary<long, ServerResponse> discoveredServers = new Dictionary<long, ServerResponse>();
    public NetworkDiscovery networkDiscovery;
    [SerializeField] private MessageHandler messageHandler;
    [SerializeField] private GameObject holoCanvas;
    [SerializeField] private GameObject settingCanvas;
    [SerializeField] private CustomNetworkManager networkManager;

    public Text serverNamesDisplay;
    public Text numServers;

    public Button serverButtonPrefab;
    

#if UNITY_EDITOR
    void OnValidate()
    {
        if (networkDiscovery == null)
        {
            networkDiscovery = GetComponent<NetworkDiscovery>();
            UnityEditor.Events.UnityEventTools.AddPersistentListener(networkDiscovery.OnServerFound, OnDiscoveredServer);
            UnityEditor.Undo.RecordObjects(new Object[] { this, networkDiscovery }, "Set NetworkDiscovery");
        }
    }
#endif

    public void OnDiscoveredServer(ServerResponse info)
    {
        // Note that you can check the versioning to decide if you can connect to the server or not using this method
        discoveredServers[info.serverId] = info;
    }

    public void AdvertiseServers()
    {
        discoveredServers.Clear();
        networkDiscovery.AdvertiseServer();
    }

    public void OnFindServers()
    {
        discoveredServers.Clear();
        networkDiscovery.StartDiscovery();
        StartCoroutine(PopulateUIWithServerInfo());
    }

    void Connect(ServerResponse info)
    {
        networkManager.SetHostName(info.EndPoint.Address.ToString());
        networkManager.StartClient();
        //CustomNetworkManager.singleton.StartClient(info.uri);
    }

    IEnumerator PopulateUIWithServerInfo()
    {
        yield return new WaitForSeconds(0.5f);
        if (numServers != null)
        {
            numServers.text = $"Discovered Servers [{discoveredServers.Count}]:";
        }
        
        if (serverNamesDisplay != null)
        {
            foreach (ServerResponse info in discoveredServers.Values)
            {
                Button b = Instantiate(serverButtonPrefab, serverNamesDisplay.transform);
                b.GetComponentInChildren<Text>().text = info.EndPoint.Address.ToString();
                //Debug.Log(info.EndPoint.Address.ToString());
                b.onClick.AddListener(() => settingCanvas.SetActive(false));
                b.onClick.AddListener(() => holoCanvas.SetActive(true));
                b.onClick.AddListener(() => Connect(info));
                b.onClick.AddListener(() => messageHandler.NotifyServerOnJoin());
            }
        }
    }
}