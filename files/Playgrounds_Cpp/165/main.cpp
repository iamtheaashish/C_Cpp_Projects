#include <iostream>

int main()
{
	enum Color
	{
		red,
		blue,
	};

	enum Fruit
	{
		banana,
		apple,
	};

	Color color { red };
	Fruit fruit { banana };

	if (color == fruit)
		std::cout << "Color and Fruit are equal\n";
	else
		std::cout << "Color and Fruit are not equal\n";
	return 0;
}
