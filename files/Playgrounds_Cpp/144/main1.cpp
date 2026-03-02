#include <iostream>

void print(int x, int y=4)
{
	std::cout << "x: " << x << '\n';
	std::cout << "y: " << y << '\n';
}

int main()
{
	print(1 ,2);
	print(3);

	return 0;
}
