#include "PhoneBook.hpp"

int main(void)
{
	std::string command;
	PhoneBook phonebook;

	while (1)
	{
		std::cout << "Enter a command (ADD, SEARCH, EXIT): ";
		std::getline(std::cin, command);
		if (std::cin.eof())
			break;
		if (command == "ADD") 
		{
            if (!phonebook.addContact())
				break;
		}
		else if (command == "SEARCH")
		{
			phonebook.displayContacts();
			if (!phonebook.searchContact())
				break;
		}
		else if (command == "EXIT")
			break;
		else
			std::cout << "Invalid command. Please try again." << std::endl;
	}
	return (0);
}




