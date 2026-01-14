/*Print array elements in reverse*/
#include <stdio.h>
void main(){
    int a[5],i,n;
    printf("Enter size of the array: ");
    scanf("%d",&n);
    printf("Enter elements of the array: ");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("\nAfter reversing Array Elements are: ");
    for(i=n-1;i>=0;i--)
        printf("%d\t",a[i]);
}