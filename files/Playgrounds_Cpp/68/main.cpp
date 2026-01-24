/*Write a program that asks the user to enter their full name and their age. As output, tell the user the sum of their age and the number of characters in their name (use the std::string::length() member function to get the length of the string). For simplicity, count any spaces in the name as a character*/

#include <iostream>
#include <string>

std::string getName()
{
	std::cout << "Enter your full name: ";
	std::string name{};
	std::getline(std::cin >> std::ws, name);

	return name;
}

int getAge()
{
	std::cout << "Enter your age: ";
	int age{};
	std::cin >> age;

	return age;	
}

void printResult(const std::string& name, int age)
{
	std::cout << "\nYour name: " << name << '\n' 
		<< "Your age: " << age << '\n'
		<< "Your age + name is equal to: " << age + name.length();
}

int main()
{
	std::string userName { getName() };
	int userAge { getAge() };

	printResult(userName, userAge);
	return 0;
}
