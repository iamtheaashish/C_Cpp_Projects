#include <iostream>

struct Date
{
	int day{};
	int month{};
	int year{};
};

void printDate(const Date& date)
{
	std::cout << date.day << '/' << date.month << '/' << date.year << '\n';
}

int main()
{
	Date date{24,03,2026};

	printDate(date);

	return 0;
}
