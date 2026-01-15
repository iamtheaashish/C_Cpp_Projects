/*Sum of Squares of First N Natural Numbers*/
#include <stdio.h>
void main(){
	int n,sum;
	printf("Enter the value of \'n\'");
	scanf("%d",&n);

	//LOGIC
	sum = (n*(n+1)*(2*n+1))/6;

	printf("The Sum of Squares of First \'%d\' Natural Numbers is \'%d\'\n",n,sum);

}
