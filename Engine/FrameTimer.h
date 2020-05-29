#pragma once
#include <chrono>

class FramTimer
{
public:

	FramTimer();
	float Mark();

private:
	std::chrono::steady_clock::time_point last;
};

