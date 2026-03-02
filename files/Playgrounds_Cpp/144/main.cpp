#include <iostream>
#include "foo.h"

void print(int x, int y)
{
	std::cout << "x: " << x << '\n';
	std::cout << "y: " << y << '\n';
}

int main()
{
	print(5);

	return 0;
}
