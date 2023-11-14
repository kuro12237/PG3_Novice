#pragma once
#include<memory>
#include<Novice.h>
#include"Vector2.h"

#include"state/IEnemyState.h"
#include"state/EnemyAliveState.h"
#include"state/EnemyDeadState.h"


class Enemy
{
public:
	Enemy() {};
	~Enemy() {};

	void Initialize();

	void Update();

	void Draw();

	void OnCollision();

#pragma region Get

	unsigned int GetColor() { return color_; }

	Vector2 GetPos() { return pos_; }

	int GetSize() { return size_; }

	bool GetIsAlive() { return isAlive_; }
#pragma endregion

#pragma region Set

	void SetPos(Vector2 pos) { pos_ = pos; }
	
	void SetColor(unsigned int color) { color_ = color; }

#pragma endregion

private:

	Vector2 pos_{};
	int size_ = 32;
	unsigned int color_ = 0x000000FF;

	std::unique_ptr<IEnemyState>state_[2] = {};

	int currentStateNo_{};
	int prevStateNo_{};
	
	bool isAlive_ = true;
};