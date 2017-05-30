#pragma once
#include "Block.h"
#include "Hero.h"

class Cloud : public Block
{
public:
	bool show;
	Cloud();
	~Cloud();

	//check the collision between cloud and hero
	void collideHero() override;
};
