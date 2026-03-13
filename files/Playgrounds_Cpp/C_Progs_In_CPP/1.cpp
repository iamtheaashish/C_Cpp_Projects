/*
 Write a program to calculate an Air ticket fare after discount, 
 give the following conditions:
 1. If passenger is below 14 years, then 50% discount on fare.
 2. If passenger is above 50 years, then 20% discount on fare.
 3. If passenger is above 14 and below 50, then 10% discount on fare.
 
 */

#include <iostream>

int main()
{
	std::cout << "Enter age of the passenger: ";
	unsigned int age{};
	std::cin >> age;

	std::cout << "Enter air ticket fare in INR: ";
	float fare{};
	std::cin >> fare;

	if(age < 14)
		std::cout << "Your fare price is: " << fare-(0.5*fare) << '\n';
	if(age > 50)
		std::cout << "Your fare price is: " << fare-(0.2*fare) << '\n';
	if(age > 14 && age < 50)
		std::cout << "Your fare price is: " << fare-(0.1*fare) << '\n';


	return 0;
}
