#include <iostream>

template <typename T>
T max(T x, T y)
{
	return (x < y) ? y : x;
}

int main()
{
	std::cout << max<int>(1,2) << '\n';
	std::cout << max<float>(3.999999999999999, 3.99999999999) << '\n';

	return 0;
}

