#include <iostream>
using namespace std;

int getValueFromUser()
{
	cout << "Enter an integer value: ";
	int input{};
	cin >> input;
	return input;
}

void printDouble(int x)
{
	cout << "The Double of integer " << x << " is " << x*2 << ".\n";
}

int main()
{
	printDouble(getValueFromUser());
	return 0;
}
