#ifndef LAYER_BATTLEACTION_H
#define LAYER_BATTLEACTION_H

#include "cclayer.h"

class LAYER_BATTLEACTION : public cocos2d::CCLayer
{
public:
    static LAYER_BATTLEACTION* CreateLayer();
    void ccTouchesEnded(cocos2d::CCSet* touches, cocos2d::CCEvent* event);
    CREATE_FUNC(LAYER_BATTLEACTION); 
};

#endif

