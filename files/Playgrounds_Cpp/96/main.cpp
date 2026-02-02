#include <iostream>

int g_mode;

void doSomething()
{	
	g_mode = 2;
}

int main()
{
	g_mode = 2;

	doSomething();

	if (g_mode == 1)
		std::cout << "No threat detected.\n";
	else
		std::cout << "Launching nuclear missiles...\n";

	return 0;
}
