#include <iostream>
bool isPrime(int x)
{
	if (x == 2)
		return true;
	else if (x == 3)
		return true;
	else if (x == 5)
		return true;
	else if (x == 7)
		return true;

	return false;
}


int main()
{
	int x{};
	std::cout << "Enter a Number 0 through 9: ";
	std::cin >> x;

	if ( isPrime(x) )
		std::cout << "The Digit is Prime\n";
	else
		std::cout << "The Digit is not Prime\n";

	return 0;
}
