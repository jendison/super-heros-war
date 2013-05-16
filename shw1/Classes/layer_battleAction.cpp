#include "cocos2d.h"
#include "layer_battleaction.h"
#include "config.h"
#include "scenemgr.h"
USING_NS_CC;


LAYER_BATTLEACTION* LAYER_BATTLEACTION::CreateLayer()
{
    LAYER_BATTLEACTION *pLayer = (LAYER_BATTLEACTION *)create();

    


    return pLayer;
}

void LAYER_BATTLEACTION::ccTouchesEnded(cocos2d::CCSet* touches, cocos2d::CCEvent* event)
{
}

