#pragma once
#include "Block.h"
#include "Hero.h"

class toxicMush : public Block
{
public:
	toxicMush();
	~toxicMush();

	//check the collision between toxicmush and hero
	void collideHero() override;
};