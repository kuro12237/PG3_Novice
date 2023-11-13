#include"IEnemyState.h"

int IEnemyState::stateNo_ = DEAD;

int IEnemyState::GetStateNumber()
{
	return stateNo_;
}

