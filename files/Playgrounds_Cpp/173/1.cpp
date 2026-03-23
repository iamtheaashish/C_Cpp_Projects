#include <iostream>

struct Pair
{
	int first{};
	int second{};
};

constexpr int max(Pair p)
{
	return (p.first < p.second ? p.second : p.first);
}


int main()
{
	Pair p1{ 5,6 };
	std::cout << max(p1) << " is larger\n";

	return 0;
}
