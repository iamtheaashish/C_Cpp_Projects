#include <iostream>

struct Rectangle
{
	double length{};
	double width{};
};

int main()
{
	const Rectangle unit { 1.0, 1.0 };
	const Rectangle zero { };

	return 0;
}
