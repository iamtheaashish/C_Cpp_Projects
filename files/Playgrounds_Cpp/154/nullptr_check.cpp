#include <iostream>

int main()
{
	int x { 5 };
	int* ptr { &x };

	if (ptr == nullptr) 
		std::cout << "ptr is null\n";
	else
		std::cout << "ptr is non-null\n";

	int* nullPTR;
	std::cout << "nullPTR is " << (nullPTR==nullptr ? "null\n" : "non-null\n");
	return 0;
}
