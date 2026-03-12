#include <iostream>
#include <string>

void printByValue(std::string val)
{
	std::cout << val << ' ' << &val << '\n';
}

void printByReference(const std::string& ref)
{
	std::cout << ref << ' ' << &ref << '\n';
}

void printByAddress(const std::string* ptr)
{
	std::cout << *ptr << ' ' << ptr << '\n';
}

int main()
{
	std::string str{ "Hello, world!" };

	printByValue(str);
	printByReference(str);
	printByAddress(&str);

	return 0;
}
