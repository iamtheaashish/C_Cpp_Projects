#include <iostream>
#include <vector>
#include <string>
#include <string_view>

template <typename T>
bool isValueInArray (std::vector<T> names, std::string_view uname)
{
	bool found{ false };

	for (const auto& name : names)
	{
		if(name == uname)
		{
			found = true;
			break;
		}
	}	

	return found;
}


int main()
{
	std::vector<std::string> names {"Alex", "Betty", "Caroline", "Dave", "Emily", "Fred", "Greg", "Holly"};

	std::cout << "Enter a name: ";
	std::string uname{};
	std::cin >> uname;

	if (isValueInArray(names,uname))
		std::cout << uname << " was found.\n";
	else
		std::cout << uname << " wasn't found.\n";

	return 0;
}
