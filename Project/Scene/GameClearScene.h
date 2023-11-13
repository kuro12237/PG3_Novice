#pragma once
#include <memory>

#include"IScene.h"
#include"utility/InputManager/InputManager.h"

class GameClearScene :public IScene
{
public:

	~GameClearScene() {};

	void Initialize()override;

	void Update()override;

	void Draw()override;

private:

};