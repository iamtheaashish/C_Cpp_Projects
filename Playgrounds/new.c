#include <stdio.h>
void main(){
	char op;
	int n1,n2;
	printf("Enter an Operator: ");
	scanf("%c", &op);

	printf("\nEnter Two Numbers: \n");
	scanf("%d%d", &n1,&n2);

	if (op=='+')
		printf("Addition=%d\n", n1+n2);
	else if(op=='-')
		printf("Subtraction=%d\n", n1-n2);
	else if(op=='/')
		printf("Quotient=%d\n", n1/n2);
	else if(op=='%')
		printf("Remainder=%d\n", n1%n2);
	else if(op=='*')
		printf("Multiplication=%d\n", n1*n2);
}

