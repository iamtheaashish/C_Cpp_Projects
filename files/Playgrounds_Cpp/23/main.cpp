#include <iostream>
int add(int,int,int);

int main()
{
    std::cout << "3 + 4 + 5 = " << add(3, 4, 5) << '\n';
    return 0;
}

int add(int z, int y, int x) 
{
    return x + y + z;
}
