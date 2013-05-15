#include "cocos2d.h"

#include "scenemgr.h"
#include "scene_logo.h"
#include "scene_interview.h"


USING_NS_CC;


SCENE_MGR *SCENE_MGR::m_pInstance = NULL;


SCENE_MGR::SCENE_MGR()
{
    m_pInstance = NULL;
    m_pLogo = NULL;
    m_pInterview = NULL;

}



SCENE_MGR* SCENE_MGR::instance()
{
    if (NULL == m_pInstance)
    {
        m_pInstance = new SCENE_MGR;
    }
    return m_pInstance;
}

void SCENE_MGR::deinstance()
{
    if (NULL != m_pInstance)
    {
        delete m_pInstance;
        m_pInstance = NULL;
    }
}

bool SCENE_MGR::init()
{
    m_pLogo = (SCENE_LOGO *)SCENE_LOGO::create();
    m_pInterview = (SCENE_INTERVIEW *)SCENE_INTERVIEW::create();
    return true;
}

bool SCENE_MGR::RunScene(int iIdx)
{
    CCDirector *pDirector = CCDirector::sharedDirector();

    switch (iIdx)
    {
    case SCENE_LOGO_IDX:
        pDirector->runWithScene(m_pLogo);
        return true;
    case SCENE_INTERVIEW_IDX:
        pDirector->runWithScene(m_pInterview);
        return true;
    default:
        return false;
    };
    return false;
}

