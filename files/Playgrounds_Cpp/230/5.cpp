#include <algorithm>
#include <array>
#include <iostream>

void doubleNumber(int& i)
{
    i *= 2;
}

int main()
{
    std::array qwe{1,2,3,4,5,6,7,8,9};

    std::for_each(std::next(qwe.begin()), std::prev(qwe.end()), doubleNumber);

    for (int i : qwe)
    {
        std::cout << i << ' ';
    }

    std::cout << '\n';
}