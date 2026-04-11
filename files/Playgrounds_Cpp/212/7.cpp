#include <iostream>
#include <ranges>
#include <string_view>
#include <vector>

int main()
{
	std::vector<std::string_view> words{ "Alex", "Bobby", "Chad", "Dave" };

	for (const auto& word : std::views::reverse(words))
		std::cout << word << ' ';

	std::cout << '\n';

	return 0;
}
