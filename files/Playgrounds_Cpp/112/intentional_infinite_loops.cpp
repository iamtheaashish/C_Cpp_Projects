#include <iostream>

int main()
{
	while (true)
	{
		std::cout << "Loop Again (y/n)? ";
		char c{};
		std::cin >> c;

		if (c == 'n')
			return 0;
	}
	return 0;
}
