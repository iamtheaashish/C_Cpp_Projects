#include <iostream>
#include <iterator>
#include <utility>

int main()
{
    int array[]{6, 3, 2, 9, 7, 1, 5, 4, 8};
    constexpr int length{static_cast<int>(std::size(array))};

    // for (int iteration{0}; iteration < length - 1; ++iteration)
    // {
    //     if (array[0] > array[1])
    //         std::swap(array[0], array[1]);

    //     if (array[1] > array[2])
    //         std::swap(array[1], array[2]);

    //     if (array[2] > array[3])
    //         std::swap(array[2], array[3]);

    //     if (array[3] > array[4])
    //         std::swap(array[3], array[4]);

    //     if (array[4] > array[5])
    //         std::swap(array[4], array[5]);

    //     if (array[5] > array[6])
    //         std::swap(array[5], array[6]);

    //     if (array[6] > array[7])
    //         std::swap(array[6], array[7]);

    //     if (array[7] > array[8])
    //         std::swap(array[7], array[8]);
    // }

    for (int iteration{0}; iteration < length -1; ++iteration)
    {
        for (int currentIndex{0}; currentIndex < length - 1; ++currentIndex)
        {
            if (array[currentIndex] > array[currentIndex+1])
            std::swap(array[currentIndex], array[currentIndex+1]);
        }
    }

    for (int i{0}; i < length; i++)
    {
        std::cout << array[i] << ' ';
    }

    std::cout << '\n';

    return 0;
}