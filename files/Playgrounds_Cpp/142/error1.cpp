#include <iostream>

void foo(unsigned int)
{}

void foo(float)
{}

int main()
{
	foo(0);
	foo(3.14159);

	return 0;
}
