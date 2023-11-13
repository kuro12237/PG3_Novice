#include "IScene.h"

int IScene::sceneNo_ = TITLE;

int IScene::GetStateNumber()
{
	return sceneNo_;
}