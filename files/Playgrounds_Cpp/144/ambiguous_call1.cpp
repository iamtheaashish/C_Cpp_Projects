#include <iostream>

void print(int x);
void print(int x, int y = 10);
void print(int x, double y = 20.5);

int main()
{
	print(1,2);
	print(1,2.5);
	print(1);

	return 0;
}
