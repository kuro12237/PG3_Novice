#include"GameManager.h"

GameManager::GameManager()
{
    Novice::Initialize(kWindowTitle, 1280, 720);
	scene_[TITLE] = std::make_unique<TitleScene>();
	scene_[PLAY] = std::make_unique<PlayScene>();
	scene_[CLEAR] = std::make_unique<GameClearScene>();

	currentSceneNo_ = TITLE;
	scene_[currentSceneNo_]->Initialize();
}

GameManager::~GameManager()
{
	Novice::Finalize();
}

int GameManager::Run()
{
	while (Novice::ProcessMessage() == 0) {
		Novice::BeginFrame();
		InputManager::BeginFlame();

		prevSceneNo_ = currentSceneNo_;
		currentSceneNo_ = scene_[currentSceneNo_]->GetStateNumber();

		if (prevSceneNo_ != currentSceneNo_)
		{
			scene_[currentSceneNo_]->Initialize();
		}

		scene_[currentSceneNo_]->Update();

		scene_[currentSceneNo_]->Draw();

		Novice::EndFrame();

		if (InputManager::keyPressed(DIK_ESCAPE))
		{
			break;
		}
	}
	return 0;
}