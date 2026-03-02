#include <iostream>

void print(int x=10, int y=20, int z=30)
{
	std::cout << "Values: " << x << " " << y << " " << z << '\n';
}

int main()
{
	print(1,2,3);
	print(1,2);
	print(1);
	print();

	return 0;
}
