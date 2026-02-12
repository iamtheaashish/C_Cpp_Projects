#include <iostream>

void printDigitName(int x)
{
	switch(x)
	{
		case 1:
			std::cout << "One";
			break;
		case 2:
			std::cout << "Two";
			break;
		case 3:
			std::cout<< "Three";
			break;
		default:
			std::cout << "Unknown";
			break;
	}
	std::cout << " Ah-Ah-Ah!";
}

int main()
{
	printDigitName(3);
	std::cout << '\n';

	return 0;
}
