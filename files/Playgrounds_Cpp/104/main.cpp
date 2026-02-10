#include <iostream>

int main()
{
	std::cout << "Enter a number: ";
	int x{};
	std::cin >> x;

	if (x >= 0)
	{
		if (x <= 20)
			std::cout << x << " is between 0 and 20\n";
		else
			std::cout << x << " is greate than 20\n";
	}
	else
		std::cout << x << " is negative\n";
	return 0;
}
