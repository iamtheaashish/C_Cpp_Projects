#include <iostream>

template <typename T>
void print(T val, int times=1)
{
	while (times--)
		std::cout << val;
}

int main()
{
	print(5);
	print('a', 3);

	return 0;
}
