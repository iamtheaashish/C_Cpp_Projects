#include <iostream>

class A
{
	public:
		int val;
		A(int x)
		{
			val = x;
		}
};

int main()
{
	A a(10);
	std::cout << a.val;

	return 0;
}
