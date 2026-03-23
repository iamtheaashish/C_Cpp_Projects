#include <iostream>

struct Fraction
{
	int num{0};
	int den{0};
};

Fraction getValue()
{
	Fraction temp{};
	std::cout << "Enter a value for the numerator: ";
	std::cin >> temp.num;

	std::cout << "Enter a value for the denominator: ";
	std::cin >> temp.den;

	std::cout << '\n';

	return temp;
}

void printFrac(Fraction first, Fraction second)
{
	int numerator{};
	numerator = (first.num * second.num);

	int denominator{};
	denominator = (first.den * second.den);

	std::cout << "Your fractions multiplied together: " << numerator << '/' 
		<< denominator << '\n';
}


int main()
{
	Fraction first {getValue()};
	
	Fraction second {getValue()};

	printFrac(first,second);
	
	return 0;
}
