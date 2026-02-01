#include <iostream>

namespace Foo
{
	int doSomething(int x, int y)
	{
		return x + y;
	}
}

namespace Goo
{
	int doSomething(int x, int y)
	{
		return x - y;
	}
}

int main()
{
	std::cout << Foo::doSomething(4, 3) << '\n';
	return 0;
}
