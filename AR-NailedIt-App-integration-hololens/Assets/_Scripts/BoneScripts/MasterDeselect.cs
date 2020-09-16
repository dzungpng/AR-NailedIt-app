using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MasterDeselect : MonoBehaviour
{

    public MarkerSelect markerSelect;
    public VuMarkSelect vumarks;

    public void Deselect()
    {
        markerSelect.Deselect();
        vumarks.Deselect();
    }
}