#include "cocos2d.h"
#include "layer_story.h"
#include "config.h"
#include "scenemgr.h"
USING_NS_CC;


LAYER_STORY* LAYER_STORY::CreateLayer()
{
    LAYER_STORY *pLayer = (LAYER_STORY *)create();

    CCDirector::sharedDirector()->getTouchDispatcher()->addStandardDelegate(pLayer,0);

    return pLayer;
}

void LAYER_STORY::ccTouchesEnded(cocos2d::CCSet* touches, cocos2d::CCEvent* event)
{
    SCENE_MGR::instance()->RunScene(SCENE_PREPARE_IDX);
}

