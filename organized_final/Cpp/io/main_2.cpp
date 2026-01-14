#include <iostream>

int main()
{	
	std::cout << "Enter an Integer: ";

	int num{ }; // Define variable x
	std::cin >> num; // input
		     

	std::cout << "Double " << num << " is: " << num * 2 <<'\n'; //output
	std::cout << "Triple " << num << " is: " << num * 3 <<'\n'; //output
	return 0;
}
