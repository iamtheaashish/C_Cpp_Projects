/*C program to check whether the given number is prime or not*/
#include <stdio.h>
void main(){
    int i,n,count=0;
    printf("Enter n: ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        count=count+1;
    }
    if(count==2)
    printf("%d is a prime number\n",n);
    else 
    printf("%d is not a prime number\n",n);
}