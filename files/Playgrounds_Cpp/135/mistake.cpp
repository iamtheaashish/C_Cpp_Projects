#include <iostream>
#include <random>

int getCard()
{
	std::mt19937 mt{ std::random_device{}() };

	std::uniform_int_distribution card{ 1, 52 };
	return card(mt);
}

int main()
{
	for (int count{ 0 }; count <= 50; ++count)
	{
	std::cout << getCard() << ' ';

	if ((count % 10) == 0)
		std::cout << '\n';
	}
	return 0;
}
