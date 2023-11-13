#include "EnemyVerticalState.h"

void EnemyVerticalState::Initialize()
{
	this->stateChangeTimer_ = 0;
}

void EnemyVerticalState::Update(Enemy* enemy)
{
	stateChangeTimer_++;
	if (stateChangeTimer_ >= stateChangeTimerMax_)
	{
		stateNo_ = LATERALMOVE;
	}

	Vector2 pos = enemy->GetPos();

	pos.y += speed_;

	//動きの制限
	if (pos.y <= moveMin_ || pos.y >= moveMax_)
	{
		speed_ = speed_ * -1;
	}

	enemy->SetPos(pos);
}
