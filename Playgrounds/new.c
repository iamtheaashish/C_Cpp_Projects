#include <stdio.h>
void main(){
	int a=10,b=20;
	printf("Initially a=%d and b=%d\n",a,b);	
	a+=b;
	printf("After Addition Assignment a=%d and b=%d\n",a,b);
	a*=b;
	printf("After Multiplication Assignment a=%d and b=%d\n",a,b);
}

