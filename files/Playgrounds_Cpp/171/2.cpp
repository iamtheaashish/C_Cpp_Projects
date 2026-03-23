// nested strucs

#include <iostream>

struct Company
{
	struct Employee
	{
		int id{};
		int age{};
		double wage{};
	};

	int numberOfEmployees{};
	Employee CEO{};
};

int main()
{
	Company myCompany{ 7 , {1, 32, 55000.0 }};

	std::cout << myCompany.CEO.wage << '\n';

	return 0;
}
