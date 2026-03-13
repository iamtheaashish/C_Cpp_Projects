#include <iostream>

int main()
{
	std::cout << "Enter any positive number: ";
	unsigned int a{};
	std::cin >> a;
	
	float factorial{1};

	for(int i;i<=a;i++)
	{
		factorial = factorial * i;
	}

	std::cout << "Factorial is: " << factorial << '\n';
	
	return 0;
}
