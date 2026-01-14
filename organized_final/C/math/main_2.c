/*C program to calculate sum and average of an array with n elements*/
#include <stdio.h>
void main(){
    int n,a[10],i,sum=0;
    float avg;
    printf("Enter Size of the Array: ");
    scanf("%d",&n);
    printf("Enter Array Elements: \n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++)
        sum=sum+a[i];
    avg=(float)sum/n;
    printf("\nSUM=%d",sum);
    printf("\nAverage=%f\n",avg);
}