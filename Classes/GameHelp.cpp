//
//  GameHelp.cpp
//  SuperMarioFamily
//
//  Created by 梁永潮 on 2017/5/9.
//
//

/*
 
 
 
 */

#include "GameHelp.hpp"

bool GameHelp::init()
{
    if(!cocos2d::Layer::create())
    {
        return false;
        
    }
    
    auto visibleSize = cocos2d::Director::getInstance()->getVisibleSize();
    
    auto lableBack = cocos2d::Label::createWithSystemFont("Back To Menu","Arial",15);
    
    auto itemBack = cocos2d::MenuItemLabel::create(lableBack, CC_CALLBACK_1(GameHelp::menuCallBack, this));
    
    auto menu = cocos2d::Menu::create(itemBack,nullptr);
    
    menu->setAnchorPoint(cocos2d::Point::ANCHOR_BOTTOM_LEFT);
    
    menu->setPosition(cocos2d::Vec2(visibleSize.width,0));
    
    this->addChild(menu);
    
    return true;
    
}



