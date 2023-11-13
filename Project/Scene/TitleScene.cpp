#include "TitleScene.h"

void TitleScene::Initialize()
{
}

void TitleScene::Update()
{
	if (InputManager::keyPressed(DIK_SPACE))
	{
		sceneNo_ = PLAY;
	}
}

void TitleScene::Draw()
{
	Novice::ScreenPrintf(0, 0, "TitleScene");
}
