#include "GameLevelScene.h"

USING_NS_CC;

Scene* GameLevel::createScene()
{
    // 'scene' is an autorelease object
    auto scene = Scene::create();
    
    // 'layer' is an autorelease object
    auto layer = GameLevel::create();
    
    // add layer as a child to scene
    scene->addChild(layer);
    
    // return the scene
    return scene;
}

// on "init" you need to initialize your instance
bool GameLevel::init()
{
    if ( !Layer::init() )
    {
        return false;
    }
    
    _levelMap = TMXTiledMap::create("levels/level1.tmx");
    
    // add layer as a child to scene
    this->addChild(_levelMap, 0);
    
    return true;
}
