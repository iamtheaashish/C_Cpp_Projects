#include <iostream>

void print(int x)
{
	std::cout << x << '\n';
}

void print(double d)
{
	std::cout << d << '\n';
}

int main()
{
	print(5);
	print(6.7);

	return 0;
}
