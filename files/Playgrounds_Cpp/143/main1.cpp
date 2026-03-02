#include <iostream>

void printInt(int x)
{
	std::cout << x << '\n';
}

int main()
{
	printInt(5);
	printInt('a');
	printInt(true);

	return 0;
}
