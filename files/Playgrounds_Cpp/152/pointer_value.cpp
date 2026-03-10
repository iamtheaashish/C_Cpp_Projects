// how we can also use a pointer to change the value being pointed at
#include <iostream>

int main()
{
	int x{ 5 };
	int* ptr{ &x };

	std::cout << "The Variable: " << x << '\n';
	std::cout << "The address which pointer is pointing at: " << ptr << '\n';
	std::cout << "Dereferencing the pointer: " << *ptr << '\n';

	*ptr = 6;	
	std::cout << "The Variable: " << x << '\n';
	std::cout << "The address which pointer is pointing at: " << ptr << '\n';
	std::cout << "Dereferencing the pointer: " << *ptr << '\n';

	return 0;
}
