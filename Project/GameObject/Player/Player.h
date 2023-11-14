#pragma once
#include"Vector2.h"
#include"Novice.h"
#include"ImGuiManager.h"
#include"utility/InputManager/InputManager.h"
#include"Bullet/PlayerBullet.h"

class Player
{
public:
	Player() {};
	~Player() {};

	void Initialize();

	void Update();

	void Draw();

#pragma region Get

	Vector2 GetPos() { return pos_; }

	int GetSize() { return size_; }

	PlayerBullet* GetBullet() { return bullet_.get(); }

#pragma endregion

private:

	void Move();
	void Attack();

	Vector2 pos_{640.0f,480.0f};
	int size_ = 32;
	unsigned int color_ = 0x00ff00ff;

	const Vector2 speed_{5.0f,5.0f};

	std::unique_ptr<PlayerBullet>bullet_ = nullptr;

};