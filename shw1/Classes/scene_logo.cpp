#include "cocos2d.h"
#include "scene_logo.h"
#include "layer_logo.h"

USING_NS_CC;


SCENE_LOGO *SCENE_LOGO::CreateScene()
{
    LAYER_LOGO *pLayer = LAYER_LOGO::CreateLayer();
    if (NULL == pLayer)
        return NULL;

    SCENE_LOGO *pScene = (SCENE_LOGO *)create();
    if (NULL == pScene)
    {
        delete pLayer;
        pLayer = NULL;
        return NULL;
    }
    pScene->addChild(pLayer);
    return pScene;
}


