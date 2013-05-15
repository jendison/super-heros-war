#include "cocos2d.h"
#include "layer_prepare.h"
#include "config.h"
#include "scenemgr.h"
USING_NS_CC;


LAYER_PREPARE* LAYER_PREPARE::CreateLayer()
{
    LAYER_PREPARE *pLayer = (LAYER_PREPARE *)create();

    CCDirector::sharedDirector()->getTouchDispatcher()->addStandardDelegate(pLayer,0);

    return pLayer;
}

void LAYER_PREPARE::ccTouchesEnded(cocos2d::CCSet* touches, cocos2d::CCEvent* event)
{
    SCENE_MGR::instance()->RunScene(SCENE_PREPARE_IDX);
}

