#include <iostream>
#include <string_view>

enum Pet
{
	cat=1,
	dog,
	pig,
	whale,
};

constexpr std::string_view getPetName(Pet pet)
{
	switch (pet)
	{
		case cat: return "cat";
		case dog: return "dog";
		case pig: return "pig";
		case whale: return "whale";
		default: return "Bakchodi";
	}
}

int main()
{
	std::cout << "Enter a pet (1=cat, 2=dog, 3=pig, 4=whale): ";

	int input{};
	std::cin >> input;

	if (input < 0 || input > 4)
		std::cout << "You entered an invalid pet\n";
	else
	{
		Pet pet{ static_cast<Pet>(input) };
		std::cout << "You entered: " << getPetName(pet) << '\n';
	}

	return 0;
} 
