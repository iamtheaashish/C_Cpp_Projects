#include <iostream>
#include <vector>

int main()
{
    std::vector empty { };

    for (int num : empty)
       std::cout << "Hi mom!\n";

    return 0;
}
