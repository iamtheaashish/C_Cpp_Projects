#include <iostream>
#include <vector>

int main()
{
	std::cout << "Enter 3 integers: ";
	std::vector<int> integral (3);
	std::cin >> integral[0] >> integral[1] >> integral[2];

	std::cout << "The sum is: " << integral[0] + integral[1] + integral[2] << '\n';
	std::cout << "The product is: " << integral[0] * integral[1] * integral[2] << '\n';

	return 0;
}
