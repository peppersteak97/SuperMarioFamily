#include "Block.h"

Block::Block()
{
	blockHeight = nowSprite->getTextureRect().size.height;
	blockWidth = nowSprite->getTextureRect().size.width;
}

Block::~Block()
{}

void Block::collideHero(Hero* myHero)
{}