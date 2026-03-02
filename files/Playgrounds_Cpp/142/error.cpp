// ambiguous call to overloaded function

#include <iostream>

void foo(int)
{
}

void foo(double)
{
}

int main()
{
	foo(5L);
	return 0;
}
