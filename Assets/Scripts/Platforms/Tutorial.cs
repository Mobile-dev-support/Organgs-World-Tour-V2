using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using DG.Tweening;
using TMPro;
using System.Linq;
using System;

[System.Serializable]
public class InstructionContent
{
    public string INSTRUCTIONTITLE;
    public string INSTRUCTIONDESCRIPTION;
    public GameObject INSTRUCTIONCONTENT;
    public bool UNLOCKED;
    public InstructionContent(string instructionTitle, string instructionDescription, GameObject instructionContent, bool unlocked)
    {
        INSTRUCTIONTITLE = instructionTitle;
        INSTRUCTIONDESCRIPTION = instructionDescription;
        INSTRUCTIONCONTENT = instructionContent;
        UNLOCKED = unlocked;
    }
}

public class Tutorial : MonoBehaviour
{
    public View tutorialView;
    public GameObject tutorialPanel;

    public GameObject controlsInstructionButton;
    public GameObject collectiblesInstructionButton;
    public GameObject platformsInstructionButton;
    public GameObject obstaclesInstructionButton;

    public List<GameObject> instructionContentPictures = new List<GameObject>();
    public List<string> tutorialScenes = new List<string>();
    public List<InstructionContent> controlsInstructionContent = new List<InstructionContent>();
    public List<InstructionContent> collectiblesInstructionContent = new List<InstructionContent>();
    public List<InstructionContent> platformsInstructionContent = new List<InstructionContent>();
    public List<InstructionContent> obstaclesInstructionContent = new List<InstructionContent>();
    
    [HideInInspector]
    public View view;
    public TextMeshProUGUI timerText;
    public Button playButton;
    public Toggle tutorialisOff;
    private Sequence Seq;
    private static Tutorial _instance;
    public static Tutorial Instance { get { return _instance; } }

    [SerializeField]
    private TextMeshProUGUI instructionsCategoryTitle;
    [SerializeField]
    private TextMeshProUGUI InstructionTitleText;
    [SerializeField]
    private TextMeshProUGUI InstructionDescriptionText;
    [SerializeField]
    private TextMeshProUGUI instructionsPage;
    [SerializeField]
    private GameObject leftButton;
    [SerializeField]
    private GameObject rightButton;

    [SerializeField]
    private Color selectedColor;
    [SerializeField]
    private Color unselectedColor;

    private int currentInstructionTypeIndex;
    private int currentPageIndex;
    private void Awake()
    {
        if (_instance != null && _instance != this)
        {
            Destroy(gameObject);
        }
        else
        {
            _instance = this;
            tutorialView = this.GetComponent<View>();
        }

        bool debugMode = false;
#if UNITY_EDITOR || DEBUG

        debugMode = true;
#endif

        for (int i = 0; i<= controlsInstructionContent.Count()-1;i++)
        {
            if(PlayerPrefs.GetInt("unlockedControlsInstruction"+i) == 1 || debugMode)
            {
                controlsInstructionContent[i].UNLOCKED = true;
            }
        }

        for (int i = 0; i <= collectiblesInstructionContent.Count()-1; i++)
        {
            if (PlayerPrefs.GetInt("unlockedCollectiblesInstruction" + i) == 1 || debugMode)
            {
                collectiblesInstructionContent[i].UNLOCKED = true;
            }
        }

        for (int i = 0; i <= platformsInstructionContent.Count() - 1; i++)
        {
            if (PlayerPrefs.GetInt("unlockedPlatformsInstruction" + i) == 1 || debugMode)
            {
                platformsInstructionContent[i].UNLOCKED = true;
            }
        }

        for (int i = 0; i <= obstaclesInstructionContent.Count()-1; i++)
        {
            if (PlayerPrefs.GetInt("unlockedObstaclesInstruction" + i) == 1 || debugMode)
            {
                obstaclesInstructionContent[i].UNLOCKED = true;
            }
        }

       
    }

