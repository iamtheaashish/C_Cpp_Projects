#include <stdio.h>

void printTwoStrings(char *a, char*b)
{
	printf("%s %s\n", a, b);
}

int main(void)
{
	printTwoStrings("Hello");
	return 0;
}
