#include "EnemyAliveState.h"

void EnemyAliveState::Initialize()
{
	this->stateChangeTimer_ = 0;
}

void EnemyAliveState::Update(Enemy* enemy)
{
	stateChangeTimer_++;

	Vector2 pos = enemy->GetPos();
	pos.x += speed_;

	//動きの制限
	if (pos.x <= moveMin_ || pos.x >= moveMax_)
	{
		speed_ = speed_ * -1;
	}

	if (!enemy->GetIsAlive())
	{
		stateNo_ = DEAD;
	}

	enemy->SetPos(pos);
}