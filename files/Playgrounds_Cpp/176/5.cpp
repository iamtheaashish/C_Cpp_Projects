#include <iostream>
#include <string>

class Person
{
	public:
		std::string name{};
		int age{};

		void kisses(const Person& person)
		{
			std::cout << name << " kisses " << person.name << '\n';
		}
};

int main()
{
	Person joe{ "Joe", 29 };
	Person kate{ "Kate", 27 };

	joe.kisses(kate);

	return 0;
}
