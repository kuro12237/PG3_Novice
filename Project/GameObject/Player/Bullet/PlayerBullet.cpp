#include"PlayerBullet.h"

void PlayerBullet::Initialize(Vector2 pos)
{
	if (!isAlive)
	{
		pos_ = pos;
		isAlive = true;
	}
}

void PlayerBullet::Update()
{
	pos_.y -= speed_;

	if (pos_.y <= 0 - size_)
	{
		isAlive = false;
	}
}

void PlayerBullet::Draw()
{
	if (isAlive)
	{
		Novice::DrawBox(static_cast<int>(pos_.x), static_cast<int>(pos_.y),size_,size_,0.0f,RED,kFillModeSolid);
	}
}

void PlayerBullet::OnCollision()
{
	isAlive = false;
}
