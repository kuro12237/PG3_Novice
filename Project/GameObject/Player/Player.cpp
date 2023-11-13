#include "Player.h"

void Player::Initialize()
{
	bullet_ = std::make_unique<PlayerBullet>();
}

void Player::Update()
{
	Move();	

	//攻撃
	if (InputManager::keyPressed(DIK_SPACE))
	{
		Attack();
	}

	bullet_->Update();
}

void Player::Draw()
{
	bullet_->Draw();
	Novice::DrawEllipse(static_cast<int>(pos_.x), static_cast<int>(pos_.y), size_, size_, 0.0f, WHITE, kFillModeSolid);

}

void Player::Move()
{
	//上下
	if (InputManager::keyHeld(DIK_W))
	{
		pos_.y -= speed_.y;
	}
    
	if (InputManager::keyHeld(DIK_S))
	{
		pos_.y += speed_.y;
	}

	//右左
	if (InputManager::keyHeld(DIK_D))
	{
		pos_.x += speed_.x;
	}
	
	if (InputManager::keyHeld(DIK_A))
	{
		pos_.x -= speed_.x;
	}
}

void Player::Attack()
{
	bullet_->Initialize(pos_);

}
