#include <iostream>
#include <chrono>
#include <thread>

int main()
{
	using namespace std::this_thread;
	using namespace std::chrono_literals;

	constexpr int numRows{ 10 };
	constexpr int numCols{ 10 };

	int product[numRows][numCols]{};

	for (std::size_t row{1}; row < numRows; ++row)
	{
		sleep_for(100ms);
		// this_thread::sleep_for(chrono::seconds(2));
		for (std::size_t col{ 1 }; col < numCols; ++col)
		{
		//	this_thread::sleep_for(chrono::seconds(2));
			sleep_for(100ms);
			product[row][col] = static_cast<int>(row * col);
		}
	}

	for (std::size_t row{1}; row < numRows; ++row)
	{
	//	this_thread::sleep_for(chrono::seconds(2));
		sleep_for(100ms);
		for (std::size_t col{1}; col < numCols; ++col)
		{
	//		this_thread::sleep_for(chrono::seconds(2));
			sleep_for(100ms);
			std::cout << product[row][col] << '\t';
		}

		std::cout << '\n';
	}

	return 0;
}
