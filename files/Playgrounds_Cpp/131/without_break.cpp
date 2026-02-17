#include <iostream>

int main()
{	
	int count {0};
	bool keepLooping{ true };
	while (keepLooping)
	{
		std::cout << "Enter 'e' to exit this loop or " <<
			"any other character to continue: ";
		char ch{};
		std::cin >> ch;

		if (ch == 'e')
			keepLooping = false;
		else
		{
			++count;
			std::cout << "We've iterated " << count << " times\n";
		}
	}

	return 0;
}
