/*C program to calculate length of the given string using library function*/
#include <stdio.h>
#include <string.h>
int main(){
    char str[20];
    int length;
    printf("Enter a String: ");
    fgets(str, 20, stdin);   
    /* in lecture sir was using gets(), but that is unsafe to use,
    it doesn't know how big is the string, program can crash, print garbage, buffer overflow risk etc......*/
    length=strlen(str);
    printf("\nThe Length of the Given String is %d\n",length);
    return 0;
}