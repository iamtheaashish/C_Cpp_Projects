#include <array>
#include <iostream>

int main()
{
	constexpr std::array arr { 9,7,5,3,1 };
	std::cout << "Length: " << std::size(arr) << '\n';
	return 0;
}
