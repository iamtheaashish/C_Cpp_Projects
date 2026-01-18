#include <iostream>

int main()
{
	unsigned int x{2};
	unsigned int y{3};

	std::cout << x-y << '\n';
	return 0;
}


/*Many developer houses like google, avoid use of unsigned values as it is more prone to OVERFLOW bugs*/
