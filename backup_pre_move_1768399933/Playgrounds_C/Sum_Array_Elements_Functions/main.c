/*Calculate sum of array elements using functions*/
#include <stdio.h>
int sum(int[],int);

int main(){
    int i,n,a[10];
    printf("Enter Size of Array: ");
    scanf("%d",&n);
    printf("Enter Elements of Array: \n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Result=%d\n",sum(a,n));
return 0;
}

int sum(int x[],int n){
    int i,s=0;
    for(i=0;i<n;i++){
    s=s + x[i];
    }
    return s;
}