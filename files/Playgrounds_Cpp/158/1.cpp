#include <iostream>
#include <string>

const std::string& getProgramName()
{
	static const std::string s_programName { "Calculator" };

	return s_programName;
}

int main()
{
	std::cout << "This program is names " << getProgramName();

	return 0;
}
