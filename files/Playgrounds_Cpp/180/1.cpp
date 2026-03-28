#include <iostream>

class Date
{
	private:
		int m_year{2020};
		int m_month{ 10 };
		int m_day{ 14 };
	
	public:
		void print()
		{
			std::cout << m_year << '/' << m_month << '/' << m_day << '\n';
		}

		int getYear() const { return m_year; } // getter
		void setYear(int year) { m_year = year; } // setter

		int getMonth() const { return m_month; } // getter
		void setMonth(int month) { m_month = month; } // setter

		int getDay() const { return m_day; } // getter 
		void setDay(int day) { m_day = day; } // setter
};

int main()
{
	Date d{};
	d.setYear(2026);
	d.setMonth(8);
	d.setDay(3);
	std::cout << "The year is: " << d.getYear() << '\n';
	std::cout << "The month is: " << d.getMonth() << '\n';
	std::cout << "The day is: " << d.getDay() << '\n';

	d.print();


	return 0;
}
