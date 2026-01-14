/*Inserting element into array anywhere we like*/
#include <stdio.h>
void main(){
    int n,a[10],pos,ele,i;
    printf("Enter size of the array");
    scanf("%d",&n);
    printf("Enter Array Elements: ");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Enter the position at which element is to be inserted: ");
    scanf("%d",&pos);
    printf("Enter the element: ");
    scanf("%d",&ele);

    for(i=n;i>pos;i--)
        a[i-1]=a[i-2];
    a[pos-1]=ele;
    printf("After insertion Array Elements are: ");
    for(i=0;i<n;i++)
        printf("%d\t",a[i]);
}