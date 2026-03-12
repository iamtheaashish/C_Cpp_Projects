#include <cmath>
#include <iostream>

void getSinCos(double degrees, double& sinOut, double& cosOut, double& tanOut)
{
	constexpr double pi { 3.14159265358979323846 };

	double radians = degrees * pi / 180.0;
	sinOut = std::sin(radians);
	cosOut = std::cos(radians);
	tanOut = std::tan(radians);
}


int main()
{
	double sin { 0.0 };
	double cos { 0.0 };
	double tan { 0.0 };

	double degrees{};
	std::cout << "Enter the number of degrees: ";
	std::cin >> degrees;

	//getSinCos will return the sin and cos in variables sin and cos.
	getSinCos( degrees, sin, cos, tan);

	std::cout << "The sin is " << sin << '\n';
	std::cout << "The cos is " << cos << '\n';
	std::cout << "The tan is " << tan << '\n';

	return 0;
}
