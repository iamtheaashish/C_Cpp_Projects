#include <iostream>

void spam(int timesToPrint)
{
	for(int count{0}; count <= timesToPrint; ++count)
		std::cout << "Spam! ";
}

int main()
{
	std::cout << "Enter number: ";
	int x{};
	std::cin >> x;

	spam(x);
	return 0;
}
