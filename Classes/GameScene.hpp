//
//  GameScene.hpp
//  SuperMarioFamily
//
//  Created by 梁永潮 on 2017/5/10.
//
//
/*
 this class is used to enter the game after player click the "StartGame" lable
 */

#ifndef GameScene_hpp
#define GameScene_hpp

#include "HelloWorldScene.h"
typedef enum
{
    PAUSE=20,
    CONTINUE,
    EXIT
}MENU_INCIDENT;

class GameScene:public cocos2d::Layer
{
    virtual bool init();
    
    static cocos2d::Scene * cerateScene();
    
    void menuCallBack(cocos2d::Ref * pSender);
    
    void gamePause();
    
    void gameContinue();
    
};





#endif /* GameScene_hpp */
