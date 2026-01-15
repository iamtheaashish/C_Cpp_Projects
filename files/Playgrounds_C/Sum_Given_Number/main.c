/*Sum of Digits of a Given Number*/
#include <stdio.h>
void main(){
    int n,r,sum=0;
    printf("Enter the Number: \n");
    scanf("%d",&n);

    while (n!=0)
    {
        r=n%10;
        sum=sum+r;
        n=n/10;
    }
    printf("The sum of digits %d\n",sum);
    
}