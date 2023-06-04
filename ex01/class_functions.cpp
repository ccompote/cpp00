#include "class.hpp"

std::string PhoneBook::truncateString(const std::string& str, int maxLength) const 
{
	if (str.length() <= (unsigned int)maxLength)
		return str;
	else
		return str.substr(0, maxLength - 1) + ".";
}

Contact PhoneBook::getContact(int ix) const
{
	return (this->contacts[ix]);
}

std::string getInput(const std::string& fieldName)
{
    std::string input;
    while (true)
    {
        std::cout << fieldName << ": ";
        std::getline(std::cin, input);
	    bool isWhitespaceOnly = true;
        for (int i = 0; i < (int)input.length(); ++i)
        {
            if (!std::isspace(input[i]))
            {
                isWhitespaceOnly = false;
                break;
            }
        }
        if (!input.empty() && !isWhitespaceOnly)
            break;
        std::cout << "Input cannot be empty. Please try again." << std::endl;
    }
    return (input);
}

void PhoneBook::addContact()
{
    std::string firstName = getInput("First Name");
    std::string lastName = getInput("Last Name");
    std::string nickname = getInput("Nickname");
    std::string phoneNumber = getInput("Phone Number");
    std::string darkestSecret = getInput("Darkest Secret");

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
    std::string input;

	if (!numContacts)
	{
		std::cout << "Phonebook empty" << std::endl;
		return (1);
	}
    while (1)
    {
        std::cout << "Enter the index of the contact to display: ";
        std::getline(std::cin, input);

        bool isDigit = true;
        for (int i = 0; i < (int)input.length(); ++i)
        {
            if (!std::isdigit(input[i]))
            {
                isDigit = false;
                break;
            }
        }

        if (!isDigit)
        {
            std::cout << "Invalid index. Contact not found." << std::endl;
            continue;
        }

        int index = std::atoi(input.c_str());
        if (index > 0 && index <= numContacts)
        {
            std::cout << "First Name: " << contacts[index - 1].getFirstName() << std::endl;
            std::cout << "Last Name: " << contacts[index - 1].getLastName() << std::endl;
            std::cout << "Nickname: " << contacts[index - 1].getNickname() << std::endl;
            std::cout << "Phone Number: " << contacts[index - 1].getPhoneNumber() << std::endl;
            std::cout << "Darkest Secret: " << contacts[index - 1].getDarkestSecret() << std::endl;
            break;
        }
        else
            std::cout << "Invalid index. Contact not found." << std::endl;
    }
    return (1);
}