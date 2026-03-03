#include <iostream>

auto max(auto x, auto y)
{
	return (x<y) ? y : x;
}

int main()
{
	std::cout << max(2, 3.5) << '\n';
	return 0;
}
