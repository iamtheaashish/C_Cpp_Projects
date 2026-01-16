/*
#include <iostream>

int getValue()
{
	std::cerr << "getValue() called\n";
	return 4;
}

int main()

{
	std::cerr << "main() called\n";
	std::cout << getValue << '\n';
	return 0;
}



Intentionally made a syntax error in line 12 to practice debuggin */


#include <iostream>
int getValue()
{
	std::cerr << "getValue() called\n";
	return 4;
}

int main()
{
	std::cerr << "main() called\n";
	std::cout << getValue() << '\n';
	return 0;
}
