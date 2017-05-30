#pragma once
#include "Block.h"
#include "Hero.h"

class fakePrincess : public Block
{
public:
	fakePrincess();
	~fakePrincess();
	void collideHero() override;
};