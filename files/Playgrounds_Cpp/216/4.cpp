#include <iostream>
#include <vector>

void printCapLen(const std::vector<int>& v)
{
	std::cout << "Capacity: " << v.capacity() << " Length:" << v.size() << '\n';
}

int main()
{
	std::vector v{0,1,2,3};

	printCapLen(v);

	for (auto i : v)
		std::cout << &i << ' ';
	std::cout << '\n';

	v.resize(5);

	printCapLen(v);

	for (auto i : v)
		std::cout << &i << ' ';
	std::cout << '\n';

	return 0;
}
