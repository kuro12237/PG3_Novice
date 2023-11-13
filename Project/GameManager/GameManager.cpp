#include"GameManager.h"

GameManager::GameManager()
{
    Novice::Initialize(kWindowTitle, 1280, 720);
	state = new PlayScene();
	state->Initialize();
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

		/// ↓更新処理ここから
		state->Update();

		/// ↓描画処理ここから
		state->Draw();

		Novice::EndFrame();

		if (InputManager::keyPressed(DIK_ESCAPE))
		{
			break;
		}
	}
	return 0;
}