#ifndef LAYER_LOGO_H
#define LAYER_LOGO_H

#include "cclayer.h"

class LAYER_LOGO : public cocos2d::CCLayer
{
public:
    static LAYER_LOGO* CreateLayer();
    void ccTouchesEnded(cocos2d::CCSet* touches, cocos2d::CCEvent* event);
    CREATE_FUNC(LAYER_LOGO); 
};

#endif