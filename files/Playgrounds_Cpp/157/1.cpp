#include <iostream>

void printIDNumber(const int* id=nullptr)
{
	if (id)
		std::cout << "Your ID Number is " << *id << ".\n";
	else
		std::cout << "Your ID Number is not known.\n";
}

int main()
{
	printIDNumber();

	int userid { 34 };
	printIDNumber( &userid );

	return 0;
}
