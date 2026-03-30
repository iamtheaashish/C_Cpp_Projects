#include <iostream>

class Foo
{
	private:
		int m_x {};
		int m_y {};

	public:
		Foo() = default;

		Foo(int x, int y)
		: m_x {x}, m_y {y}
		{
std::cout << "Foo(" << m_x << ", " << m_y << ") constructed\n";
		}
};

int main()
{
	Foo foo{};

	Foo foo1{5,6,7};
	return 0;
}
