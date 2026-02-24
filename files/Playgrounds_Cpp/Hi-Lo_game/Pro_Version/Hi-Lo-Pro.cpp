#include <iostream>
#include "Random.h"



int main()
{
playAgain:
	// Pro Version of the game.
	// Min, Max and number of Guess should be configurable
	std::cout << "Enter Minimum Value: ";
	int min{};
	std::cin >> min;
	
	std::cout << "Enter Maximum Value: ";
	int max{};
	std::cin >> max;

	std::cout << "Enter No. of Guesses: ";
	int guess{};
	std::cin >> guess;

	std::cout << "Let's play a game."
		<< " I'm thinking of a number between " << min << " and " << max << "."
		<< " You have " << guess << " tries to guess.\n";


	// Randomness from Random.h
	int number {Random::get(min, max)};


	for(int count{1}; count <= guess; ++count)
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

		if ( count == guess)
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
