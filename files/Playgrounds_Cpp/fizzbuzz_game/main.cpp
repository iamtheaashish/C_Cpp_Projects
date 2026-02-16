#include <iostream>

void fizzbuzz(int value)
{
	for(int ii{1}; ii <= value; ++ii)
	{
		if(ii%3 == 0 && ii%5 != 0)
			std::cout << "fizz" << '\n';
		else if (ii%5 == 0 && ii%3 != 0)
			std::cout << "buzz" << '\n';
		else if (ii%3 == 0 && ii%5 == 0)
			std::cout << "fizzbuzz" << '\n';
		else
			std::cout << ii << '\n';
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
