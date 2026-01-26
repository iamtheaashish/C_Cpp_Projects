// GCC Compiler evaluates arguments in left-to-right order
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
	std::cout << "X is " << x << ", Y is " << y << " and Z is " << z << ".\n";
	std::cout << x + (y * z) << '\n';

}

int main()
{
	printCalc(getValue(), getValue(), getValue()); // this line is ambiguous

	return 0;
}

