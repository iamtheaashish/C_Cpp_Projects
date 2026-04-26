#include <algorithm>
#include <array>
#include <iostream>
#include <string_view>

std::string STR()
{
    std::string inpSTR{};
    std::cout << "Enter your querry? ";
    std::cin >> inpSTR;

    return inpSTR;
}

bool strING(std::string_view str)
{
    return str.find(STR()) != std::string_view::npos;
}

int main()
{
    std::array<std::string_view, 4> arr{"apple", "banana", "walnut", "lemon"};

    auto found{ std::find_if(arr.begin(), arr.end(), strING)};

    if (found == arr.end())
    {
        std::cout << "Not found\n";
    }
    else
    {
        std::cout << "Found " << *found << '\n';
    }

    return 0;
}