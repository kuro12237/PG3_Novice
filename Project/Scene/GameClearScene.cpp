#include"GameClearScene.h"

void GameClearScene::Initialize()
{
}

void GameClearScene::Update()
{
	if (InputManager::keyPressed(DIK_SPACE))
	{
		sceneNo_ = TITLE;
	}

}

void GameClearScene::Draw()
{
	Novice::ScreenPrintf(0, 0, "ClearScene");
}
