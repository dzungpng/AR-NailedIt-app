using UnityEngine.UI;
using UnityEngine;

public class Utils : MonoBehaviour
{
    public static void updateScrollBox(Text t, string s)
    {
        string currentTime = Time.time.ToString("f6");
        t.text += "[" + currentTime + "] " + s + "\n";
    }

    public static Vector3 StringToVector3(string s)
    {
        string[] splitS = s.Split(',');
        return new Vector3(float.Parse(splitS[0].Trim()), float.Parse(splitS[1].Trim()), float.Parse(splitS[2].Trim()));
    }

}
