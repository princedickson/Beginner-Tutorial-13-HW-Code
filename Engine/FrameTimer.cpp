#include "FrameTimer.h"
using namespace std::chrono;
FramTimer::FramTimer()
{
	last = steady_clock::now();
}

float FramTimer::Mark()
{
	const auto old = last;
	last = steady_clock::now();
	const duration<float> FramTimer = last - old;
	return FramTimer.count();
}
