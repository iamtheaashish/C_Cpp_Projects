#include <iostream>
#include <vector>

void printLength(const std::vector<int>& v)
{
	std::cout << "The length is: " << v.size() << '\n';
}

int main()
{
	std::vector v{0,1,2,3,4};
	printLength(v);

	v.resize(3);
	printLength(v);

	for (int i : v)
		std::cout << i << ' ';

	std::cout << '\n';

	return 0;
}
