#include <iostream>

int main()
{
	for (unsigned int count{ 5 }; count >= 0; --count)
	{
		if (count == 0)
			std::cout << "Blastoff! ";
		else
			std::cout << count << ' ';
	}

	std::cout << '\n';
	return 0;
}
