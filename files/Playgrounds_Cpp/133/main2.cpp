#include <iostream>

void cleanup()
{
	std::cout << "cleanup!\n";
}

int main()
{
	std::atexit(cleanup);
	std::cout << 1 << '\n';
	std::exit(0);
	std::cout << 2 << '\n'; // this statement never executes.
	return 0;
}
