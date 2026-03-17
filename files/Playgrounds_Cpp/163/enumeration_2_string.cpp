#include <string_view>
#include <iostream>

enum Color
{red=1,blue,black,orange};

constexpr std::string_view getColorName(Color color) // first "Color" is compound enum type
{
	switch (color)
	{
		case red: return "red";
		case blue: return "blue";
		case black: return "black";
		case orange: return "orange";
		default: return "merko_nhi_pta_dalle...";
	}
}

int main()
{
	constexpr Color shirt{ };
	
	std::cout << "Your shirt is " << getColorName(shirt) << '\n';
	
	return 0;
}
