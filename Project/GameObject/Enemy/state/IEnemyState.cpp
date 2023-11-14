#include"IEnemyState.h"

int IEnemyState::stateNo_ = ALIVE;

int IEnemyState::GetStateNumber()
{
	return stateNo_;
}

