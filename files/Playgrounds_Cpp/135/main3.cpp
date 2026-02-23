#include <iostream>
#include <random>
#include <chrono>

int main()
{
	std::mt19937 mt{ static_cast<std::mt19937::result_type>(
			std::chrono:steady_clock::now().time_since_epoch().count()
			) };
	return 0;
}
