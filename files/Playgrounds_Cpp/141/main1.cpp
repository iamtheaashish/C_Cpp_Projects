#include <iostream>

int main()
{
	int n = static_cast<int>(static_cast<long>(3));
	std::cout << n << '\n';

	char c = static_cast<char>(static_cast<double>('c'));
	std::cout << c << '\n';

	return 0;
}
