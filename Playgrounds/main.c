// # include <stdio.h>

// int main() {
//     printf("Hello, I am learning C with Harry\n");
//     return 0;
// }

// First, a C program is written in a code editor,
// then it is compiled in C Compiler (gcc)
// Finally, the executable is run to see the output.

// # include <stdio.h>
// int main() {
//     int a = 4;
//     float b = 5.5;
//     char c = 'A';
//     printf("The value of a is: %d\n", a);
//     printf("The value of b is: %2f\n", b); // %2f means that the float will be printed with 2 digits after the decimal
//     printf("The value of c is: %c\n", c);
//     return 0;
// }

// # include <stdio.h>
// int main() {
//     int a;
//     scanf("%d", &a);    //& is the address operator. Supplied value should be copied to the address which is variable a
//     printf("The value that you provided is %d\n", a);
// }

// # include <stdio.h>
// int main() {
//     int a = 10;
//     int b = 15;
//     printf("Area of rectangle is %d\n", a*b);
//     return 0;
// }

// # include <stdio.h>
// int main() {
//     int a , b ;
//     // Enter value of length
//     printf("Enter Length: ");
//     scanf("%d", &a);
//     // Enter value of breadth
//     printf("Enter Breadth: ");
//     scanf("%d", &b);
//     // Output
//     printf("The Area of Rectangle is: %d\n", a*b);
//     return 0; // We write return 0 to indicate that the program ended successfully
// }

// # include <stdio.h>
// int main(){
//     int r;
//     float area;
//     printf("Enter radius of circle: ");
//     scanf("%d", &r);

//     area = 3.14285714286 * r * r;
//     printf("Area of Circle is: %f\n", area);
//     return 0;
// }

// # include <stdio.h>
// int main(){
//     int r, h;
//     float volume;

//     printf("Enter radius of cylinder: ");
//     scanf("%d", &r);

//     printf("Enter height of cylinder: ");
//     scanf("%d", &h);

//     volume = 3.14285714286 * r * r * h;
//     printf("Volume of Cylinder is: %f\n", volume);
//     return 0;
// }

// Celcius to Fahrenheit
// F = (9/5 * C) + 32

// # include <stdio.h>
// int main(){
//     // initializing variables with values
//     int celcius;
//     int fahrenheit;
//     // user input
//     printf("Enter temperature in Celcius: ");
//     scanf("%d", &celcius);

//     fahrenheit = ( 1.8 * celcius ) + 32;
//     printf("Temperature in Fahrenheit is equal to: %d\n", fahrenheit);
//     return 0;
// }

// Simple Interest Formula
// SI = ( P * R * T ) / 100
//  # include <stdio.h>
//  int main(){
//     float principal, rate_of_interest, time_period, simple_interest, amount;
//     char ask_2_show_amount;
//     // Input
//     printf("Enter the Principal Amount: ");
//     scanf("%f", &principal);

//     printf("Enter the Rate of Interest: ");
//     scanf("%f", &rate_of_interest);

//     printf("Enter the Time Period in Years: ");
//     scanf("%f", &time_period);

//     // Calculation
//     simple_interest = ( principal * rate_of_interest * time_period ) / 100;
//     amount = simple_interest + principal;
//     // Output
//     printf("Simple Interest is: %f\n", simple_interest);

//     printf("Do you also want to see total payable amount? Answer with 'y' or 'n': ");
//     scanf(" %c", &ask_2_show_amount);

//     if (ask_2_show_amount == 'y') {
//         printf("The total payable amount is: %f\n", amount);
//     } else {
//         printf("Okay, not showing the total payable amount.\n");
//     }

//     return 0;
//  }

// Chapeter 2
//  Write a program to check whether a number is divisible by 97 or not.
//  # include <stdio.h>
//  int main (){
//      int num;
//      printf("Enter the number\n");
//      scanf("%d", &num);

//     printf("Divisiblity test returns: %d\n", num%97);
//     // if remainder is 0 then it is divisible else not

//     return 0;
// }

// This is a C program that checks whether the program is odd or even.

// # include <stdio.h>
// int main (){
//     int a, b;

//     printf("Enter a Number\n");
//     scanf("%d", &a);

//     if(a%2==0){
//         printf("%d is even\n");
//     }
//     else{
//         printf("%d is odd\n");
//     }
//     // agar magar if else wali baat cheet
//     return 0;
// }

// Write a program to check whether the person can or cannot drive based on his age

// # include <stdio.h>
// int main () {
//     int a;
//     printf("Please enter your age: ");
//     scanf("%d", &a);

//     if (a >=18){
//         printf("You are 18 or above, you can drive!\n");
//     } else {
//         printf("Sorry, you can't drive\n");
//     }
//     return 0;
// }

// # include <stdio.h>
// int main() {
//     int a;
//     printf("Enter a: ");
//     scanf("%d", &a);

//     (a < 5) ? printf("A is less than 5\n") : printf("A is not less than 5\n");

