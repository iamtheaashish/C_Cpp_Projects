#include <iostream>

int main()
{
	const int arr[] { 0,1,4,9 };
	while(true)
	{
		std::cout << "Enter a single digit integer, or -1 to quit: ";
		int sDig{};
		std::cin >> sDig;

		if (sDig == -1) break;

		bool isSquare = false;

		for (const auto& e : arr)
		{
			if (sDig == e)
			{
				isSquare = true;
				break;
			}
		}

		if (isSquare)
			std::cout << sDig << " is a perfect square\n";
		else
			std::cout << sDig << " is not a perfect square\n";
	}
	return 0;
}
