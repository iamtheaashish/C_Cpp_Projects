#include <iostream>

int main()
{
	int* ptr{};

	int x { 5 };
	ptr = &x;

	std::cout << *ptr << '\n';
	return 0;
}
