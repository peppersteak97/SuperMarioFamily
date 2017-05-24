#include "HelloWorldScene.h"
#include "SimpleAudioEngine.h"
#include "GameHelp.hpp"

USING_NS_CC;

Scene* HelloWorld::createScene()
{
    // 'scene' is an autorelease object
    auto scene = Scene::create();
    
    // 'layer' is an autorelease object
    auto layer = HelloWorld::create();

    // add layer as a child to scene
    scene->addChild(layer);

    // return the scene
    return scene;
}

// on "init" you need to initialize your instance
bool HelloWorld::init()
{
    //////////////////////////////
    // 1. super init first
    if ( !Layer::init() )
    {
        return false;
    }
    
    auto visibleSize = Director::getInstance()->getVisibleSize();
    Vec2 origin = Director::getInstance()->getVisibleOrigin();

    /////////////////////////////
    // 2. add a menu item with "X" image, which is clicked to quit the program
    //    you may modify it.

    // add a "close" icon to exit the progress. it's an autorelease object
 /*   auto closeItem = MenuItemImage::create(
                                           "CloseNormal.png",
                                           "CloseSelected.png",
                                           CC_CALLBACK_1(HelloWorld::menuCloseCallback, this));
    
    closeItem->setPosition(Vec2(origin.x + visibleSize.width - closeItem->getContentSize().width/2 ,
                                origin.y + closeItem->getContentSize().height/2));

    // create menu, it's an autorelease object
    auto menu = Menu::create(closeItem, NULL);
    menu->setPosition(Vec2::ZERO);
    this->addChild(menu, 1);*/

	//Put three buttons on the startScene 
    

	
	/////////////////////////////
    // 3. add your codes below...

    // add a label shows "Hello World"
    // create and initialize a label
    
  //  auto label = Label::createWithTTF("Hello World", "fonts/Marker Felt.ttf", 24);
    
    // create a sprite containing the background image


    auto backGroundImage = Sprite::create("Welcome_BackGround_1024_728.png");

    // set it to be the background
    backGroundImage->setAnchorPoint(Point::ANCHOR_BOTTOM_LEFT);
    backGroundImage->setPosition(Vec2(0, 0));
    this->addChild(backGroundImage);
    
    // add a Sprite Sheet to the Scene
    SpriteFrameCache* MenuSpriteSheet = SpriteFrameCache::getInstance();
    MenuSpriteSheet->addSpriteFramesWithFile("Buttons.plist", "Buttons.png");
    
    //Put three buttons on the startScene
    
    //SinglePlayer Button
    auto Single = MenuItemImage::create(
                                        "Button//SinglePlayer_Normal.png",
                                        "Button//SinglePlayer_Clicked.png",
                                        "Button//SinglePlayer_Activate.png",
                                        CC_CALLBACK_1(HelloWorld::menuCallback,this));
    Single->setTag(SINGLE);
    Single->setAnchorPoint(Point(cocos2d::Point::ANCHOR_MIDDLE));
    Single->setScaleX(0.3f);
    Single->setScaleY(0.3f);
    Single->setPosition(Point(Vec2(visibleSize.width/2-200,visibleSize.height/2+origin.y-150)));
    
    
    //MultiPlayer Button
    auto Multi = MenuItemImage::create(
                                       "Button//MultiPlayer_Normal.png",
                                       "Button//MultiPlayer_Clicked.png",
                                       "Button//MultiPlayer_Activate.png",
                                       CC_CALLBACK_1(HelloWorld::menuCallback,this));
    Multi->setTag(MULTI);
    Multi->setAnchorPoint(Point(cocos2d::Point::ANCHOR_MIDDLE));
    Multi->setScaleX(0.3f);
    Multi->setScaleY(0.3f);
    Multi->setPosition(Point(Vec2(visibleSize.width / 2 + origin.x, origin.y + visibleSize.height / 2 - 150)));
    
    
    //Help&About Button
    auto Help = MenuItemImage::create(
                                      "Button//Help_About_Normal.png",
                                      "Button//Help_About_Clicked.png",
                                      "Button//Help_About_Activate.png",
                                      CC_CALLBACK_1(HelloWorld::menuCallback,this));
    Help->setTag(HELP);
    Help->setAnchorPoint(Point(cocos2d::Point::ANCHOR_MIDDLE));
    Help->setScaleX(0.3f);
    Help->setScaleY(0.3f);
    Help->setPosition(Point(Vec2(visibleSize.width / 2 + origin.x*2 + 200, origin.y + visibleSize.height / 2 - 150)));
    
    
    
    auto menu = Menu::create(Single,Multi,Help, NULL);
    menu->setPosition(Vec2::ZERO);
    this->addChild(menu,1);
    

    
    
  /*  // position the label on the center of the screen
    label->setPosition(Vec2(origin.x + visibleSize.width/2,
                            origin.y + visibleSize.height - label->getContentSize().height));

    // add the label as a child to this layer
    this->addChild(label, 1);

    // add "HelloWorld" splash screen"
    auto sprite = Sprite::create("HelloWorld.png");

    // position the sprite on the center of the screen
    sprite->setPosition(Vec2(visibleSize.width/2 + origin.x, visibleSize.height/2 + origin.y));

    // add the sprite as a child to this layer
    this->addChild(sprite, 0);*/
    
    return true;
}


void HelloWorld::menuCallback(Ref* pSender)
{

	switch(((Node*)pSender)->getTag())
	{
		//open SinglePlayer Scene
	case SINGLE:
		break;

		//open MultiPlayer Scene
	case MULTI:
		break;

		//open Help&About Scene
	case HELP:
            CCLOG("go to help");
            Director::getInstance()->replaceScene(GameHelp::createScene());
		break;
#if (CC_TARGET_PLATFORM == CC_PLATFORM_IOS)
            exit(0);
#endif

	}
    //Close the cocos2d-x game scene and quit the application
 //   Director::getInstance()->end();

  
    
    /*To navigate back to native iOS screen(if present) without quitting the application  ,do not use Director::getInstance()->end() and exit(0) as given above,instead trigger a custom event created in RootViewController.mm as below*/
    
    //EventCustom customEndEvent("game_scene_close_event");
    //_eventDispatcher->dispatchEvent(&customEndEvent);
    
    
}
