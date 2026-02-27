#include <iostream>

int main()
{
	double d{0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1};

	if (d == 1.0)
		std::cout << "equal\n";
	else
		std::cout << "not equal\n";
	return 0;
}
