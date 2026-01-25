// Introduction to string_view

#include <iostream>
#include <string_view>

void printSV(std::string_view str)
{
	std::cout << str << '\n';
}

int main()
{
	std::string_view s{"Hello World"};
	printSV(s);
	return 0;
}
