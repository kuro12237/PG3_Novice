#include"Enemy.h"

void Enemy::Initialize()
{
	pos_ = { 320,128 };

	state_[LATERALMOVE] = std::make_unique<EnemyLarteralState>();
	state_[VERTICALMOVE] = std::make_unique<EnemyVerticalState>();
	state_[DEAD] = std::make_unique<EnemyDeadState>();

	currentStateNo_ = DEAD;
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
	Novice::DrawEllipse(static_cast<int>(pos_.x), static_cast<int>(pos_.y), size_, size_, 0.0f, color_, kFillModeSolid);
}
