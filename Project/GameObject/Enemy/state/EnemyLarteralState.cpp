#include "EnemyLarteralState.h"

void EnemyLarteralState::Initialize()
{
	this->stateChangeTimer_ = 0;
}

void EnemyLarteralState::Update(Enemy* enemy)
{
	stateChangeTimer_++;
	if (stateChangeTimer_ >= stateChangeTimerMax_)
	{
		stateNo_ = VERTICALMOVE;
	}

	Vector2 pos = enemy->GetPos();
	pos.x += speed_;

	//動きの制限
	if (pos.x <= moveMin_ || pos.x >= moveMax_)
	{
		speed_ = speed_ * -1;
	}

	enemy->SetPos(pos);
}