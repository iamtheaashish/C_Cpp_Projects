/*C program to swap 2 numbers without using temp(third) variable 
 lets say a =10 and b =20, then a becomes 20 and b becomes 10*/

#include <stdio.h>
void main(){
	int a, b;
	printf("Enter 'a'");
	scanf("%d",&a);

	printf("\nEnter 'b'");
	scanf("%d",&b);

	//Logic
     /*	a = a + b;
	b = a - b;
	a = a - b;*/

	a = a * b;
	b = a / b;
	a = a / b;

	printf("\nNow a = %d AND b = %d\n",a,b);

}
