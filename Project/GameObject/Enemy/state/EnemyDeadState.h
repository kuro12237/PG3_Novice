#pragma once
#include"IEnemyState.h"
#include"../Enemy.h"

class EnemyDeadState:public IEnemyState
{
public:
	EnemyDeadState() {};
	~EnemyDeadState() {};

	void Initialize()override;

	void Update(Enemy* enemy)override;

private:

};

