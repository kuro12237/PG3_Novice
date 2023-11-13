#pragma once

enum ENEMYSTATE
{
    LATERALMOVE,
	VERTICALMOVE,
};

class Enemy;
class IEnemyState
{
public:
	
	virtual ~IEnemyState() {};

	virtual void Initialize() = 0;

	virtual void Update(Enemy *enemy) = 0;

	int GetStateNumber();

protected:

	static int stateNo_;
};

