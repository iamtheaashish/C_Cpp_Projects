#include <iostream>

int main()
{
	for(int count{ 0 }; count <= 48; ++count)
	{
		if((count % 4) == 0)
		{	std::cout << "Divisible by 4.\n";
			continue;
		}
		std::cout << count << '\n';
	}

	return 0;
}
