#include <iostream>

int main()
{
	const int length { 5 };
	const int arr[length] { 9, 7, 5, 3, 1 };

	std::cout << arr[length-2] << '\n';
	
	return 0;
}
