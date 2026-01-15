#include <iostream>
using namespace std;

int getInput()
{
	cout << "Enter the number you want to double: ";
	int input{ };
	cin >> input;
	return input;
}

int main()
{
	int num1{ getInput() };

	cout << "The double of the number " << num1 << " is " << num1*2 << ".\n";
	return 0;
}
