#include <cstdlib>
#include <iostream>

void cleanup()
{
	std::cout << "cleanup!\n";
}

int main()
{
	std::cout << 1 << '\n';
	cleanup();
	std::exit(0);
	std::cout << 2 << '\n'; // this statement never executes 
	return 0;
}
