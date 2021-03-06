#pragma once
#include "../Logic/MainLogic.h"

enum sideToShoot
{
	left = 0,
	right = 1,
	top = 2,
	bottom = 3
};

void TurnOfAI(SeaCell(*playersField)[11][11], Player(*playersPointer), DamagedShipToBeDestroedByAI *shipToAttack,
			  SeaCell(*enemyField)[11][11]);