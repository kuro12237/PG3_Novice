#pragma once
#include <memory>

#include"../IScene.h"
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

	void CheckCollision();

	std::unique_ptr<Player>player_ = nullptr;
	std::unique_ptr<Enemy>enemy_ = nullptr;
};