    // Start is called before the first frame update
    public void TutorialOn()
    {
        view = GetComponent<View>();
        if (tutorialScenes.Contains(GameManager.Instance.sceneName) && !tutorialisOff.isOn)
        {
           /* view.Show();
            timerText.text = "00:00";
            Seq = DOTween.Sequence();
            Seq.Append(playButton.GetComponent<Image>().DOFade(1, .25f))
              .Append(playButton.GetComponent<Image>().DOFade(0, .25f)).SetLoops(-1, LoopType.Yoyo);*/
        }
    }
    public void TutorialOff()
    {
        
        view = GetComponent<View>();
        view.Hide();
        Seq.Kill();
        
    }

    public void RemoveTutorial()
    {
        
        view.Hide();
        CountdownTimer.Instance.enabled = true;
        Seq.Kill();
        
    }


    public void TutorialToggleOn()
    {
        ChangeCategory(0);
        tutorialPanel.SetActive(true);
        currentInstructionTypeIndex = 0;
        currentPageIndex = 0;
        ToggleCategoryButtons();
        var gm = GameObject.Find("GameManager");
        if (gm != null)
        {
            Time.timeScale = 0;
            CountdownTimer.Instance.enabled = false;
        }
        LoadGuideContent(currentInstructionTypeIndex, currentPageIndex, true);
    }

    public void TutorialToggleOff()
    {
        var gm = GameObject.Find("GameManager");
        tutorialPanel.SetActive(false);
        if (gm != null)
        {
            Time.timeScale = 1;
            CountdownTimer.Instance.enabled = true;
        }
    }

    public void TutorialUnlockPage(int instructionType, int instructionPage, bool toggleNextOrPreviousButtons)
    {
        controlsInstructionButton.SetActive(false);
        collectiblesInstructionButton.SetActive(false);
        platformsInstructionButton.SetActive(false);
        obstaclesInstructionButton.SetActive(false);    
        switch (instructionType)
        {
            case 0:
                controlsInstructionContent[instructionPage].UNLOCKED = true;
                instructionsCategoryTitle.text = "Controls";
                SetPlayerPrefs("unlockedControlsInstruction", instructionPage);
                break;
            case 1:
                collectiblesInstructionContent[instructionPage].UNLOCKED = true;
                instructionsCategoryTitle.text = "Collectibles";
                SetPlayerPrefs("unlockedCollectiblesInstruction", instructionPage);
                break;
            case 2:
                platformsInstructionContent[instructionPage].UNLOCKED = true;
                instructionsCategoryTitle.text = "Platforms";
                SetPlayerPrefs("unlockedPlatformsInstruction", instructionPage);
                break;
            case 3:
                obstaclesInstructionContent[instructionPage].UNLOCKED = true;
                instructionsCategoryTitle.text = "Enemies";
                SetPlayerPrefs("unlockedObstaclesInstruction", instructionPage);
                break;

        }
        tutorialView.Show();
        tutorialPanel.SetActive(true);
        var gm = GameObject.Find("GameManager");
        if (gm != null)
        {
            Time.timeScale = 0;
            CountdownTimer.Instance.enabled = false;
        }
        LoadGuideContent(instructionType, instructionPage, toggleNextOrPreviousButtons);
    }

    public void SetPlayerPrefs(string category, int page)
    {
        PlayerPrefs.SetInt(category+page,1);
    }

