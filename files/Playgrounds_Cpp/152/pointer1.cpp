#include <iostream>

int main()
{
	int x { 5 };
	std::cout << x << '\n';

	int* ptr{ &x };
	std::cout << ptr << '\n';
	std::cout << *ptr << '\n';
	return 0;
}
