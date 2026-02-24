#include <iostream>
#include "Random.h"

int main()
{
	
playAgain:
	std::cout << "Let's play a game."
		<< " I'm thinking of a number between 1 and 100."
		<< " You have 7 tries to guess.\n";

	int number {Random::get(1, 100)};
	
	for(int count{1}; count <= 7; ++count)
	{
		std::cout << "Guess " << "#" << count << ": ";
		int inp{};
		std::cin >> inp;

		if ( inp > number )
		{
			std::cout << "Your guess is too high.\n";	
		}

		if ( inp < number )
		{
			std::cout << "Your guess is too low.\n";
		}
		
		if ( inp == number )
		{
			std::cout << "Correct! You Win!\n";
			break;
		}	

		if ( count == 7)
			std::cout << "Sorry, you lost. The correct number was "
				<< number << ".\n";
	}
	
	
tryAgain:
	std::cout << "Would you like to play again (y/n)? ";
	char ch{};
	std::cin >> ch;

	if (ch=='y')
		goto playAgain;
	else if (ch=='n')
		std::cout << "Thank you for playing.\n";
	else
		goto tryAgain;


		
	return 0;
}
