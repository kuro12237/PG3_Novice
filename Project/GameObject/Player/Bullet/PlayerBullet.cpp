#include"PlayerBullet.h"

void PlayerBullet::Initialize(Vector2 pos)
{
	pos_ = pos;
	isCollision = false;
}

void PlayerBullet::Update()
{
	pos_.y -= speed_;
}

void PlayerBullet::Draw()
{
	if (!isCollision)
	{
		Novice::DrawEllipse(static_cast<int>(pos_.x), static_cast<int>(pos_.y),size_,size_,0.0f,RED,kFillModeSolid);
	}

}
