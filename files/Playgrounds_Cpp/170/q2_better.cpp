#include <iostream>

struct Fraction
{
	int num{0};
	int den{0};
};

Fraction getFraction()
{
	Fraction temp{};
	std::cout << "Enter a value for the numerator: ";
	std::cin >> temp.num;

	std::cout << "Enter a value for the denominator: ";
	std::cin >> temp.den;

	std::cout << '\n';

	return temp;
}

constexpr Fraction multiply(const Fraction& f1, const Fraction& f2)
{
	return { f1.num * f2.num, f1.den * f2.den};
}


void printFrac(const Fraction& f)
{
	std::cout << "Your fractions multiplied together: " << f.num<< '/' 
		<< f.den << '\n';
}


int main()
{
	Fraction f1 {getFraction()};
	
	Fraction f2 {getFraction()};

	printFrac(multiply(f1,f2));
	
	return 0;
}
