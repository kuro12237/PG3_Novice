#include"IEnemyState.h"

int IEnemyState::stateNo_ = VERTICALMOVE;

int IEnemyState::GetStateNumber()
{
	return stateNo_;
}

