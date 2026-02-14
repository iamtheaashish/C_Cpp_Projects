#include <iostream>

void printInner( int outer )
{
	int inner { outer };
	while ( inner >= 1 )
	{
		std::cout << inner-- << ' ';
	}
}

int main()
{
	int outer { 5 };
	while( outer >= 1 )
	{
		printInner( outer );
		std::cout << '\n';
		--outer;
	}
	return 0;
}
