using CleverCrow.Fluid.Dialogues.Graphs;
using UnityEngine.SceneManagement;
using System.Collections;
using UnityEngine.UI;
using Cinemachine;
using DG.Tweening;
using UnityEngine;
using TMPro;

namespace CleverCrow.Fluid.Dialogues.Examples
{
    public class DialogContainer : MonoBehaviour
    {
        [Header("DIALOGUE")]
        public DialogueGraph dialogue;
        public GameObjectOverride[] gameObjectOverrides;
        public ChoiceButton choicePrefab;
        public string totemLandCode;
        public string backToOliverCode;
        private int organg_key;
        public int organg;

        private Animator cameraAnim;
        private DialogueController _ctrl;
        private GameObject Oliver;
        private static string mainChar = "Oliver";

        IEnumerator LoadLevel(string level)
        {
            yield return new WaitForEndOfFrame();
            SceneManager.LoadScene(level, LoadSceneMode.Additive);
        }

        IEnumerator UnLoadLevel(string level)
        {
            yield return new WaitForEndOfFrame();
            SceneManager.UnloadSceneAsync(level, UnloadSceneOptions.UnloadAllEmbeddedSceneObjects);
        }

        private void Awake()
        {
            var database = new DatabaseInstanceExtended();
            _ctrl = new DialogueController(database);
            _ctrl.Events.Speak.AddListener((actor, text) => {
                ClearChoices();
                MainMenu.Instance.ActorName.text = actor.DisplayName;
                if (MainMenu.Instance.ActorName.text == mainChar)
                {
                    MainMenu.Instance.portrait.sprite = actor.Portrait;
                    MainMenu.Instance.portrait.gameObject.SetActive(true);
                    MainMenu.Instance.portrait2.gameObject.SetActive(false);
                }
                else
                {
                    MainMenu.Instance.portrait2.sprite = actor.Portrait;
                    MainMenu.Instance.portrait.gameObject.SetActive(false);
                    MainMenu.Instance.portrait2.gameObject.SetActive(true);
                }
                MainMenu.Instance.lines.text = text;
                _ctrl.Next();
            });

            _ctrl.Events.Choice.AddListener((actor, text, choices) => {
                ClearChoices();
                MainMenu.Instance.ActorName.text = actor.DisplayName;
                if (MainMenu.Instance.ActorName.text == mainChar)
                {
                    MainMenu.Instance.portrait.sprite = actor.Portrait;
                    MainMenu.Instance.portrait.gameObject.SetActive(true);
                    MainMenu.Instance.portrait2.gameObject.SetActive(false);
                }
                else
                {
                    MainMenu.Instance.portrait2.sprite = actor.Portrait;
                    MainMenu.Instance.portrait.gameObject.SetActive(false);
                    MainMenu.Instance.portrait2.gameObject.SetActive(true);
                }
                MainMenu.Instance.lines.text = text;
                Tween();
                choices.ForEach(c => {
                    var choice = Instantiate(choicePrefab, MainMenu.Instance.choiceList);
                    choice.title.text = c.Text;
                    choice.clickEvent.AddListener(_ctrl.SelectChoice);
                });
            });

            _ctrl.Events.End.AddListener(() => {
                MainMenu.Instance.dialogCanvas.Hide();
                StartCoroutine(DoorController.Instance.EndGame());

            });

            _ctrl.Events.NodeEnter.AddListener((node) => {
                Debug.Log($"Node Enter: {node.GetType()} - {node.UniqueId}");
                if (node.UniqueId == totemLandCode)
                {
                    StartCoroutine(LoadLevel("TotemLand"));
                    Save();
                }
                else if (node.UniqueId == backToOliverCode)
                {
                    StartCoroutine(UnLoadLevel("TotemLand"));
                }
            });
            _ctrl.Play(dialogue);
        }

        public void Start()
        {
            MainMenu.Instance.dialogCanvas.Hide();
            cameraAnim = GetComponent<Animator>();
            SceneManager.sceneLoaded += OnSceneLoaded;
            SceneManager.sceneUnloaded += OnSceneunLoaded;
            if (PlayerPrefs.HasKey("organg_key" + organg_key))
            {
                Debug.Log("has " + organg_key + " key");
                Destroy(gameObject, 0.01f);
            }
        }

        private void OnDestroy()
        {
            SceneManager.sceneLoaded -= OnSceneLoaded;
            SceneManager.sceneUnloaded -= OnSceneunLoaded;
        }

        private void Tween()
        {
            MainMenu.Instance.dialog.DOShakeScale(MainMenu.Instance.duration,
                MainMenu.Instance.strength,
                MainMenu.Instance.vibrato,
                MainMenu.Instance.randomness, false);
        }

        private void ClearChoices()
        {
            foreach (Transform child in MainMenu.Instance.choiceList)
            {
                Destroy(child.gameObject);
            }
        }

        private void Update()
        {
            _ctrl.Tick();
        }

        private void OnSceneLoaded(Scene scene, LoadSceneMode mode)
        {
            StartCoroutine(LoadLevel());
        }

        private void OnSceneunLoaded(Scene scene)
        {
            StartCoroutine(unLoadLevel());
        }

        private IEnumerator LoadLevel()
        {
            cameraAnim.SetBool("cutscene", false);
            Fader.Instance.BGFader(true);
            Oliver = GameObject.Find("MainPlayer");
            yield return new WaitForSeconds(2f);
            Oliver.SetActive(false);
            yield return new WaitForSeconds(1f);
            gameObject.GetComponent<Collider2D>().enabled = false;
            gameObject.GetComponentInChildren<SpriteRenderer>().enabled = false;
            Fader.Instance.BGFader(false);
        }

        private IEnumerator unLoadLevel()
        {
            Fader.Instance.FadeImmediately();
            Fader.Instance.BGFader(true);
            yield return new WaitForSeconds(1.0f);
            cameraAnim.SetBool("cutscene", false);
            Oliver.SetActive(true);
            yield return new WaitForSeconds(0.5f);
            Fader.Instance.BGFader(false);
        }

        private void OnCollisionEnter2D(Collision2D collision)
        {
            if (collision.gameObject.CompareTag("Player"))
            {
                organg_key += 1;
                MainMenu.Instance.dialogCanvas.Show();
                MainMenu.Instance.statCanvas.Hide();
                CountdownTimer.Instance.enabled = false;
                cameraAnim.SetBool("cutscene", true);
            }
        }

        public void Save()
        {
            PlayerPrefs.SetInt("organg_key" + organg, organg_key);
            Debug.Log(organg_key);
        }
        public void Load()
        {
            organg_key = PlayerPrefs.GetInt("organg_key" + organg);
        }
    }
}
