// Make sure that assert triggers even if we compile in release mode
#undef NDEBUG

#include <cassert> // for assert
#include <iostream>

bool isPrime(int x)
{
    for (int count{ 0 }; count <= x; ++count)
    {
	    std::cout << count << " is a prime number.\n";
    }
    return false;
    // write this function using a for loop
}

int main()
{
	std::cout << "Enter till where you want me to print: ";
	int x {};
	std::cin >> x;
    assert(!isPrime(x)); // terminate program if isPrime(0) is true
    
    std::cout << "Success!\n";

    return 0;
}
