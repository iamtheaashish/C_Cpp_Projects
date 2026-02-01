#include <iostream>

void print()
{
	std::cout << " there\n";
}

namespace Foo
{
	void print()
	{
		std::cout << "Hello";
	}

}

int main()
{
	Foo::print();
	::print();

	return 0;
}
