#include <iostream>

void foo(int x)
{
	std::cout << x << "\n";
}

void foo(double x)
{
	std::cout << x << "\n";
}


int main()
{
	foo('a');
	foo(true);
	foo(4.5f);

	return 0;
}
