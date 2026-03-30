#include <iostream>

class A
{
	public:
		int val;

		A(int x)
		{
			val = x;
		}

		A(A& a)
		{
			val = a.val;
		}
};

int main()
{
	A a1(20);

	A a2(a1);

	std::cout << a2.val;
	return 0;
}
