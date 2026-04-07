#include <iostream>

class Humidity; // forward declaration

class Temperature
{
	private:
		int m_temp { 0 };
	public:
		explicit Temperature(int temp) : m_temp { temp } {} // constructor
		
friend void printWeather(const Temperature& temperature, const Humidity& humidity);
// forward declaration was needed for this line
};

class Humidity
{
	private:
		int m_humidity { 0 };
	public:
		explicit Humidity(int humidity) : m_humidity { humidity } {} // constructor

friend void printWeather(const Temperature& temperature, const Humidity& humidity);
};

void printWeather(const Temperature& temperature, const Humidity& humidity)
{
	std::cout << "The temperature is " << temperature.m_temp << " and the humidity is "
		<< humidity.m_humidity << '\n';
}

int main()
{
	Humidity hum { 10 };
	Temperature temp { 12 };

	printWeather(temp, hum);

	return 0;
}
