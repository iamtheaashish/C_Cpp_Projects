#include <iostream>
double getDouble()
{
    std::cout << "Enter a double value: ";
    double x{};
    std::cin >> x;

    return x;
}

char getOperator()
{
	std::cout << "Enter +, -, *, or /: ";
	char operat{};
	std::cin >> operat;

	return operat;
}

void printResult(double x, char operat, double y)
{
	double result{};

	if ( operat == '+' )
		result = x + y;
	else if ( operat == '-')
		result = x - y;
	else if ( operat == '*' )
		result = x * y;
	else if ( operat == '/' )
		result = x / y;
	else
		return;
	std::cout << x << ' ' << operat << ' ' << y << " is " << result << '\n';
}

int main()
{
    double a{ getDouble() };
    double b{ getDouble() };

    char operat{ getOperator() };

    printResult(a,operat,b);    
    return 0;
}
