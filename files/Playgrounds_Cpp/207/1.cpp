#include <iostream>
#include <vector>

void passByRef(const std::vector<int>& arr)
{
	std::cout << arr[0] << '\n';
}

int main()
{
	std::vector primes { 2, 3, 5, 7, 11 };
	passByRef(primes);

	return 0;
}
