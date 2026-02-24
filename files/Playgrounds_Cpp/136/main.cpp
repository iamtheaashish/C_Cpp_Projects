#include <iostream>

namespace Constants
{
	constexpr double gravity { 9.8 };
}

double getHeight()
{
	std::cout << "Enter the height of the tower in meters: ";
	double towerHeight{};
	std::cin >> towerHeight;
	return towerHeight;
}

double calculateBallHeight(double towerHeight, int seconds)
{
	//Formula --> s = (u*t) + (a*t^2) / 2
	//here initial velocity (u)= 0, so (u*t)=0
	const double fallDistance { Constants::gravity * (seconds * seconds) / 2.0 };
	const double ballHeight { towerHeight - fallDistance };
	
	if (ballHeight < 0.0)
		return 0.0;

	return ballHeight;
}

void printBallHeight(double ballHeight, int seconds)
{
	if (ballHeight > 0.0)
		std::cout << "At " << seconds << " seconds, the ball is at height: "
			<< ballHeight << " meters\n";
	else
		std::cout << "At " << seconds << " seconds, the ball is on the ground.\n";
}

//This is a helper function to make it easier to calculate.

double calculateAndPrintBallHeight(double towerHeight, int seconds)
{

	const double ballHeight{ calculateBallHeight(towerHeight, seconds) };
	printBallHeight(ballHeight, seconds);
	return ballHeight;
}

int main()
{
	const double towerHeight{ getHeight() };

	int seconds { 0 };
	while (calculateAndPrintBallHeight(towerHeight, seconds) > 0.0)
	{
		++seconds;
	}

	return 0;
}
