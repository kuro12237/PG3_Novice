#include"InputManager.h"

InputManager* InputManager::GetInstance()
{
	static InputManager instance;
	return &instance;
}

void InputManager::BeginFlame()
{
	memcpy(InputManager::GetInstance()->preKeys, InputManager::GetInstance()->keys, 256);
	Novice::GetHitKeyStateAll(InputManager::GetInstance()->keys);
}

bool InputManager::onKeyPressed(uint32_t preKeys)
{
	if (InputManager::GetInstance()->keys[preKeys] == 0 && InputManager::GetInstance()->preKeys[preKeys] != 0)
	{
		return true;
	}
	return false;
}

bool InputManager::onKeyPress(uint32_t key)
{
	if (InputManager::GetInstance()->keys[key] != 0)
	{
		return true;
	}
	return false;
}
