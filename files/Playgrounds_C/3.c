#include <stdio.h>

int main()
{
	// input
	printf("Enter a number: ");
	int a;
	scanf("%d", &a);

	printf("Enter a number: ");
	int b;
	scanf("%d", &b);

	float c;
	c = (a+b)/(a-b);

	printf("The value of the result is %f\n",c);

}
