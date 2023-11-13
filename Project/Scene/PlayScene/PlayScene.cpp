#include "PlayScene.h"

void PlayScene::Initialize()
{
	player_ = std::make_unique<Player>();
	player_->Initialize();

	enemy_ = std::make_unique<Enemy>();
	enemy_->Initialize();
}

void PlayScene::Update()
{
	player_->Update();
	enemy_->Update();
}

void PlayScene::Draw()
{
	player_->Draw();
	enemy_->Draw();
}

void PlayScene::CheckCollision()
{


}
