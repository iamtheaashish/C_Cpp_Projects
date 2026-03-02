#include <iostream>

void foo(const int)
{
}

void foo(const double&)
{
}


int main()
{
	int x { 1 };
	foo(x);

	double d { 2.3 };
	foo(d);

	return 0;
}
