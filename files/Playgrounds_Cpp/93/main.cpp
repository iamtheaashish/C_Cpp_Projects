#include <iostream>

int main()
{
	std::cout << "Enter an integer: ";
	int x{};
	std::cin >> x;

	std::cout << "Enter a larger integer: ";
	int y{};
	std::cin >> y;

	if(x>y)
	{
		std::cout << "Swapping the values\n";
		int t{}; // t is a temporary variable being used to swap x and y value
		t= x;
		x = y;
		y = t;
	}

	std::cout << "The smaller value is " << x << '\n';
	std::cout << "The larger value is " << y << '\n';

	return 0;
}
