#pragma once
#include"IEnemyState.h"
#include"../Enemy.h"

class EnemyAliveState:public IEnemyState
{
public:
	EnemyAliveState() {};
	~EnemyAliveState() {};

	void Initialize()override;

	void Update(Enemy* enemy)override;	
private:
	
	const float moveMax_ = 1152.0f;
	const float moveMin_ = 128.0f;

	float speed_ = 5.0f;

	int stateChangeTimer_ = 0;
	const int stateChangeTimerMax_ = 300;
};