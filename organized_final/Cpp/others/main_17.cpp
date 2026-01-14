#include <iostream>
using namespace std;
int takeInp(int,int,int,int);
int doMath(int,int,int,int);

int doMath(int first, int second, int third, int fourth)
{
	return first + second * third / fourth;
}

int takeInp()
{
	cout << "Enter first integer: ";
	int first{};
	cin >> first;

	cout << "Enter second integer: ";
	int second{};
	cin >> second;

	cout << "Enter third integer: ";
	int third{};
	cin >> third;

	cout << "Enter fourth integer: ";
	int fourth;
	cin >> fourth;

	cout << doMath(first, second, third, fourth) << '\n';

	return 0;
}


int main()
{
	takeInp();
	return 0;
}
