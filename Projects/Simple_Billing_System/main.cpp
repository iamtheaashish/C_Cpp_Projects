#include <iostream> // input/output (cin, cout)
#include <fstream>	// file handling (save bills, read products)
#include <sstream>	// string formatting / parsing
#include <string>	// string class

#include <vector>  // store list of items
#include <iomanip> // formatting (price alignment, decimals)

#include <unistd.h> // sleep()

class Bill
{
private:
	std::string m_Item{};
	int m_Rate{}, m_Quantity{};

public:
	// constructors
	Bill()
		: m_Item(""), m_Rate(0), m_Quantity(0)
	{
	}

	// member functions & accessers and mutators

	void setItem(std::string item)
	{
		m_Item = item;
	}

	void setRate(int rate)
	{
		m_Rate = rate;
	}

	void setQuantity(int quantity)
	{
		m_Quantity = quantity;
	}

	std::string getItem() { return m_Item; }

	int getRate() { return m_Rate; }

	int getQuantity() { return m_Quantity; }
};

void addItem(Bill b)
{
	bool close{false};

	while (!close)
	{
		int choice{};
		std::cout << "\t1. Add.\n";
		std::cout << "\t2. Close.\n";
		std::cout << "\tEnter Choice: ";
		std::cin >> choice;

		if (choice == 1)
		{
			std::cout << "\033[2J\033[1;1H";

			std::string item{};
			int rate{}, quantity{};

			std::cout << "\tEnter Item Name: ";
			std::cin >> item;
			b.setItem(item);

			std::cout << "\tEnter Rate of Item: ";
			std::cin >> rate;
			b.setRate(rate);

			std::cout << "\tEnter Quantity of Item: ";
			std::cin >> quantity;
			b.setQuantity(quantity);

			std::ofstream out("Bill.txt", std::ios::app);
			if (!out)
			{
				std::cout << "\tError: File can't open!\n";
			}
			else
			{
				out << "\t" << b.getItem() << " : " << b.getRate() << " : " << b.getQuantity() << "\n\n";
			}
			out.close();

			std::cout << "\tItem Added Successfully.\n";

			sleep(2);
		}

		else if (choice == 2)
		{
			std::cout << "\033[2J\033[1;1H"; // clear screen
			close = true;
			std::cout << "\tBack to Main Menu!\n";
			sleep(2);
		}
	}
}

void printBill(Bill b)
{
	std::cout << "\033[2J\033[1;1H";

	int count{};

	bool close = false;

	while(!close)
	{
		std::cout << "\033[2J\033[1;1H";

		int choice{};
		std::cout << "\t1. Add Bill.\n";
		std::cout << "\t2. Close Session.\n";
		std::cout << "\tEnter Choice: ";
		std::cin >> choice;

		if (choice == 1)
		{
			std::string item{};
			int quantity{};
			std::cout << "\tEnter Item: ";
			std::cin >> item;
			std::cout << "\tEnter Quantity: ";
			std::cin >> quantity;

			std::ifstream in("Bill.txt");
			std::ofstream out("Bill_Temp.txt");

			std::string line{};
			bool found = false;

			while (getline(in, line))
			{
				std::stringstream ss;
				ss << line;

				std::string itemName{};
				int itemRate{}, itemQuantity{};
				char delimiter{};

				ss>>itemName>>delimiter>>itemRate>>delimiter>>itemQuantity;

				if(item == itemName)
				{
					found = true;
					if(quantity = itemQuantity)
					{
						int amount = itemRate * quantity;
						std::cout << "\t Item | Rate | Quantity | Amount \n";
						std::cout << "\t" << itemName << "\t " << itemRate << "\t " << quantity << "\t " << amount << "\n";

						int newQuantity {itemQuantity - quantity};
						itemQuantity = newQuantity;

						count += amount;

						out << "\t" << itemName << " : " << itemRate << " : " << itemQuantity << "\n\n";
					}
					else
					{
						std::cout << "\tSorry, the quantity for " << item << " isn't available.\n";
					}
				}
				else
				{
					out << line << '\n';
				}
			}

			if(!found)
			{
				std::cout << "\tItem not available!\n";
			}
			out.close();
			in.close();
			
			remove("Bill.txt");
			rename("Bill_Temp.txt", "Bill.txt");

		}
		else if(choice == 2)
		{
			close = true;
			std::cout << "\t Generating Total Bill\n";
			sleep(2);
		}
	}
	std::cout << "\033[2J\033[1;1H";
	std::cout << "\n\n";
	std::cout << "\t Total Bill ---------- : " << count << "\n\n";
	std::cout << "Thanks for shopping with us!\n";

	sleep(2);
}

int main()
{
	Bill b{};

	bool exit{false};

	while (!exit)
	{

		// for clearing the screen, copied from stackoverflow
		std::cout << "\033[2J\033[1;1H";

		std::cout << "\tWelcome to Simple Billing System\n";
		std::cout << "\t********************************\n";
		std::cout << "\t\t1. Add Item.\n";
		std::cout << "\t\t2. Print Bill.\n";
		std::cout << "\t\t3. Exit.\n";
		std::cout << "\t\tEnter Choice: ";

		int val{};

		std::cin >> val;

		if (val == 1)
		{
			std::cout << "\033[2J\033[1;1H";
			addItem(b);
			sleep(2);
		}
		else if (val == 2)
		{
			printBill(b);
		}
		else if (val == 3)
		{
			std::cout << "\033[2J\033[1;1H";
			std::cout << "\tBye!\n";
			sleep(2);
			exit = true;
		}
		/*I was planning to break statement instead, instructor used extra bool variable.*/

	}

	return 0;
}
