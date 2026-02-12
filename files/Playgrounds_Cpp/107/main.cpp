#include <iostream>

void printDigitName(int x)
{
	if(x == 1)
		std::cout << "One";
	else if (x == 2)
		std::cout << "Two";
	else if (x == 3)
		std::cout << "Three";
	else
		std::cout << "Unknown";
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
