#include <iostream>

template <typename T>
T addOne(T x);

int main()
{
	std::cout << addOne(1) << '\n';
	std::cout << addOne(2.3) << '\n';
	return 0;
}
