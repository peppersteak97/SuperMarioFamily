#pragma once
#include "Hero.h"
#include "cocos2d.h"

using namespace std;
using namespace cocos2d;

struct setRect
{
	int left;
	int right;
	int top;
	int bottom;
};

class Block
{
public:
	int blockHeight, blockWidth;
	Block();
	~Block();
	Sprite* nowSprite;
	//check the collision
	virtual void collideHero(Hero* myHero);
};