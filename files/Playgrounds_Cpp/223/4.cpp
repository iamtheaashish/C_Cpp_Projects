#include <array>
#include <iostream>
#include <string_view>

struct Item
{
	std::string_view name {};
	int gold{};
};

template <std::size_t N>
void printStore(const std::array<Item, N>& arr)
{
	for (const auto& item: arr)
	{
		std::cout << "A " << item.name << " costs " << item.gold << " gold.\n";
	}
}

int main()
{
	constexpr std::array store {
		Item { "sword", 5 },
		Item { "dagger", 3 },
		Item { "club", 2 },
		Item { "spear", 7 } };
	printStore(store);

	return 0;
}
