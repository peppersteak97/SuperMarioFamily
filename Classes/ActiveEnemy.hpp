//
//  ActiveEnemy.hpp
//  SuperMarioFamily
//
//  Created by 梁永潮 on 2017/5/15.
//
//

#ifndef ActiveEnemy_hpp
#define ActiveEnemy_hpp

#include "GameScene.hpp"

typedef enum
{
    UP = 31,
    DOWN,
    LEFT,
    RIGHT
    
}ENEMY_DIR;





class ActiveEnemy:public cocos2d::Node
{
private:
    //judge whether the enemy is alive or not
    
    int hp;
    //store the position of the enemy (if they aren't needed,just delete them)
    int positionX;
    int positionY;
    
    //the speed of the enemy
    
    int speed;
    
    //direction of the enemy
    
    int direction;
    
    cocos2d::Sprite * enemy;
    
    ActiveEnemy * create();
    
    
    
public:
    ActiveEnemy();
    ~ActiveEnemy();
    void kill(){hp--;}
    bool isAlive() const {return (bool)hp;}
    
    //reload Sprite's "create" function
    
    
    
    
    
    
};





#endif /* ActiveEnemy_hpp */
