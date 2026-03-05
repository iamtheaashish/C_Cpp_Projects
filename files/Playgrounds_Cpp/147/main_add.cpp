#include <iostream>
#include "add.h" // import function template definition

int main()
{
	std::cout << addOne(1) << '\n';
	std::cout << addOne(2.3) << '\n';
	return 0;
}
