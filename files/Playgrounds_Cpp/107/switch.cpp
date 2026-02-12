#include <iostream>

void printDigitName(int x)
{
	switch (x)
	{
	case 1:
		std::cout << "One";
		return;
	case 2:
		std::cout << "Two";
		return;
	case 3:
		std::cout << "Three";
		return;
	default:
		std::cout << "Unknown";
		return;
	}
}

int main()
{
	std::cout << "Enter a digit: ";
	int x{};
	std::cin >> x;

	printDigitName(x);
	std::cout << '\n';
	return 0;
}
