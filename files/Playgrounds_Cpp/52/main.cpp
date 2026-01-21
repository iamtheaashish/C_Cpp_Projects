#include <iostream>

int main()
{
	std::cout << "Input a keyboard character: ";

	char ch{};
	std::cin.get(ch);
	std::cout << "You entered: " << ch << '\n';

	std::cin.get(ch);
	std::cout << "You entered: " << ch << '\n';


	return 0;
}
