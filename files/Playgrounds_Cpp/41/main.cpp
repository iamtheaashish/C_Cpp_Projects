#include <iostream>

int main()
{
	bool b{};
	std::cout << "Enter a boolean value: ";
	
	std::cin >> std::boolalpha;
	std::cin >> b;

	std::cout << std::boolalpha;
	std::cout << "You entered: " << b << '\n';
	return 0;
}
