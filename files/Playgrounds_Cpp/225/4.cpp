#include <iostream>

int main()
{
	int array[3][3] 
	{
	{1,2,3},{4,5,6},{7,8,9}
	};

	for (int i{0},j{0}; i<3, j<3; ++i,++j)
	{
		std::cout << array[i][j] << '\n';
	}

	return 0;
}
