#include <vector>
#include <iostream>

int main()
{
	std::vector<char> values{'h','e','l','l','o' };
	std::cout << "Length: " << std::size(values) << '\n';

	std::cout << "Value of element at index 1: " << values[1] << '\n';
	std::cout << "Value of element at index 1: " << values.at(1) << '\n';
	return 0;
}
