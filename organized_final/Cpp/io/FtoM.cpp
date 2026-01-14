/*Program to convert FEET to METERS by taking user input*/
#include <iostream>
using namespace std;
int main(){
	double feet, meter;
	cout << "\nEnter Value of Feets: ";
	cin >> feet;

	meter = feet/3.28;

	cout << "Value in Meters = " << meter << " meters \n";
	return 0;
}
