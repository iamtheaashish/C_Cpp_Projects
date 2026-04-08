#include <vector>
#include <iostream>

int main()
{
	std::vector prime{ 2,3,5,7,11 };
	int length { static_cast<int>(std::ssize(prime)) };

	std::cout << "Length: " << length << '\n';

	return 0;
}
