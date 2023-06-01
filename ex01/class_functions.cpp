#include "class.hpp"

std::string PhoneBook::truncateString(const std::string& str, int maxLength) const 
{
	if (str.length() <= (unsigned long)maxLength)
		return str;
	else 
		return str.substr(0, maxLength - 1) + ".";
}

Contact PhoneBook::getContact(int ix) const
{
	return (this->contacts[ix]);
}

void PhoneBook::addContact() 
{
	std::string firstName, lastName, nickname, phoneNumber, darkestSecret;
	std::cout << "First Name: ";
	std::cin >> firstName;
	std::cout << "Last Name: ";
	std::cin >> lastName;
	std::cout << "Nickname: ";
	std::cin >> nickname;
	std::cout << "Phone Number: ";
	std::cin >> phoneNumber;
	std::cout << "Darkest Secret: ";
	std::cin >> darkestSecret;

	if (numContacts == MAX_CONTACTS) 
	{
		contacts[numContacts - 1] = Contact(firstName, lastName, nickname, phoneNumber, darkestSecret);
		return;
	}
	contacts[numContacts] = Contact(firstName, lastName, nickname, phoneNumber, darkestSecret);
	numContacts++;
}

void PhoneBook::displayContacts() const 
{
	int width;

	width = 10;
	std::cout << "   INDEX  |FIRST NAME| LAST NAME| NICKNAME " << std::endl;
	std::cout << "-------------------------------------------" << std::endl;

	for (int i = 0; i < numContacts; ++i) 
	{
		std::string truncatedFirstName = truncateString(contacts[i].getFirstName(), width);
		std::string truncatedLastName = truncateString(contacts[i].getLastName(), width);
		std::string truncatedNickname = truncateString(contacts[i].getNickname(), width);
		std::cout << std::setw(10);
		std::cout << i + 1 << "|";
		std::cout << std::setw(10);
		std::cout << truncatedFirstName << "|";
		std::cout << std::setw(10);
		std::cout << truncatedLastName	<< "|";
		std::cout << std::setw(10);
		std::cout << truncatedNickname << std::endl;

	}
}

int PhoneBook::searchContact() const
{
	int index;
	int found;

	found = 0;
	while (!found)
	{
		std::cout << "Enter the index of the contact to display: ";
	
		if (!(std::cin >> index))
		{
			if (std::cin.eof())
				return (0);
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			std::cout << "Invalid index. Contact not found." << std::endl;
			continue;
		}
		if (index > 0 && index <= numContacts) 
		{
			std::cout << "First Name: " << contacts[index - 1].getFirstName() << std::endl;
			std::cout << "Last Name: " << contacts[index - 1].getLastName() << std::endl;
			std::cout << "Nickname: " << contacts[index - 1].getNickname() << std::endl;
			std::cout << "Phone Number: " << contacts[index - 1].getPhoneNumber() << std::endl;
			std::cout << "Darkest Secret: " << contacts[index - 1].getDarkestSecret() << std::endl;
			found = 1;
		} 
		else
			std::cout << "Invalid index. Contact not found." << std::endl;
	}
	return (1);
}