// Improved and correct version of the previous program

#include <iostream>

int getValue()
{	
	std::cout << "Enter an integer: ";

	int x{};
	std::cin >> x;
	return x;
}

void printCalc(int x, int y, int z)
{
	std::cout << x + (y * z) << '\n';
}

int main()
{
	int a{ getValue() };
	int b{ getValue() };
	int c{ getValue() };

	printCalc(a, b, c);

	return 0;
}
