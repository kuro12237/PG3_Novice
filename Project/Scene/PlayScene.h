#pragma once
#include <memory>

#include"IScene.h"
#include"Project/GameObject/Player/Player.h"
#include"Project/GameObject/Enemy/Enemy.h"

class PlayScene:public IScene
{
public:

	~PlayScene() {};

	void Initialize()override;

	void Update()override;

	void Draw()override;


private:

	void CheckCollisions();

	bool Collision(Vector2 p1,int s1,Vector2 p2,int s2);

	std::unique_ptr<Player>player_ = nullptr;
	std::unique_ptr<Enemy>enemy_ = nullptr;
};