#pragma once
#include<Novice.h>
#include<format>

class InputManager
{
public:
	
	static InputManager *GetInstance();

	static void BeginFlame();

	/// <summary>
	/// 押した瞬間
	/// </summary>
	static bool onKeyPressed(uint32_t key);
	
	/// <summary>
	/// 押し続ける
	/// </summary>
	static bool onKeyPress(uint32_t key);

private:

	char keys[256] = { 0 };
	char preKeys[256] = { 0 };

	InputManager() = default;
	~InputManager() = default;
	InputManager(const InputManager&) = delete;
	const InputManager& operator=(const InputManager&) = delete;
};