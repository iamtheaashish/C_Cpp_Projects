#include <iostream>
#include <string>

void printByValue(std::string val)
{
	std::cout << val << '\n';
}

void printByReference(const std::string& ref)
{
	std::cout << ref << '\n';
}

int main()
{
	std::string str{ "Hello, world!" };

	printByValue(str);
	printByReference(str);

	return 0;
}
