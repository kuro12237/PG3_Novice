#include "Player.h"

void Player::Initialize()
{
	bullet_ = std::make_unique<PlayerBullet>();

	this->pos_= { 640.0f,480.0f };
	this->size_ = 32;
	this->color_ = 0x00ff00ff;

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
	Novice::DrawBox(static_cast<int>(pos_.x), static_cast<int>(pos_.y), size_, size_, 0.0f, color_, kFillModeSolid);
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
	Vector2 spownPos = pos_;
	spownPos.x = spownPos.x + (size_ / 4);
	bullet_->Initialize(spownPos);
}
