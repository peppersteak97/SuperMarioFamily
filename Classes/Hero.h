/**
 * @brief Hero superclass
 * @file Classes/Hero.cpp
 * @Author Leon Wong
 *
 * <ChangeLog>
 * -----------------------------------------------------------------------------------------------
 * |   <Build>   |   <Author>   | <Description>                                                  |
 * -----------------------------------------------------------------------------------------------
 * |201705251928 |   Leon Wong  | Add some properties for hero                                   |
 * |201705251846 |   Leon Wong  | First time initialization                                      |
 * -----------------------------------------------------------------------------------------------
 */

#pragma once

#ifndef Hero_h
#define Hero_h

#include "Enemy.h"
#include "Goomba.h"
#include "Koopa.h"
#include "Koopa_dead.h"
#include "Piranha.h"
#include "cocos2d.h"
#include "SimpleAudioEngine.h"

#include <list>

USING_NS_CC;
using namespace std

/**
 * @brief An enum denoting the hero's status.
 *
 */
enum HeroState{
    STAND,
    JUMP,
    MOVE,
    DIE,
    FALL,
};

class Hero: public Layer{
public:
    /// Lives Count
    static int life = 2;
    /// Sprite for hero
    Sprite* heroSprite;
    /// Hero State
    HeroState heroState;
    
    /// true if press down
    bool down;
    /// true if passive
    bool passive;
    
};

#endif /* Hero_h */
