#pragma once
#include "Block.h"
#include "Hero.h"

class InvisibleSting : public Block
{
public:

	//judge if the sting is visible or not
	bool show;

	InvisibleSting();
	~InvisibleSting();

	//check the collision between invisiblesting and hero
	void collideHero() override;
};