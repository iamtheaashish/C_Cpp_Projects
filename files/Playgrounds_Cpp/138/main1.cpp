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

int main()
{
	std::cout << isLowerVowel('a') << '\n';
	std::cout << isLowerVowel('q') << '\n';
	return 0;
}
