#include <iostream>

void printInt(int x)
{
	std::cout << x << '\n';
}

void printInt(char) = delete;
void printInt(bool) = delete;

int main()
{
	printInt(97);

	printInt('a');
	printInt(true);

	printInt(5.0);

	return 0;
}
