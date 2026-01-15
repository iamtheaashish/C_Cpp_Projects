/*This project demonstrates the for loop, the if statement, and code blocks to create a program that displays a table of feet-to-meters conversions. The table begins with 1 foot and ends at 100 feet. After every 10 feet, a blank line is output. This is accomplished through the use of a variable called counter that counts the number of lines that have been output. Pay special attention to its use.*/

#include <iostream>
using namespace std;
int main(){
	double feet,meter;
	int counter;

	counter = 0;

	for(feet=1;feet<=100;feet++){
		meter = feet / 3.28;
		cout << feet << " Feet is " << meter << " meters.\n";
		counter++;

		if(counter == 25){
		cout << "\n";
		counter = 0;
		}
	}

	return 0;
}
