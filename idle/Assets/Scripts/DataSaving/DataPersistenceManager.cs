using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Linq;

public class DataPersistenceManager : MonoBehaviour
{
    [Header("File Storage Config")]
    [SerializeField] private string fileName;

    [SerializeField] private bool useEncryption;

    private SaveLoad saveLoad;

    private List<IDataPersistence> dataPersistencesObjects;
    private FileDataHandler dataHandler;

    public static DataPersistenceManager instance { get; private set; }

    private void Awake()
    {
        if(instance != null)
        {
            Debug.LogError("Found more than one data persistence manager in the scene");
        }
        instance = this;
    }

    private void Start()
    {
        this.dataHandler = new FileDataHandler(Application.persistentDataPath, fileName, useEncryption);
        this.dataPersistencesObjects = FindAllDataPersistenceObjects();
        LoadGame();
    }

    public void NewGame()
    {
        this.saveLoad = new SaveLoad();
    }

    public void LoadGame()
    {
        this.saveLoad = dataHandler.Load();

        if(this.saveLoad == null)
        {
            Debug.Log("No data was found. Initializing data to defaults");
            NewGame();
        }

        foreach(IDataPersistence dataPersistenceObj in dataPersistencesObjects)
        {
            dataPersistenceObj.LoadData(saveLoad);
        }

    }

    public void SaveGame()
    {
        foreach(IDataPersistence dataPersistenceObj in dataPersistencesObjects)
        {
            dataPersistenceObj.SaveData(ref saveLoad);
        }

        dataHandler.Save(saveLoad);
    }

    private void OnApplicationQuit()
    {
        SaveGame();
    }

    private List<IDataPersistence> FindAllDataPersistenceObjects()
    {
        IEnumerable<IDataPersistence> dataPersistenceObjects = FindObjectsOfType<MonoBehaviour>().OfType<IDataPersistence>();

        return new List<IDataPersistence>(dataPersistenceObjects);
    }
}
