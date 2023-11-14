#include"Enemy.h"

void Enemy::Initialize()
{
	pos_ = { 320,128 };

	state_[ALIVE] = std::make_unique<EnemyAliveState>();
	state_[DEAD] = std::make_unique<EnemyDeadState>();

	currentStateNo_ = ALIVE;
	state_[currentStateNo_]->Initialize();
}

void Enemy::Update()
{
	prevStateNo_ = currentStateNo_;
	currentStateNo_ = state_[currentStateNo_]->GetStateNumber();

	if (prevStateNo_ != currentStateNo_)
	{
		state_[currentStateNo_]->Initialize();
	}

	state_[currentStateNo_]->Update(this);
}

void Enemy::Draw()
{
	Novice::DrawBox(static_cast<int>(pos_.x), static_cast<int>(pos_.y), size_, size_, 0.0f, color_, kFillModeSolid);
}

void Enemy::OnCollision()
{
	isAlive_ = false;
}
