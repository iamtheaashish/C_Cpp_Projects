#include <iostream>

struct Employee
{
	int id{};
	int age{};
	double wage{};
};

int main()
{
	Employee joe{};
	joe.age = 32;

	std::cout << joe.age << '\n';

	return 0;
}
