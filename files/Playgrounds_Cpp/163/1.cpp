#include <iostream>

enum Animal
{
    cat = -1,    // -3
    dog,         // -2
    pig,         // -1
    // note: no enumerator with value 0 in this list
    horse = 5,   // 5
    giraffe = 5, // 5
    chicken,     // 6
};

int main()
{
    Animal a {}; // value-initialization zero-initializes a to value 0
    std::cout << a; // prints 0

    return 0;
}
