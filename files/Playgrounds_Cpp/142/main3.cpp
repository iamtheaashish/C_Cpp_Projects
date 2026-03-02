#include <iostream>

void foo(int)
{
}

void foo(double)
{
}

int main()
{
	foo(0);
	foo(3.4);

	return 0;
}
