#include "fakePrincess.h"

fakePrincess::fakePrincess()
{
	nowSprite->setTextureRect(Rect(0,))£»
	blockHeight = nowSprite->getTextureRect().size.height;
	blockWidth = nowSprite->getTextureRect().size.width;
}

fakePrincess::~fakePrincess()
{}

void fakePrincess::collideHero(Hero* myHero)
{
	setRect blockRect, heroRect;

	blockRect.bottom = nowSprite->getPositionY();
	blockRect.top = nowSprite->getPositionY();



}