using UnityEngine;
using UnityEngine.UI;

public class NailVisibility : MonoBehaviour
{
    GameObject bone;
    public Toggle displayToggle;

    void Start()
    {
        bone = BoneModelDropdown.selectedBoneModel;
        displayToggle.onValueChanged.AddListener((value) => displayObject(value));
    }

    public void displayObject(bool isOn)
    {
        bone = NailModelDropdown.selectedNailModel;
        bone.SetActive(isOn);
    }
}
