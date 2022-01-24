#pragma once
#include "Player.h"

// 순환참조
class Monster
{
private:
	Player NewPlayer;
	
public:
	Monster();
};



