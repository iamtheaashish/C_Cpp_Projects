#include <iostream>

int main()
{
	for (unsigned int x{0}, y{9}; x < 11; ++x, --y)
		std::cout << x << ' ' << y << '\n';
	return 0;
}
