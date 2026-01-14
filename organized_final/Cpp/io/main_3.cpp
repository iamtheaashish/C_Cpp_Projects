/*To calculate area of rectangle by taking user's input*/
#include <iostream>
using namespace std;

int main(){
	int length, width, area;
	
	cout << "Enter Length:";
	cin >> length;

	cout << "Enter Width:";
	cin >> width;
	area = length * width;

	cout << "The area is ";
	cout << area;

	return 0;
}
