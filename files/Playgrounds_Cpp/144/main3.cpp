//the best practice is to declare the default argument in the forward declaration and not in the function definition, as the forward declaration is more likely to be seen by other files and included before use.


#include <iostream>

void print(int x, int y = 10);

void print(int x, int y)
{
	std::cout << "Values: " << x << ' ' << y << '\n';
}

int main()
{
	print(3);
	return 0;
}
