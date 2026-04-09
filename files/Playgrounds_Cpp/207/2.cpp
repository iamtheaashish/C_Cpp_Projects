#include <iostream>
#include <vector>

template <typename T>
void passByRef(const std::vector<T>& arr)
{
	std::cout << arr[0] << '\n';
}

int main()
{
	std::vector primes{2,3,5,7,11};
	passByRef(primes);

	std::vector dbl{ 1.1, 2.2, 3.3 };
	passByRef(dbl);

	return 0;
}
