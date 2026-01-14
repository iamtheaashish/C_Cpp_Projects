/*C program to convert Fahrenheit temperature to centigrade temperature
 C=(f-32)*5/9 */
#include <stdio.h>
void main(){
	float f,c;
	printf("Enter Temperature in Fahrenheit: \n");
	scanf("%f", &f);
	
	c=(f-32)*5/9;

	printf("Temperature in Centigrade is %f\n", c);

}
