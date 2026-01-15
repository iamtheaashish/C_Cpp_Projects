#include <stdio.h>
int sum(void);
int main(){
    int res;
    res=sum();
    printf("Result=%d",res);
}
int sum(void)
{
    int x,y;
    printf("Enter 2 Numbers: ");
    scanf("%d%d",&x,&y);
    return x+y;
}