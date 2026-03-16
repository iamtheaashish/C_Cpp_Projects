#include <iostream>

enum Color
{ red, green, blue, };

int main()
{
	Color shirt{ blue };

	if (shirt == blue)
		std::cout << "Your shirt is blue!";
	else
		std::cout << "You shirt isn't blue!";
	return 0;
}
