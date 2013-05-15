#include "cocos2d.h"
#include "layer_logo.h"
#include "config.h"
#include "scenemgr.h"
USING_NS_CC;


LAYER_LOGO* LAYER_LOGO::CreateLayer()
{
    LAYER_LOGO *pLayer = (LAYER_LOGO *)create();

    // load logo
    CCSprite *pSpr = CCSprite::create(ID_LAYER_LOGO_LOGO_IMG);
    pSpr->setPosition(ccp(ID_LAYER_LOGO_LOGO_IMG_POS_X, ID_LAYER_LOGO_LOGO_IMG_POS_Y));
    pLayer->addChild(pSpr);


    CCLabelTTF* pLabel = CCLabelTTF::create(ID_LAYER_LOGO_TIPS_STRING,
                                            ID_LAYER_LOGO_TIPS_TYPE, 
                                            ID_LAYER_LOGO_TIPS_SIZE);
    pLabel->setPosition(ccp(ID_LAYER_LOGO_LOGO_IMG_POS_X, ID_LAYER_LOGO_LOGO_IMG_POS_Y));
    pLayer->addChild(pLabel);

    CCDirector::sharedDirector()->getTouchDispatcher()->addStandardDelegate(pLayer,0);

    return pLayer;
}

void LAYER_LOGO::ccTouchesEnded(cocos2d::CCSet* touches, cocos2d::CCEvent* event)
{
    SCENE_MGR::instance()->RunScene(SCENE_INTERVIEW_IDX);
}


