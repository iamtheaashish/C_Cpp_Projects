// CLI Data Collector Program
// Objectives:
// 1. asks for: name, age, country
// 2. prints a formatted summary

// Like this:

// Enter name: Aashish
// Enter age: 18
// Enter country: India

// ---- User Profile ----
// Name: Aashish
// Age: 18
// Country: India



// This is first implementation in single main function

#include <iostream>
int main()
{
    std::cout << "Enter name: ";
    char name[32];
    std::cin >> name;
    
    std::cout << "Enter age: ";
    int age{};
    std::cin >> age;

    std::cout << "Enter country: ";
    std::string country;
    std::cin >> country;


    std::cout << "\n---- User Profile ----\n";
    std::cout << "Name: " << name << '\n';
    std::cout << "Age: " << age << '\n';
    std::cout << "Country: " << country << '\n';
    return 0;
}
