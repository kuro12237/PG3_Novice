#pragma once
#include <memory>

#include"IScene.h"
#include"utility/InputManager/InputManager.h"

class GameOverScene :public IScene
{
public:

	~GameOverScene() {};

	void Initialize()override;

	void Update()override;

	void Draw()override;

private:

};