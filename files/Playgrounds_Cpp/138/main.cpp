#include <iostream>

void compare(int x, int y)
{
	if (x > y)
		std::cout << x << " is greater than " << y << '\n';
	else if (x < y)
		std::cout << x << " is less than " << y << '\n';
	else
		std::cout << x << " is equal to " << y << '\n';
}

int main()
{
	std::cout << "Enter a number: ";
	int x{};
	std::cin >> x;

	std::cout << "Enter another number: ";
	int y{};
	std::cin >> y;

	compare(x, y);

	return 0;
}
