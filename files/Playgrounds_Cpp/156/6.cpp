#include <iostream>

void print(int* ptr)
{
	if(ptr)
	std::cout << *ptr << '\n';
}

int main()
{
	int x { 5 };
	print(&x);

	int* myPtr {};
	print(myPtr);

	return 0;
}
