#include <iostream>
#include <vector>

namespace Students
{
	enum Names
	{
		kenny,
		kyle,
		stan,
		butters,
		cartman,
		wendy,

		max_students
	};
}

int main()
{
	std::vector<int> testScores(Students::max_students);

	testScores[Students::stan] = 76;

	std::cout << "The class has " << Students::max_students << " students\n";

	return 0;
}
