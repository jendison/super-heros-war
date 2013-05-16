#include "cocos2d.h"
#include "scene_battle.h"
#include "layer_battlemap.h"
#include "layer_battleaction.h"

USING_NS_CC;


SCENE_BATTLE *SCENE_BATTLE::CreateScene()
{
    LAYER_BATTLEMAP *pLayer = LAYER_BATTLEMAP::CreateLayer();
    if (NULL == pLayer)
        return NULL;

    SCENE_BATTLE *pScene = (SCENE_BATTLE *)create();
    if (NULL == pScene)
    {
        delete pLayer;
        pLayer = NULL;
        return NULL;
    }
    pScene->addChild(pLayer);
    return pScene;
}

