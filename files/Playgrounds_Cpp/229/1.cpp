#include <array>
#include <cstddef>
#include <iostream>

int main()
{
    std::array arr{0,1,2,3,4,5,6};
    std::size_t length{ std::size(arr)};

    std::size_t index{0};
    while (index < length)
    {
        std::cout << arr[index] << ' ';
        ++index;
    } std::cout << '\n';
    
    for (index = 0; index < length; ++index)
    {
        std::cout << arr[index] << ' ';
    } std::cout << '\n';

    for (int i : arr)
    {
        std::cout << i << ' ';
    }
    std::cout << '\n';

    return 0;
}