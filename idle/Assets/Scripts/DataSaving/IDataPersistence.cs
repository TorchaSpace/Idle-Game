using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public interface IDataPersistence
{
    void LoadData(SaveLoad saveLoad);

    void SaveData(ref SaveLoad saveLoad);
}