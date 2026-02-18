#include <iostream>

unsigned int LCG16()
{
	static unsigned int s_state{ 0 };

	s_state = 8253729 * s_state + 2396403;

	return s_state % 32768;
}

int main()
{
	int count{0};
	while(true)
	{
		
		std::cout << LCG16() << '\t';
		
		if ((count % 10) == 0)
			std::cout << '\n';

		++count;
	}

	return 0;
}
