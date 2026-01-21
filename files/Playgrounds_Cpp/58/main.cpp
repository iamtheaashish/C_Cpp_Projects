#include <iostream>

int main()
{
    // Input from User
    std::cout << "Enter a double value: ";
    double a{};
    std::cin >> a;

    std::cout << "Enter a double value: ";
    double b{};
    std::cin >> b;

    std::cout << "Enter +, -, *, or /: ";
    char c{};
    std::cin >> c;

    if(c=='+')
        std::cout << a << c << b << " is " << a+b << '\n';
    else if(c=='-')
        std::cout << a << c << b << " is " << a-b << '\n';
    else if(c=='*')
        std::cout << a << c << b << " is " << a*b << '\n';
    else if(c=='/')
        std::cout << a << c << b << " is " << a/b << '\n';
    else
        std::cout << "Invalid Input(s). Exiting the program.\n";
        
    return 0;
}