#include "cocos2d.h"
#include "scene_interview.h"
#include "layer_interview.h"

USING_NS_CC;


SCENE_INTERVIEW *SCENE_INTERVIEW::CreateScene()
{
    LAYER_INTERVIEW *pLayer = LAYER_INTERVIEW::CreateLayer();
    if (NULL == pLayer)
        return NULL;

    SCENE_INTERVIEW *pScene = (SCENE_INTERVIEW *)create();
    if (NULL == pScene)
    {
        delete pLayer;
        pLayer = NULL;
        return NULL;
    }
    pScene->addChild(pLayer);
    return pScene;
}

