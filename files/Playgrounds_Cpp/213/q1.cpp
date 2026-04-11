#include <iostream>
#include <vector>
#include <string>
#include <string_view>


int main()
{
	std::vector<std::string> names {"Alex", "Betty", "Caroline", "Dave", "Emily", "Fred", "Greg", "Holly"};

	std::cout << "Enter a name: ";
	std::string uname{};
	std::cin >> uname;

	bool found{ false };

	for (const auto& name : names)
	{
		if(name == uname)
		{
			found = true;
			break;
		}
	}

	if (found)
		std::cout << uname << " was found.\n";
	else
		std::cout << uname << " wasn't found.\n";

	return 0;
}
