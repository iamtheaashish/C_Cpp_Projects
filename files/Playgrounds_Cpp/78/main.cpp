#include <iostream>

int main()
{
	std::cout << "Enter the number: ";
	int x{};
	std::cin >> x;

	int y {(x%2)};

	if (y == 0)
		std::cout << "Number is even.\n";

	else
		std::cout << "Number is odd.\n";

	return 0;
}
