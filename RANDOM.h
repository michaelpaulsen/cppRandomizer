#pragma once
#include <math.h>
#include <ctime>
#include <chrono>
class Random
{

	static long double Seed;
public:
	typedef std::chrono::system_clock sys_time;
	typedef std::chrono::milliseconds ms;
	static void setSeed(long float seed) {
		Seed = seed;
	}
	static void setSeed() {
		auto since_epoch = sys_time::now().time_since_epoch();
		auto ms_since_epoch = std::chrono::duration_cast<ms>(since_epoch).count();
		Random::Seed = ms_since_epoch; 
	}
	static float rand(long float max, long float mod1);
	static float rand(long float max, long float c1, long float mod1);
};

