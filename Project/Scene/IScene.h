#pragma once

enum SCENE
{
	TITLE,
	PLAY,
	CLEAR
};

class IScene
{
public:
	virtual ~IScene() {};

	virtual void Initialize() = 0;

	virtual void Update() = 0;

	virtual void Draw() = 0;

	int GetStateNumber();

protected:

	static int sceneNo_;
};