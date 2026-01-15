#include <iostream>

//Ask the user to enter three values. The program should then print these values. 

int main(){
	std::cout << "Enter three numbers: \n";
	int x{},y{},z{};
	std::cin >> x >> y >> z;
	std::cout << "You entered " << x << ", " << y << ", " << "and " << z << ".\n";
	return 0;
}
