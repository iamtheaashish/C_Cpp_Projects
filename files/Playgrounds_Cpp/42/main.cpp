#include <iostream>

bool isEqual(int x, int y)
{
	return x==y;
}


int main()
{
	std::cout << "Enter an integer: ";
	int x{};
	std::cin >> x;

	std::cout << "Enter another integer: ";
	int y{};
	std::cin >> y;

	std::cout << std::boolalpha;
	std::cout << x << " and " << y << " are equal?";
	std::cout << " " << isEqual(x,y) << '\n';
	return 0;
}
