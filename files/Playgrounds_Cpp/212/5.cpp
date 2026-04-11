#include <iostream>
#include <string>
#include <vector>

int main()
{
	std::vector<std::string> words { "peter", "likes", "frozen", "yogurt" };

	for (const auto& word: words)
		std::cout << word << ' ';
	std::cout << '\n';

	return 0;
}
