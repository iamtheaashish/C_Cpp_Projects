#include <iostream>
#include <string>

template <typename T, typename Y, typename U>
class Triad
{
	private:
		T m_first {};
		Y m_second {};
		U m_third {};

	public:
		Triad (T first, Y second, U third)
		: m_first { first }
		, m_second { second }
		, m_third { third }
		{}

		const T& first() const { return m_first; }
		const Y& second() const { return m_second; }
		const U& third() const { return m_third; }

		void print() const;

};

template <typename T, typename Y, typename U>
void Triad<T, Y, U>::print() const
{
    std::cout << "[" << m_first << ", " << m_second << ", " << m_third << "]" ;
}



int main()
{
	Triad<int, int, int> t1{ 1, 2, 3 };
	t1.print();
	std::cout << '\n';
	std::cout << t1.first() << '\n';

	using namespace std::literals::string_literals;
	const Triad t2{ 1, 2.3, "Hello"s };
	t2.print();
	std::cout << '\n';

	return 0;
}
