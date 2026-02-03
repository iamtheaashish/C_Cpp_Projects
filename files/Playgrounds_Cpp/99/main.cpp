#include <iostream>

int getInt()
{
	static bool isFirstCall{ true };
	
	if (isFirstCall)
	{
		std::cout << "Enter an integer: ";
		isFirstCall = false;
	}
	else
	{
		std::cout << "Enter another integer: ";
	}

	int i{};
	std::cin >> i;
	return i;
}

int main()
{
	int a { getInt() };
	int b { getInt() };

	std::cout << a << " + " << b << " = " << (a + b) << '\n';

	return 0;
}
