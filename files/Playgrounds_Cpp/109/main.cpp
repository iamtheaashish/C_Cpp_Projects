#include <iostream>

int takeINT()
{
	std::cout << "Enter an Integer: ";
	int a{};
	std::cin >> a;
	return a;
}

char takeCHAR()
{
	std::cout << "Enter a Single Operator +-*/ : ";
	char a{};
	std::cin >> a;
	return a;
}

int calCulate(int x, int y, char z)
{
	int result{};
	switch(z)
	{
	case '+':
		result = x + y;
		break;
	case '-':
		result = x - y;
		break;
	case '*':
		result = x * y;
		break;
	case '/':
		result = x / y;
		break;
	default:
		std::cout << "ERROR, Operator is wrong!\n";
	}
	return result;
}

int main()
{
	int num1 { takeINT() };
	int num2 { takeINT() };

	char symb{ takeCHAR() };

	int result{ calCulate(num1, num2, symb) };

	std::cout << "The Result is: " << result << '\n';
	return 0;
}
