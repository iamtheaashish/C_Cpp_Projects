#include <iostream>

struct Employee
{
	int id {};
	int age {};
	double wage {};
};

int main()
{
	Employee frank = { 1, 32, 60000.0};

	Employee joe { 2, 28, 45000.0 };

	return 0;
}
