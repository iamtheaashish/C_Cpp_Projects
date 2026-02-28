#include <iostream>

int main()
{
	while (true)
	{
		std::cout << "Enter one of the following: +, -, *, or /: ";
		char operation{};
		std::cin >> operation;

		switch (operation)
		{
			case '+':
			case '-':
			case '*':
			case '/':
				return operation;
			default:
				std::cout << "Oops, that input is invalid. Please try again.\n";
		}
	}
	return 0;
}
