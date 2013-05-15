#ifndef LAYER_INTERVIEW_H
#define LAYER_INTERVIEW_H

#include "cclayer.h"

class LAYER_INTERVIEW : public cocos2d::CCLayer
{
public:
    static LAYER_INTERVIEW* CreateLayer();
    void ccTouchesEnded(cocos2d::CCSet* touches, cocos2d::CCEvent* event);
    CREATE_FUNC(LAYER_INTERVIEW); 
};

#endif