//     return 0;
// }

// # include <stdio.h>
// int main(){
//     int rating;
//     printf("Enter your rating (1-5)\n");
//     scanf("%d", &rating);

//     switch (rating){
//         case 1:
//         printf("Your rating is 1\n");
//         break;

//         case 2:
//         printf("Your rating is 2\n");
//         break;

//         case 3:
//         printf("Your rating is 3\n");
//         break;

//         case 5:
//         printf("Your rating is 5\n");
//         break;

//         default :
//         printf("Invalid Rating!\n");
//         break;
//     }
//     return 0;
// }

// Write a program to find grade of a student given his marks based on below:
//  90-100 ---> A
//  80-90  ---> B
//  70-80  ---> C
//  60-70  ---> D
//  <70    ---> F

// #include <stdio.h>
// int main()
// {
//     int marks;
//     printf("Enter Marks of Student: ");
//     scanf("%d", &marks);

//     if (marks >= 90 && marks <= 100)
//     {
//         printf("Grade is A, Student has performed Excellent\n");
//     }
//     else if (marks >= 80 && marks < 90)
//     {
//         printf("Grade is B, Student has performed above average.\n");
//     }
//     else if (marks >= 70 && marks < 80)
//     {
//         printf("Grade is C, Student performed average.\n");
//     }
//     else if (marks >= 60 && marks < 70)
//     {
//         printf("Grade is D, Student performed below average\n");
//     }
//     else if (marks < 60)
//     {
//         printf("Grade is F, Student needs to put in more efforts.\n");
//     }

//     // I wasn't able to write logic for this program, I had to use GitHub co-pilot agent mode. Sorry.
//     return 0;
// }


/* Write a program to find out whether a student is pass or fail; 
if it requires total 40% and at least 33% in each subject  to pass.
Assume 3 subjects and take marks as an unput from the user.*/

// # include <stdio.h>
// int main(){
//     int phys, chem, bio, eng ;
//     float total;

//     printf("Enter marks in Physics out of 100: ");
//     scanf("%d", &phys);

//     printf("Enter marks in Chemistry out of 100: ");
//     scanf("%d", &chem);

//     printf("Enter marks in Biology out of 100: ");
//     scanf("%d", &bio);

//     printf("Enter marks in English out of 100: ");
//     scanf("%d", &eng);

//     total = (phys + chem + bio + eng)/4;

//     if(total<40 || phys<33 || chem<33 || bio<33 || eng<33){
//         printf("Your total percentage is %f and dude you've failed!\n", total);
//     } else {
//         printf("Your total percentage is %f and dude you've passed!!\n", total);
//     }
//     return 0;
// }


// Calculate income tax paid by an employee to the government as per the slabs mentioned below:
/* Income Slab       Tax
 2.5L -5.0L          5%
 5.0L-10.0L          20%
 Above 10.0L         30% */

//  # include <stdio.h>
//  int main(){
//     float tax = 0, income;
//     printf("Enter your income: ");
//     scanf("%f", &income);

//     if (income>=250000 && income<=500000)
//     {
//         tax = tax + 0.05 * (income - 2500000);
//     }

//     if (income>=500000 && income<=1000000)
//     {
//         tax = tax + 0.20 * (income - 500000);
//     }
//     if (income >= 1000000)
//     {
//         tax = tax + 0.30 * (income - 1000000);
//     }
    
//     printf("Your net income tax to be paid by 26th of this month is: %f\n ", tax);
    
//     return 0;
//  }


/*Write a program to find whether a year entered by the user is a leap year or not. Take year as an input from the user.*/
// #include <stdio.h>
// int main() {
//     int leap;
//     printf("Enter the year which you want to check: ");
//     scanf("%d", &leap);

//     if ((leap % 4 == 0 && leap % 100 != 0) || (leap % 400 == 0)) {
//         printf("Year you entered is a leap year.\n");
//     } else {
//         printf("Year you entered is not a leap year.\n");
//     }
//     return 0;
// }



// Write a program to determine whethe a charcter entered by the user is lowercase or not. 

// 97-122 = a-z
// #include <stdio.h>
// int main(){
//     char ch;
//     printf("Enter the character: ");
//     scanf("%c", &ch);

//     if(ch<=122 && ch>=97){
//         printf("It is lowercase\n");
//     }
//     else{
//         printf("It is not lowercase\n");
//     }
//     return 0;
// }


// now same program but it goes to it's mean value again n again

// #include <stdio.h>
// int main(){
//     char ch;
//     while (1) {
//         printf("Enter the character (enter 0 to exit): ");
//         scanf(" %c", &ch); // Note the space before %c to consume any leftover newline

//         if (ch == '0') {
//             break;
//         }

//         if (ch >= 'a' && ch <= 'z') {
//             printf("It is lowercase\n");
//         } else {
//             printf("It is UPPERCASE\n");
//         }
//     }
//     return 0;

