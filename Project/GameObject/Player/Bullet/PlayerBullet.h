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

#pragma region Get

	Vector2 GetPosition() { return pos_; }

	int GetSize() { return size_; }

#pragma endregion

private:

	Vector2 pos_{};
	int size_ = 16;
	float speed_ = 5.0f;

	bool isCollision = false;
};