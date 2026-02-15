#include <iostream>

int main()
{
	int i{0};
	for (; i <= 55 ;)
	{
		std::cout << i << ' ';
		i += 11;
	}
	std::cout << '\n';
	return 0;
}
