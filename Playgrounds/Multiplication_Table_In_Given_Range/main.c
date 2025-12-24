/*Multiplication table in a Given Range*/
#include <stdio.h>
void main(){
    int min,max,i,j;
    printf("Enter Min and Max Values: ");
    scanf("%d%d",&min,&max);

    for(i=min;i<=max;i++)
    {
        for(j=1;j<=10;j++)
        {
            printf("\t%d*%d=%d\n",i,j,i*j);
        }
        printf("\n---------------");
    }
}