#include <iostream>

int main()
{
	std::cout << "Enter an integer: ";
	int x {};
	std::cin >> x;

	if (x == 0)
		std::cout << "The value is ZERO!\n";
	return 0;
}
