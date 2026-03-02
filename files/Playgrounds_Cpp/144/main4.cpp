#include <iostream>
#include <string_view>

void print(std::string_view s)
{
	std::cout << s << '\n';
	std::cout << "with string view\n";
}

void print(char c = ' ')
{
	std::cout << c << '\n';
	std::cout << "with char\n";
}

int main()
{
	print("Hello, World");
	print('a');
	print();
	return 0;
}
