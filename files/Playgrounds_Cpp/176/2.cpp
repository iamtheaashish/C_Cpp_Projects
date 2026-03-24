#include <iostream>

struct Fraction
{
	int numerator { 0 };
	int denominator { 1 };
};

void printFractionValue(const Fraction& f)
{
	std::cout << f.numerator / f.denominator << '\n';
}

int main()
{
	Fraction f { 5 , 9 };
	printFractionValue(f);

	return 0;
}
