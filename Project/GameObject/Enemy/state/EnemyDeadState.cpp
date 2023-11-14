#include "EnemyDeadState.h"

void EnemyDeadState::Initialize()
{
}

void EnemyDeadState::Update(Enemy* enemy)
{
	enemy->SetColor(RED);
}
