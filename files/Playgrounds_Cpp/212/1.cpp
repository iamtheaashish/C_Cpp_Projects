#include <iostream>
#include <vector>

int main()
{

	std::vector fibon { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };

	for (int num : fibon)
		std::cout << num << ' ';
	std::cout << '\n';

	return 0;
}
