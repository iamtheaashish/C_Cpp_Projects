/*C program to calculate total and average by reading 6 subject marks*/

#include <stdio.h>
int main(){
	float m1, m2, m3, m4, m5, m6, total, avg;
	printf("Enter 6 subject marks one by one: \n");
	scanf("%f%f%f%f%f%f",&m1,&m2,&m3,&m4,&m5,&m6);
	
	//Calculation
	total=m1+m2+m3+m4+m5+m6;
	avg=total/6;

	printf("\nTotal Marks = %f and Average = %f\n",total,avg);
return 0;
}
