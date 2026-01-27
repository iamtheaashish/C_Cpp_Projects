#include <iostream>
#include <cmath>

int main()
{
	std::cout << "Enter a number: ";
	int x{};
	std::cin >> x;

	std::cout << "Enter exponent of " << x << ": ";
	int y{};
	std::cin >> y;

	double z{ std::pow(x,y) };
	std::cout << "Answer is: " << z << '\n';

	return 0;
}
