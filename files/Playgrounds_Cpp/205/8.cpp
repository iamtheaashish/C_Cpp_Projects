#include <iostream>
#include <vector>

int main()
{
    std::vector<int> prime{ 2, 3, 5, 7, 11 };

    std::cout << prime.at(3);

    std::cout << prime.at(9);
    
    return 0;
}
