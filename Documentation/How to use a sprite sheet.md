# How to use a sprite sheet

* First import both .plist file and .png file into your workspace.
* When using the sheet, please first create a SpriteFrame using this code:

```c++
SpriteFrameCache* ButtonSpriteSheet = SpriteFrameCache::getInstance(); //1
ButtonSpriteSheet->addSpriteFramesWithFile("Buttons.plist", "Buttons.png"); //2
```

* * 1 is gonna get an instance of SpriteFrameCache and we'll get a pointer pointing to it named ```ButtonSpriteSheet```.
  * 2 is gonna bond our ```Buttons.plist``` and ```Buttons.png``` Sprite Sheet to ```*ButtonSpriteSheet```
* After this you'll get a SpriteFrameCache saving the buttons
* When creating a sprite with SpriteFrameCache, please use code like this:

```c++
Sprite* SomeButton = Sprite::createWithSpriteFrameName("Help_About_Normal.png");
```

* After this you'll get a Sprite from the cache using ```Help_About_Normal.png```
* Now you can just use the Sprite like normal Sprites like:

```c++
this->addChild(SomeButton);
```

* After using the SpriteFrameCache, if you think it useless, try to release it:

```c++
ButtonSpriteSheet->destroyInstance();
```

