#include "EnemyDeadState.h"

void EnemyDeadState::Initialize()
{
}

void EnemyDeadState::Update(Enemy* enemy)
{
	unsigned  int color = enemy->GetColor();

	color += 0x01000000;
	enemy->SetColor(color);

}
