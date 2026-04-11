#include <iostream>
#include <vector>

template <typename T>

T calculateAverage(const std::vector<T>& arr)
{
	int length{ static_cast<int>(arr.size()) };

	T average{0};
	for (int index{0}; index < length; ++index)
	{
		average += arr[static_cast<std::size_t>(index)];
	}

	average /= length;

	return average;
}


int main()
{
	std::vector testScore1 { 84, 92, 76, 81, 56 };
	std::cout << "The class 1 average is: " << calculateAverage(testScore1) << '\n';

	return 0;
}
