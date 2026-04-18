#include <array>
#include <iostream>

int main()
{
	std::array<char, 5> value {'h','e','l','l','o'};

	std::cout << std::size(value) << '\n';
	std::cout << value[1];
	std::cout << value.at(1);
	std::cout << std::get<1>(value);

	return 0;

}
