#include <iostream>

int main()
{
	int count{ 0 };
	while (true)
	{
		std::cout << "Enter 'e' to exit this loop or " <<
			"any other character to continue: ";
		char ch{};
		std::cin >> ch;

		if(ch == 'e')
			break;
		++count;
		std::cout << "We've iterated " << count << " times\n";
	}

	return 0;
}
