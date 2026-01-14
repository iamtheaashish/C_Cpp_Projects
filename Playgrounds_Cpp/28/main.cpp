#include <iostream>

void writeAnswer(int a)
{
	std::cout << "Addition of the two integers is " << a << ".\n";	
}


int readNumber()
{
	std::cout << "Enter an Integer: ";
	int q{};
	std::cin >> q;
	
	return q;
}

int main()
{
	int x{readNumber()};
	int y{readNumber()};
				
	writeAnswer(x+y);
	return 0;
}
