// member function

#include <iostream>

class Date
{
	public:
	int year{};
	int month{};
	int day{};

	void print()
	{
		std::cout << year << '/' << month << '/' << day << '\n';
	}
};

void print(const Date& today)
{
	std::cout << today.year << '/' << today.month << '/' << today.day << '\n';
}

int main()
{
	Date today { 2020, 10, 14 };

	today.day = 16;

	today.print();
	print(today);
	return 0;
}
