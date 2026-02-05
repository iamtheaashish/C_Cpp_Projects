#include <iostream>

inline namespace V1	// declare an inline namespace named V1
{
	void doSomething()
	{
		std::cout << "V1\n";
	}
}

namespace V2 // declare a normal namespace named V2
{
	void doSomething()
	{
		std::cout << "V2\n";
	}
}

int main()
{
	V1::doSomething(); // calls the V1 version
	V2::doSomething(); // call the V2 version

	doSomething(); // calls the inline version of doSomething() (which is V1)
	
	return 0;
}
