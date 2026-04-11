#include <iostream>
#include <vector>

int main()
{
	std::vector arr { 1, 2, 3, 4, 5 };

	for (std::vector<int>::size_type index { 0 }; index < arr.size(); ++index)
		std::cout << arr[index] << ' ';

	return 0;
}
