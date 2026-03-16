#include <iostream>

enum Color
{
	red,
	blue,
	green,
};

int main()
{
	Color shirt { red };
	Color socks { green };
	Color panty { blue };

	std::cout << panty << '\n';
	return 0;
}
