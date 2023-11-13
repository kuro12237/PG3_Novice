#pragma once
#include<Novice.h>
#include"utility/InputManager/InputManager.h"

#include"Project/Scene/TitleScene.h"
#include"Project/Scene/PlayScene.h"
#include"Project/Scene/GameClearScene.h"

const char kWindowTitle[] = "LE2B_09_サカキバラ_イブキ";

class GameManager
{
public:
	GameManager();
	~GameManager();

	int Run();

private:

	std::unique_ptr<IScene> scene_[3] = {};

	int currentSceneNo_{};
	int prevSceneNo_{};
};