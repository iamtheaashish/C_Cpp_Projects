#include <iostream>
using namespace std;

int getInp()
{
	cout << "Enter integer's value: ";
	int inp{ };
	cin >> inp;

	return inp;
}

void printyuf(int x)
{
	cout << "The double of " << x << " is " << x*2 << ".\n";
}

int main()
{
	int num { getInp() };

	printyuf( num );
	return 0;
}
