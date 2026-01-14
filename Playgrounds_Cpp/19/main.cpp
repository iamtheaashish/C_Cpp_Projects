#include <iostream>
using namespace std;

int doubleNumber(int x)
{
	return x*2;
}

void grint(int x)
{
	cout << "Double of number is " << x << " .\n";
}



int main()
{
	cout << "Enter an integer value: ";
	int num{};
	cin >> num;

	grint(doubleNumber(num));
	
	return 0;
}
