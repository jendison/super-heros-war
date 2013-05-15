#ifndef SCENEMGR_H
#define SCENEMGR_H

#define SCENE_LOGO_IDX 0
#define SCENE_INTERVIEW_IDX 1
#define SCENE_STORY_IDX 2
#define SCENE_PREPARE_IDX 3
#define SCENE_BATTLE_IDX 4



class SCENE_LOGO;
class SCENE_INTERVIEW;

class SCENE_MGR
{
public:
    SCENE_MGR();
	static SCENE_MGR* instance();
	static void deinstance();
    bool init();
    bool RunScene(int iIdx);

private:
	static SCENE_MGR *m_pInstance;
    SCENE_LOGO *m_pLogo;
    SCENE_INTERVIEW *m_pInterview;

};

#endif
