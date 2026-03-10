#include <iostream>

int main()
{
	int* ptr { nullptr };

	int value { 5 };
	int* ptr2 { &value };
	ptr2 = nullptr;

	std::cout << ptr2 << ' ' << *ptr2 << '\n';
	return 0;
}
