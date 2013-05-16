#ifndef LAYER_BATTLEMAP_H
#define LAYER_BATTLEMAP_H

#include "cclayer.h"

class LAYER_BATTLEMAP : public cocos2d::CCLayer
{
public:
    LAYER_BATTLEMAP();
    static LAYER_BATTLEMAP* CreateLayer();
    void ccTouchesEnded(cocos2d::CCSet* touches, cocos2d::CCEvent* event);
    CREATE_FUNC(LAYER_BATTLEMAP); 

    bool LoadMap();
    void UnloadAll();


private:
    int m_iLevel;
};

#endif

