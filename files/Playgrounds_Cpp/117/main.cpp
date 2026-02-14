/* write a program that prints out the letters 'A' through 'Z' along
 * with their ASCII codes, Use a loop variable of type char. */

#include <iostream>

int main()
{
	char myChar{ 'a' };
	while (myChar <= 'z')
	{
		std::cout << myChar << ' ' << static_cast<int>(myChar) << '\n';
		++myChar;
	}
	return 0;
}
