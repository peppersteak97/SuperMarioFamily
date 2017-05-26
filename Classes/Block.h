#pragma once
#include <string>
#include <list>
#include "cocos2d.h"

using namespace std;
using namespace cocos2d;

class Block
{
public:
	Block();
	~Block();

	//check the collision
	virtual void collideHero();
};