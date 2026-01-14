#include<stdio.h>
#include <stdlib.h>
int main(){
    int i;
    int *p=(int *)malloc(5*sizeof(int));
    if (p==NULL)
        printf("Memory is not Allocated");
    else{
        printf("Enter Elements: \n");
        for(i=0;i<5;i++)
            scanf("%d",p+i);
        printf("Elements are: \n");
        for(i=0;i<5;i++)
            printf("%d\t",*(p+i));
    }
    free(p); 
}