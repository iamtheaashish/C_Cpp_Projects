#include <iostream>

class A
{
	public:
		A()
		{
			std::cout << "Constructor called" << std::endl;
		}
};

int main()
{
	A obj1;
	return 0;
}
