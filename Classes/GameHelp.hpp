//
//  GameHelp.hpp
//  SuperMarioFamily
//
//  Created by 梁永潮 on 2017/5/9.
//
//

#ifndef GameHelp_hpp
#define GameHelp_hpp
#include "HelloWorldScene.h"
#include <stdio.h>
class GameHelp: public cocos2d::Layer
{
public:
    static cocos2d::Scene * createScene();
    
    virtual bool init();
    
    void menuCallBack(cocos2d::Ref * pSender);
    
    CREATE_FUNC(GameHelp);
    
};

#endif /* GameHelp_hpp */
