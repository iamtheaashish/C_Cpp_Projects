#include <iostream>

int main()
{
	for(int count { 0 }; count <= 48; ++count)
	{
		if ((count % 4) != 0)
		{
			std::cout << count << '\n';
		}
	}

	return 0;
}
