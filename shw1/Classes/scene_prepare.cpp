#include "cocos2d.h"
#include "scene_prepare.h"
#include "layer_prepare.h"

USING_NS_CC;


SCENE_PREPARE *SCENE_PREPARE::CreateScene()
{
    LAYER_PREPARE *pLayer = LAYER_PREPARE::CreateLayer();
    if (NULL == pLayer)
        return NULL;

    SCENE_PREPARE *pScene = CreateScene();
    if (NULL == pScene)
    {
        delete pLayer;
        pLayer = NULL;
        return NULL;
    }
    pScene->addChild(pLayer);
    return pScene;
}

