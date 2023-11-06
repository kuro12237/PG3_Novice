#pragma once
#include<Novice.h>
#include"utility/InputManager/InputManager.h"

const char kWindowTitle[] = "LE2B_09_サカキバラ_イブキ";

class GameManager
{
public:
	GameManager();
	~GameManager();

	int Run();

private:

	int currentSceNo_{};
	int prevSceneNo_{};
};