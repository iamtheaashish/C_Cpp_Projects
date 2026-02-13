#include <iostream>

int main()
{
	unsigned int count { 10 };

	while (count >= 0)
	{
		if (count == 0)
		{
			std::cout << "Blastoff!";
		}
		else
		{
			std::cout << count << ' ';
		}
		--count;
	}

	std::cout << '\n';

	return 0;
}
