#include "cocos2d.h"
#include "layer_battlemap.h"
#include "config.h"
#include "scenemgr.h"
USING_NS_CC;

#define TAGID_MAP 1



LAYER_BATTLEMAP::LAYER_BATTLEMAP()
{
    m_iLevel = 0;
}

LAYER_BATTLEMAP* LAYER_BATTLEMAP::CreateLayer()
{
    LAYER_BATTLEMAP *pLayer = (LAYER_BATTLEMAP *)create();

    


    return pLayer;
}

void LAYER_BATTLEMAP::ccTouchesEnded(cocos2d::CCSet* touches, cocos2d::CCEvent* event)
{
}

bool LAYER_BATTLEMAP::LoadMap()
{
    UnloadAll();
    CCTMXTiledMap* map = CCTMXTiledMap::create("resource/level1.tmx");
    addChild(map, 0, TAGID_MAP);
    return true;
}

void LAYER_BATTLEMAP::UnloadAll()
{
    removeAllChildrenWithCleanup(true);
}


