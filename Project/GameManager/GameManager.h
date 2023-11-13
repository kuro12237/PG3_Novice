#pragma once
#include<Novice.h>
#include"utility/InputManager/InputManager.h"
#include"Project/Scene/PlayScene/PlayScene.h"


const char kWindowTitle[] = "LE2B_09_サカキバラ_イブキ";

class GameManager
{
public:
	GameManager();
	~GameManager();

	int Run();

private:
	IScene* state = nullptr;

	int currentSceNo_{};
	int prevSceneNo_{};
};