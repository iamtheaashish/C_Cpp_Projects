#include <stdio.h>
int sum(int,int);
int main()
{
    int a,b,res;
    printf("Enter 2 Numbers: ");
    scanf("%d%d",&a,&b);
    res=sum(a,b);
    printf("\nResult=%d",res);
    return 0;
}

int sum(int x,int y)
{
    return(x+y);
}