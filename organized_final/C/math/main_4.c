/*We are making this program to calculate electricity bill based on these constraints:
 * UNITS	CHARGES
 * 0-200	50 PAISE / UNIT
 * 201-400	RS.100 + 65 PAISE / UNIT EXCESS OF 200
 * 401-600	RS.230 + 85 PAISE / UNIT EXCESS OF 400
 * 601-ABOVE	RS.390 + 150 PAISE / UNIT EXCESS OF 600*/

#include <stdio.h>
void main() {
	int custno;
	float units,charges;
	printf("\nEnter Customer No: ");
	scanf("%d", &custno);
	printf("\n Enter No. of Units Consumed: ");
	scanf("%f", &units);

	if (units >=0 && units <=200)
	charges=0.5*units;

	else if (units >=201 && units <=400)
	charges=100+(units-200)*0.65;

	else if (units >=401 && units <=600)
	charges=230+(units-400)*0.85;

	else if (units >=601)
	charges=390+(units-600)*1.5;

	printf("\nCharges are %f\n", charges);

}
