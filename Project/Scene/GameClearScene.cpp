#include"GameClearScene.h"

void GameClearScene::Initialize()
{
}

void GameClearScene::Update()
{
	if (InputManager::onKeyPressed(DIK_SPACE))
	{
		sceneNo_ = TITLE;
	}
}

void GameClearScene::Draw()
{
	Novice::ScreenPrintf(0, 0, "ClearScene");
	Novice::ScreenPrintf(0, 20, "ChangeScene : pushSpace");
}
