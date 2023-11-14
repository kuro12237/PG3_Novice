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

	CheckCollision();

	if (!enemy_->GetIsAlive())
	{
		//sceneNo_ = CLEAR;
	}
}

void PlayScene::Draw()
{
	Novice::ScreenPrintf(0, 0, "PlayScene");
	Novice::ScreenPrintf(0, 20, "PlayerControl : WASD");
	Novice::ScreenPrintf(0, 40, "PlayerBullet : Space");
	Novice::ScreenPrintf(0, 60, "KillEnemy = ChangeScene");

	player_->Draw();
	enemy_->Draw();
}

void PlayScene::CheckCollision()
{
	PlayerBullet* bullet = player_->GetBullet();
	
	if (Collision(bullet->GetPos(), bullet->GetSize(), enemy_->GetPos(), enemy_->GetSize()))
	{
		enemy_->OnCollision();
		bullet->OnCollision();
	}
}

bool PlayScene::Collision(Vector2 p1, int s1, Vector2 p2, int s2)
{
	if (p1.x <= p2.x + s2 && p2.x <= p1.x + s1)
	{
		if (p1.y <= p2.y + s2 && p2.y <= p1.y + s1)
		{
			return true;
		}
	}
	return false;
}
