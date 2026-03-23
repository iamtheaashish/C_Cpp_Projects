#include <iostream>

template <typename T, typename U>
struct Pair
{
	T first{};
	U second{};
};

struct Point
{
	int first{};
	int second{};
};

template <typename T>
void print(T p)
{
	std::cout << '[' << p.first << ", " << p.second << ']' << '\n';
}

int main()
{
	Pair<double, int> p1{4.5,6};
	print(p1);

	std::cout << '\n';

	Point p2 {7, 8};
	print(p2);

	std::cout << '\n';
	
	return 0;
}
