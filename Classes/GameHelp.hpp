/**
 * @brief GameHelp class used to show a help and about for this game
 * @file Classes/GameHelp.hpp
 * @Author Yates Liang
 *
 * This is a game helper which can show detailed information about this game
 * The information includes the instructions of this game, the about info for this game, etc.
 *
 * <ChangeLog>
 * -----------------------------------------------------------------------------------------------
 * |   <Build>   |   <Author>   | <Description>                                                  |
 * -----------------------------------------------------------------------------------------------
 * |201705102122 |   Leon Wong  | Introducing Doxygen for this file.                             |
 * |             |              |                                                                |
 * |             |              |                                                                |
 * -----------------------------------------------------------------------------------------------
 */

#ifndef GameHelp_hpp
#define GameHelp_hpp
#include "HelloWorldScene.h"
#include <stdio.h>

/**
 * Game Help class declaration
 * @inherit: public cocos2d::Layer
 * @brief This is a class which is defined to show help info.
 *
 * @author Yates Liang
 */
class GameHelp: public cocos2d::Layer
{
public:
    /**
     * CreateScene
     * @return TODO:潮潮把这里补充一下
     */
    static cocos2d::Scene * createScene();

    /**
     * Initialization function
     * @return a bool, true if initialization succeed, false otherwise
     */
    virtual bool init();

    /**
     * TODO 潮潮把这里补充一下
     * @param pSender
     */
    void menuCallBack(cocos2d::Ref * pSender);

    /**
     * TODO 潮潮把这里补充一下
     */
    CREATE_FUNC(GameHelp);
    
};

#endif /* GameHelp_hpp */
