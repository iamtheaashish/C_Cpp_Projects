#include <iostream>

extern int g_x;

extern const int g_y;

int main()
{
	std::cout << g_x << ' ' << g_y << '\n';

	return 0;
}
