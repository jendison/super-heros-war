#ifndef LAYER_PREPARE_H
#define LAYER_PREPARE_H

#include "cclayer.h"

class LAYER_PREPARE : public cocos2d::CCLayer
{
public:
    static LAYER_PREPARE* CreateLayer();
    void ccTouchesEnded(cocos2d::CCSet* touches, cocos2d::CCEvent* event);
    CREATE_FUNC(LAYER_PREPARE); 
};

#endif

