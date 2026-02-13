#include <iostream>

void printCats(bool skip)
{
	if (skip)
		goto end;
	std::cout << "cats\n";
end:
	;
}

int main()
{
	printCats(true);
	printCats(false);
	return 0;
}
