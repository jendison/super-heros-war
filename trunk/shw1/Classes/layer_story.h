#ifndef LAYER_STORY_H
#define LAYER_STORY_H

#include "cclayer.h"

class LAYER_STORY : public cocos2d::CCLayer
{
public:
    static LAYER_STORY* CreateLayer();
    void ccTouchesEnded(cocos2d::CCSet* touches, cocos2d::CCEvent* event);
    CREATE_FUNC(LAYER_STORY); 
};

#endif

