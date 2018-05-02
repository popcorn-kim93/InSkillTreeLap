#pragma once
#include <Windows.h>

class GameTimer
{
public:
	GameTimer();
	~GameTimer();

	// ���� Ÿ�̸� ���� �޼ҵ�.
	void StartTimer();
	double GetTime();
	double DeltaTime();

	void UpdateTimer();
	void Reset();
	int GetFPS();

protected:

	// ���� Ÿ�̸� ���� ����.
	double countsPerSecond = 0.0;
	__int64 countStart = 0;

	int frameCount = 0;
	int fps = 0;

	__int64 prevFrameTimer = 0;
};