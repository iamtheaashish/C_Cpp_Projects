#include <iostream>

void foo(int x = 0)
{}

void foo(double d = 0.0)
{}

int main()
{
	foo();
	return 0;
}
