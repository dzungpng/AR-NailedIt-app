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

    public Text serverNamesDisplay;
    public Text numServers;

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

    IEnumerator PopulateUIWithServerInfo()
    {
        yield return new WaitForSeconds(0.5f);
        if (numServers != null)
            numServers.text = $"Discovered Servers [{discoveredServers.Count}]:";

        if (serverNamesDisplay != null)
        {
            foreach (ServerResponse info in discoveredServers.Values)
                serverNamesDisplay.text = info.EndPoint.Address.ToString();
        }
    }
}