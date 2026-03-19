#include <iostream>

int main()
{
	enum class Color
	{red=1,blue=1,};

	enum class Fruit
	{banana,apple,};

	Color color {Color::red};
	Color color2 {Color::blue};
	Fruit fruit {Fruit::banana};

	if(color == color2)
		std::cout << "Color and fruit are equal\n";
	else 
		std::cout << "Color and fruit are not equal\n";
	return 0;
}
