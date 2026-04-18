#include <array>

int main()
{
	std::array<int, 7> a {};

	constexpr int len { 8 };
	std::array<int, len> b {};

	enum Colors
	{
		red,
		green,
		blue,
		max_colors
	};

	std::array<int, max_colors> c {};

#define DAYS_PER_WEEK 7
	std::array<int, DAYS_PER_WEEK> d {};

	return 0;
}
