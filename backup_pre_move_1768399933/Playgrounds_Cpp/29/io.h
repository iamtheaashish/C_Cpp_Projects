#ifndef IO_H
#define IO_H

#include <iostream>

void writeAnswer(int);
int readNumber();	// declare function

void writeAnswer(int a) // define function
{
        std::cout << "Addition of the two integers is " << a << ".\n";
}


int readNumber()
{
        std::cout << "Enter an Integer: ";
        int q{};
        std::cin >> q;

        return q;
}

#endif
