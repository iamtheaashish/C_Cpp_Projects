#include <iostream>

void fizzbuzz(int value)
{
	for(int ii{1}; ii <= value; ++ii)
	{
		bool printed{ false };
		if (ii % 3 == 0)
		{
			std::cout << "fizz";
			printed = true;
		}
		if (ii % 5 == 0)
		{
			std::cout << "buzz";
			printed = true;
		}
		if (ii % 7 == 0)
		{
			std::cout << "pop";
			printed = true;
		}
		if (!printed)
			std::cout << ii;
		std::cout << '\n';
	}
}


int main()
{
	std::cout << "Enter number up to which you want the FizzBuzz results: ";
	int value{};
	std::cin >> value;

	fizzbuzz(value);
	return 0;
}
