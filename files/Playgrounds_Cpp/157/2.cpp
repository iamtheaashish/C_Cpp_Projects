#include <iostream>
// function overloading is better alternative to achieve the same result.
void printIDNumber()
{
	std::cout << "Your ID is not known\n";
}

void printIDNumber(int id)
{
	std::cout << "Your ID is " << id << '\n';
}

int main()
{
	printIDNumber();

	int userid { 34 };
	printIDNumber(userid);

	printIDNumber( 62 );

	return 0;
}
