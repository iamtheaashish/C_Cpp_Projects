/*C program to declare, Initialise & Access a pointer variable*/
#include<stdio.h>
int main(){
    int a=10,*ptr;
    ptr=&a;
    printf("\nValue of a is %d\n",a);
    printf("\nValue of a is %d\n",*ptr);
    printf("\nValue of a is %d\n",*(&a));
    printf("\nAddress of a is %p\n", (void *)&a); // gives hexadecimal value of memory. One hex represent 4 bits
    printf("\nAddress of a is %u\n",&a);
    printf("\nAddress of a is %u\n",ptr);
    printf("\nAddress of a is %u\n",*(&ptr));
    // printf("\nValue of a is %d",*(*(&a))); Comipler simplifies, unnecessary to write this way.
    return 0;
}