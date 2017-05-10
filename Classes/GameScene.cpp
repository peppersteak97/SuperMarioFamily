//
//  GameScene.cpp
//  SuperMarioFamily
//
//  Created by 梁永潮 on 2017/5/10.
//
//

#include "GameScene.hpp"

bool GameScene::init()
{
    if(!cocos2d::Layer::create())
    {
        return false;
        
    }
    
    auto visibleSize = cocos2d::Director::getInstance()->getVisibleSize();
    ///loading start scene and player
    
    
    
    
    return true;
};

///deal with some menu incidents

void GameScene::menuCallBack(cocos2d::Ref *pSender)

{
    
}
