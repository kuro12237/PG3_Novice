#include "GameOverScene.h"

void GameOverScene::Initialize()
{
}

void GameOverScene::Update()
{
	if (InputManager::keyPressed(DIK_SPACE))
	{
		sceneNo_ = TITLE;
	}
}

void GameOverScene::Draw()
{
	Novice::ScreenPrintf(0, 0, "GAmeOverScene");
}
