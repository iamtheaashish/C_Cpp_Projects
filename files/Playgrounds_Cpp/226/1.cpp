#include <iostream>
#include <array>

int main()
{
	std::array<std::array<int, 4>, 3> arr {{
	{1,2,3,4},
	{5,6,7,8},
	{9,10,11,12}	
	}};

	std::cout << arr[1][2];
}
