#include <iostream>
#include <string>
#include <string_view>

int main()
{
	std::string_view s1 { "Hello, world!" };

	std::cout << s1 << '\n';

	std::string s{ "Hello world! "};
	std::string_view s2 { s };
	std::cout << s2 << '\n';

	std::string_view s3 { s2 };
	std::cout << s3 << '\n';
	
	return 0;
}
