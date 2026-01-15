/*To calculate largest and smallest elements in an array with n elements*/
#include <stdio.h>
void main(){
    int big, small,a[10],i,n;
    printf("Enter size of the array: ");
    scanf("%d",&n);
    printf("Enter Array Elements: ");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    big=a[0];
    small=a[0];
    for(i=1;i<n;i++){
        if(a[i]>big)
            big=a[i];
        if(a[i]<small)
            small=a[i];
    } printf("\nBiggest Array Element=%d",big);
    printf("\nSmallest Array Element=%d\n",small);
}
