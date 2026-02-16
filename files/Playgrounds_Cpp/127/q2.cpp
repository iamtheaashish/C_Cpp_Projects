#include <iostream>

int sumTo(int value)
{
	int total{0};
	for(int i{1};i <= value; ++i)
		total += i;
	

	return total;
}

int main()
{
	std::cout << "Enter the value: ";
	int value{};
	std::cin >> value;

	std::cout << "Sum of all the numbers from 1 to value is: " << sumTo(value) << '\n';
	return 0;
}
