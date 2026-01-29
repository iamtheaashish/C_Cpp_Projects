#include <iostream>

int main()
{
	std::cout << "Enter an Integer: ";
	int x{};
	std::cin >> x;

	std::cout << "Enter another Integer: ";
	int y{};
	std::cin >> y;

	if(x<y)
		std::cout << x << " is lesser than " << y << ".\n";
	if(x>y)
		std::cout << x << " is greater than " << y << ".\n";
	if(x==y)
		std::cout << x << " is equal to " << y << ".\n";
	if(x!=y)
		std::cout << x << " ain't equal to " << y << ".\n";
	if(x<=y)
		std::cout << x << " is less than or equal to " << y << ".\n";
	if(x>=y)
		std::cout << x << " is greater than or equal to " << y << ".\n";

	return 0;
}
