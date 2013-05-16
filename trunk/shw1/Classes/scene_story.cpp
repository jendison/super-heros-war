#include "cocos2d.h"
#include "scene_story.h"
#include "layer_story.h"

USING_NS_CC;


SCENE_STORY *SCENE_STORY::CreateScene()
{
    LAYER_STORY *pLayer = LAYER_STORY::CreateLayer();
    if (NULL == pLayer)
        return NULL;

    SCENE_STORY *pScene = (SCENE_STORY *)create();
    if (NULL == pScene)
    {
        delete pLayer;
        pLayer = NULL;
        return NULL;
    }
    pScene->addChild(pLayer);
    return pScene;
}

