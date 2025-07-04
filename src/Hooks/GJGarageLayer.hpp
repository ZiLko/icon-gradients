#pragma once

#include "../Includes.hpp"

#include <Geode/modify/GJGarageLayer.hpp>

class $modify(ProGJGarageLayer, GJGarageLayer) {

	struct Fields {
		SEL_MenuHandler m_originalCallback = nullptr;

		std::vector<SimplePlayer*> m_allIcons;
		std::vector<SimplePlayer*> m_visibleIcons;
	};

	bool init();

	IconType getType();

	void onGradient(CCObject*);

	void onSwap(CCObject*);

	void updateGradient(bool = true);

	void updateQuickGradient();

	void onSelect(CCObject*);

	void setupPage(int, IconType);

};