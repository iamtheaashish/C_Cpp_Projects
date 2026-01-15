#include <stdio.h>
void add();
int main(){
    add();
    return 0;
}
void add(){
    int x,y;
    printf("Enter 2 Numbers: ");
    scanf("%d%d",&x,&y);
    printf("Result=%d",x+y);
}