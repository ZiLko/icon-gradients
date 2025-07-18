#pragma once

#include "../Includes.hpp"

#include <Geode/modify/PlayerObject.hpp>

class $modify(ProPlayerObject, PlayerObject) {

	static void onModify(auto& self) {
		(void)self.setHookPriorityAfterPost("PlayerObject::updatePlayerFrame", "hiimjustin000.more_icons");
		(void)self.setHookPriorityAfterPost("PlayerObject::updatePlayerShipFrame", "hiimjustin000.more_icons");
		(void)self.setHookPriorityAfterPost("PlayerObject::updatePlayerRollFrame", "hiimjustin000.more_icons");
		(void)self.setHookPriorityAfterPost("PlayerObject::updatePlayerBirdFrame", "hiimjustin000.more_icons");
		(void)self.setHookPriorityAfterPost("PlayerObject::updatePlayerDartFrame", "hiimjustin000.more_icons");
		(void)self.setHookPriorityAfterPost("PlayerObject::createRobot", "hiimjustin000.more_icons");
		(void)self.setHookPriorityAfterPost("PlayerObject::createSpider", "hiimjustin000.more_icons");
		(void)self.setHookPriorityAfterPost("PlayerObject::updatePlayerSwingFrame", "hiimjustin000.more_icons");
		(void)self.setHookPriorityAfterPost("PlayerObject::updatePlayerJetpackFrame", "hiimjustin000.more_icons");
	}

	struct Fields {
		IconType m_previousType = static_cast<IconType>(-9038);

		CCSprite* m_iconSprite = nullptr;
		CCSprite* m_iconSpriteSecondary = nullptr;
		CCSprite* m_vehicleSprite = nullptr;
		CCSprite* m_vehicleSpriteSecondary = nullptr;

		std::vector<CCSprite*> m_animSprites;

		bool m_thatOneUfoShipAndCubeModIsLoaded = false;
	};
	
	bool shouldReturn(GJBaseGameLayer*, bool = false);

	IconType getIconType();

	void updateVisibility();

	void updateSprite(CCSprite*, CCSprite*&, SpriteType, bool);

	void updateIconSprite(Gradient, auto);

	void updateVehicleSprite(Gradient, auto);

	void updateAnimSprite(IconType, Gradient, auto);

	void updateGradient();

	void togglePlayerScale(bool, bool);

	void updatePlayerFrame(int);

    void updatePlayerShipFrame(int);

    void updatePlayerRollFrame(int);

    void updatePlayerBirdFrame(int);

    void updatePlayerDartFrame(int);

    void updatePlayerSwingFrame(int);

    void updatePlayerJetpackFrame(int);

	void createRobot(int);

	void createSpider(int);

	bool init(int, int, GJBaseGameLayer*, cocos2d::CCLayer*, bool);

};