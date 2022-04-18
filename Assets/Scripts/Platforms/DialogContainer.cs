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

        private Animator cameraAnim;
        private DialogueController _ctrl;
        private readonly string mainChar = "Oliver";

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
                totemlandActivation.Instance.DisableTotemLand();
                MainMenu.Instance.totem_land.Hide();
                MainMenu.Instance.dialogCanvas.Hide();
                StartCoroutine(DoorController.Instance.EndGame());

            });

            _ctrl.Events.NodeEnter.AddListener((node) => {
                Debug.Log($"Node Enter: {node.GetType()} - {node.UniqueId}");
                if (node.UniqueId == totemLandCode)
                {
                    StartCoroutine(LoadCanvas());
                }
                else if (node.UniqueId == backToOliverCode)
                {
                    StartCoroutine(unLoadCanvas());
                }
            });
            _ctrl.Play(dialogue);
        }

        public void Start()
        {
            MainMenu.Instance.dialogCanvas.Hide();
            cameraAnim = GetComponent<Animator>();
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

        private IEnumerator LoadCanvas()
        {
            cameraAnim.SetBool("cutscene", false);
            Fader.Instance.BGFader(true);
            yield return new WaitForSeconds(1f);
            Fader.Instance.BGFader(false);
            totemlandActivation.Instance.EnableTotemLand();
            totemlandActivation.Instance.Initialize();
            MainMenu.Instance.totem_land.transform.Find("organgs_canvas")
                .GetComponent<DoTweenFeatures>().OnClick();
            MainMenu.Instance.totem_land.Show();
        }

        private IEnumerator unLoadCanvas()
        {
            Fader.Instance.BGFader(true);
            yield return new WaitForSeconds(1f);
            totemlandActivation.Instance.DisableTotemLand();
            MainMenu.Instance.totem_land.Hide();
            yield return new WaitForSeconds(1f);
            Fader.Instance.BGFader(false);
            cameraAnim.SetBool("cutscene", false);

        }

        private void OnCollisionEnter2D(Collision2D collision)
        {
            if (collision.gameObject.CompareTag("Player"))
            {
                MainMenu.Instance.dialogCanvas.Show();
                MainMenu.Instance.statCanvas.Hide();
                CountdownTimer.Instance.enabled = false;
                cameraAnim.SetBool("cutscene", true);
            }
        }
    }
}
