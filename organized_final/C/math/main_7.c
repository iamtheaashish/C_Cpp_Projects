/*Write C program to print prime numbers within given range, 
we have to input minimum and maximum number by user*/
#include <stdio.h>
void main(){
    int min,max,i,j,count;
    printf("\nEnter Min and Max Value: ");
    scanf("%d%d",&min,&max);
    
    for(i=min;i<=max;i++)
    {
        count=0;
        for(j=1;j<=i;j++)
        {
            if(i%j==0){
                count++;
            }
        }
        if(count==2)
            printf("\n%d is a Prime Number\n\t",i);
    }
}
