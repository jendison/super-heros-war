#include "cocos2d.h"
#include "layer_interview.h"
#include "config.h"
#include "scenemgr.h"
USING_NS_CC;


LAYER_INTERVIEW* LAYER_INTERVIEW::CreateLayer()
{
    LAYER_INTERVIEW *pLayer = (LAYER_INTERVIEW *)create();

    

    CCDirector::sharedDirector()->getTouchDispatcher()->addStandardDelegate(pLayer,0);

    return pLayer;
}

void LAYER_INTERVIEW::ccTouchesEnded(cocos2d::CCSet* touches, cocos2d::CCEvent* event)
{
    SCENE_MGR::instance()->RunScene(SCENE_STORY_IDX);
}



