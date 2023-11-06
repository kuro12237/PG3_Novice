#include"GameManager.h"

GameManager::GameManager()
{
	// ライブラリの初期化
    Novice::Initialize(kWindowTitle, 1280, 720);
}

GameManager::~GameManager()
{
	Novice::Finalize();
}

int GameManager::Run()
{
	// ウィンドウの×ボタンが押されるまでループ
	while (Novice::ProcessMessage() == 0) {
		// フレームの開始
		Novice::BeginFrame();
		InputManager::BeginFlame();

		///
		/// ↓更新処理ここから
		///

		///
		/// ↑更新処理ここまで
		///

		///
		/// ↓描画処理ここから
		///

		///
		/// ↑描画処理ここまで
		///

		// フレームの終了
		Novice::EndFrame();

		// ESCキーが押されたらループを抜ける
		if (InputManager::keyPressed(DIK_ESCAPE))
		{
			break;
		}
	}return 0;
}

// キー入力を受け取る
//memcpy(preKeys, keys, 256);
//Novice::GetHitKeyStateAll(keys);
