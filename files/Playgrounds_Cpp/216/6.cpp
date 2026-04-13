#include <iostream>
#include <vector>

void printCapLen(const std::vector<int>& v)
{
	std::cout << "Capacity: " << v.capacity() << " Length: " << v.size() << '\n';
}

int main()
{
	std::vector<int> v(1000); // zero initialized and given it the capapcity to hold 1000 elements
	printCapLen(v);

	v.resize(0);
	printCapLen(v);

	v.shrink_to_fit();
	printCapLen(v);

	return 0;
}
