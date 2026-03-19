#include <iostream>

int main()
{
	enum class Color
	{red,blue,};

	enum class Fruit
	{banana,apple,};

	Color color {Color::red};
	Fruit fruit {Fruit::banana};

	if(color == fruit)
		std::cout << "Color and fruit are equal\n";
	else 
		std::cout << "Color and fruit are not equal\n";
	return 0;
}
