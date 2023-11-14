#pragma once
#include<Novice.h>
#include"Vector2.h"

class PlayerBullet
{
public:
	PlayerBullet() {};
	~PlayerBullet() {};

	void Initialize(Vector2 pos);

	void Update();

	void Draw();

	void OnCollision();

#pragma region Get

	Vector2 GetPos() { return pos_; }

	int GetSize() { return size_; }

	bool GetIsAlive() { return isAlive; }

#pragma endregion

private:

	Vector2 pos_{0,-64.0f};
	int size_ = 16;
	float speed_ = 5.0f;

	bool isAlive = false;
};