//Write a program that asks for the name and age of two people,
  //    then prints which person is older.

// Here is the sample output from one run of the program:
//
/*
Enter the name of person #1: John Bacon
Enter the age of John Bacon: 37
Enter the name of person #2: David Jenkins
Enter the age of David Jenkins: 44
David Jenkins (age 44) is older than John Bacon (age 37).
*/


#include <iostream>
#include <string>

int main()
{
	// USER INPUT START
	std::cout << "Enter the name of person #1: ";
	std::string name1{};
	std::getline(std::cin >> std::ws, name1);

	std::cout << "Enter the age of " << name1 << ": ";
	unsigned int age1{};
	std::cin >> age1;


	std::cout << "Enter the name of person #2: ";
	std::string name2{};
	std::getline(std::cin >> std::ws, name2);

	std::cout << "Enter the age of " << name2 << ": ";
	unsigned int age2{};
	std::cin >> age2;
	//USER INPUT END
	
	if (age1 > age2)
		std::cout << name1 << " (age " << age1 << 
			") is older than " << name2 << " (age " << age2 << ").\n";
	else if (age1 == age2)
		std::cout << name1 << " (age " << age1 <<
			") and " << name2 << " (age " << age2 << ") are of same age.\n";
	else if (age1 < age2)
		std::cout << name1 << " (age " << age1 <<
			") is smaller than " << name2 << " (age " << age2 << ").\n";

	return 0;
}
