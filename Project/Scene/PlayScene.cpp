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

	CheckCollisions();
}

void PlayScene::Draw()
{
	player_->Draw();
	enemy_->Draw();
}

void PlayScene::CheckCollisions()
{
	Vector2 PlayerPos = player_->GetPos();
	int PlayerSize = player_->GetSize();

	Vector2 PlayerBulletPos = player_->GetBullet()->GetPos();
	int PlayerBulletSize = player_->GetBullet()->GetSize();


	Vector2 EnemyPos = enemy_->GetPos();
	int EnemySize = enemy_->GetSize();
	
	if (Collision(PlayerPos,PlayerSize,EnemyPos,EnemySize))
	{
		sceneNo_ = OVER;
	}

	if (Collision(PlayerBulletPos, PlayerBulletSize, EnemyPos, EnemySize))
	{
		sceneNo_ = CLEAR;
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
