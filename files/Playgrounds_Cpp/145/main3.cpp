#include <iostream>

template <typename T>
void print(T x)
{
	std::cout << x;
}

void print(bool x)
{
	std::cout << std::boolalpha << x;
}

int main()
{
	
	print<bool>(true);
	std::cout << '\n';

	print<>(true);
	std::cout << '\n';

	print(true);
	std::cout << '\n';

	return 0;
}
