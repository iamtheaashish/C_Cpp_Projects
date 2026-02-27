#include <iostream>

bool isLowerVowel(char c)
{
	switch (c)
	{
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
			return true;
		default:
			return false;
	}
}

void testVowel()
{
	std::cout << isLowerVowel('a') << '\n';
	std::cout << isLowerVowel('q') << '\n';
}

int main()
{
	return 0;
}
