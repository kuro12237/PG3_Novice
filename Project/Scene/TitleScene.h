#pragma once
#include <memory>

#include"IScene.h"
#include"Project/GameObject/Player/Player.h"
#include"Project/GameObject/Enemy/Enemy.h"
#include"utility/InputManager/InputManager.h"

class TitleScene :public IScene
{
public:

	~TitleScene() {};

	void Initialize()override;

	void Update()override;

	void Draw()override;

private:

};