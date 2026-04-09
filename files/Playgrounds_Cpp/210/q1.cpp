#include <iostream>
#include <vector>

int main()
{
	std::vector arr{ 4,6,7,3,8,2,1,9 };
	std::size_t length { arr.size() };

	for(int index{0}; index < length; ++index)
		std::cout << "Next Element: " << arr[index] << '\n';
	
	return 0;
}