    public void ChangeCategory(int index)
    {
        if(currentInstructionTypeIndex != index)
        {
            currentPageIndex = 0;
            currentInstructionTypeIndex = index;
            controlsInstructionButton.GetComponentInChildren<TextMeshProUGUI>().color = unselectedColor;
            collectiblesInstructionButton.GetComponentInChildren<TextMeshProUGUI>().color = unselectedColor;
            platformsInstructionButton.GetComponentInChildren<TextMeshProUGUI>().color = unselectedColor;
            obstaclesInstructionButton.GetComponentInChildren<TextMeshProUGUI>().color = unselectedColor;

            switch(index)
            {
                case 0:
                    controlsInstructionButton.GetComponentInChildren<TextMeshProUGUI>().color = selectedColor;
                    instructionsCategoryTitle.text = "Controls";
                    break;
                case 1:
                    collectiblesInstructionButton.GetComponentInChildren<TextMeshProUGUI>().color = selectedColor;
                    instructionsCategoryTitle.text = "Collectibles";
                    break;
                case 2:
                    platformsInstructionButton.GetComponentInChildren<TextMeshProUGUI>().color = selectedColor;
                    instructionsCategoryTitle.text = "Platforms";
                    break;
                case 3:
                    obstaclesInstructionButton.GetComponentInChildren<TextMeshProUGUI>().color = selectedColor;
                    instructionsCategoryTitle.text = "Enemies";
                    break;

            }
            LoadGuideContent(currentInstructionTypeIndex, currentPageIndex, true);
        }
       
    }
    public void GoToNextPage(int direction)
    {
        switch (direction)
        {
            case 0:
                currentPageIndex--;
                break;
            case 1:
                currentPageIndex++;
                break;
        }
        LoadGuideContent(currentInstructionTypeIndex, currentPageIndex, true);
    }
    public void LoadGuideContent(int type, int page, bool toggleNextOrPreviousButtons)
    {
        ResetAllContentImages();
        List<InstructionContent> content = new List<InstructionContent>();
        switch (type)
        {
            case 0:
                content.AddRange(controlsInstructionContent.Where(c=>c.UNLOCKED == true));
                instructionContentPictures[0].SetActive(true);
                break;
            case 1:
                content.AddRange(collectiblesInstructionContent.Where(c => c.UNLOCKED == true));
                instructionContentPictures[1].SetActive(true);
                break;
            case 2:
                content.AddRange(platformsInstructionContent.Where(c => c.UNLOCKED == true));
                instructionContentPictures[2].SetActive(true);
                break;
            case 3:
                content.AddRange(obstaclesInstructionContent.Where(c => c.UNLOCKED == true));
                instructionContentPictures[3].SetActive(true);
                break;
        }

        InstructionTitleText.text = content[page].INSTRUCTIONTITLE;
        string descriptionText = content[page].INSTRUCTIONDESCRIPTION;
        InstructionDescriptionText.text = descriptionText;
        InstructionDescriptionText.ForceMeshUpdate();
        content[page].INSTRUCTIONCONTENT.SetActive(true);
      
        if(toggleNextOrPreviousButtons)
        {
            instructionsPage.text = "Page " + (page + 1) + " of " + content.Count();
            ToggleNextOrPreviousButtons(content.Count());
        }
        else
        {
            instructionsPage.text = "";
            leftButton.gameObject.SetActive(false);
            rightButton.gameObject.SetActive(false);
        }
       
    }

    public void ResetAllContentImages()
    {
        foreach (var contentPicture in instructionContentPictures)
        {
            if (contentPicture.activeSelf)
            {
                contentPicture.SetActive(false);
                foreach (Transform child in contentPicture.transform)
                {
                    if (child.gameObject.activeSelf)
                    {
                        child.gameObject.SetActive(false);
                    }
                }
            }
        }
    }

    public void ToggleNextOrPreviousButtons(int contentCount)
    {
            leftButton.SetActive(true);
            rightButton.SetActive(true);
            if (currentPageIndex == 0)
            {
                leftButton.SetActive(false);
            }
            if (currentPageIndex == contentCount - 1)
            {
                rightButton.SetActive(false);
            }
      
    }

    public void ToggleCategoryButtons()
    {
        if (controlsInstructionContent.Where(c=>c.UNLOCKED == true).Count() > 0)
        {
            controlsInstructionButton.SetActive(true);
        }
        else
        {
            controlsInstructionButton.SetActive(false);
        }

        if (collectiblesInstructionContent.Where(c => c.UNLOCKED == true).Count() > 0)
        {
            collectiblesInstructionButton.SetActive(true);
        }
        else
        {
            collectiblesInstructionButton.SetActive(false);
        }

        if(platformsInstructionContent.Where(c => c.UNLOCKED == true).Count() > 0)
        {
            platformsInstructionButton.SetActive(true);
        }
        else
        {
            platformsInstructionButton.SetActive(false);
        }

        if(obstaclesInstructionContent.Where(c => c.UNLOCKED == true).Count() > 0)
        {
            obstaclesInstructionButton.SetActive(true);
        }
        else
        {
            obstaclesInstructionButton.SetActive(false);
        }
    }
}
