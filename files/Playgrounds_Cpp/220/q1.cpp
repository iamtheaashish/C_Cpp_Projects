#include <cassert>
#include <iostream>
#include <vector>

namespace Items
{
	enum Type
	{
		health_potion,
		torche,
		arrow,
		max_items
	};
}

int countTotalItems(const std::vector<int>& inventory)
{
	int sum{0};
	for (auto e: inventory)
		sum += e;
	return sum;
}

int main()
{
	std::vector inventory{1,5,10};

	assert(std::size(inventory) == Items::max_items);

	std::cout << "You have " << countTotalItems(inventory) << " total items\n";

	return 0;
}
