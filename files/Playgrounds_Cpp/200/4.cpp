#include <iostream>

class Accumulator
{
private:
    int m_value { 0 }; 

public:
    void add(int value) { m_value += value; } 

     int value() const { return m_value; }


};

void print(const Accumulator& accumulator)
{
    std::cout << accumulator.value();
}

int main()
{
    Accumulator acc{};
    acc.add(5);

    print(acc);

    return 0;
}
