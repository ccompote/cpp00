#include "class.hpp"

int main(void)
{
	std::string command;
	PhoneBook phonebook;

	while (1)
	{
		std::cout << "Enter a command (ADD, SEARCH, EXIT): ";
		std::cin >> command;
		if (command == "ADD") 
            phonebook.addContact();
		else if (command == "EXIT")
			break;
	}
	return (0);
}



// #include <iostream>
// #include <string>

// const int MAX_CONTACTS = 8;

// class Contact {
// public:
//     Contact() {}

//     Contact(const std::string& newFirstName, const std::string& newLastName,
//             const std::string& newNickname, const std::string& newPhoneNumber,
//             const std::string& newDarkestSecret)
//         : firstName(newFirstName), lastName(newLastName), nickname(newNickname),
//           phoneNumber(newPhoneNumber), darkestSecret(newDarkestSecret) {}

//     const std::string& getFirstName() const { return firstName; }
//     const std::string& getLastName() const { return lastName; }
//     const std::string& getNickname() const { return nickname; }
//     const std::string& getPhoneNumber() const { return phoneNumber; }
//     const std::string& getDarkestSecret() const { return darkestSecret; }

// private:
//     std::string firstName;
//     std::string lastName;
//     std::string nickname;
//     std::string phoneNumber;
//     std::string darkestSecret;
// };

// class PhoneBook {
// public:
//     PhoneBook() : numContacts(0) {}

//     void addContact() {
//         if (numContacts == MAX_CONTACTS) {
//             std::cout << "Phonebook is full. Cannot add more contacts." << std::endl;
//             return;
//         }

//         std::string firstName, lastName, nickname, phoneNumber, darkestSecret;
//         std::cout << "First Name: ";
//         std::cin >> firstName;
//         std::cout << "Last Name: ";
//         std::cin >> lastName;
//         std::cout << "Nickname: ";
//         std::cin >> nickname;
//         std::cout << "Phone Number: ";
//         std::cin >> phoneNumber;
//         std::cout << "Darkest Secret: ";
//         std::cin >> darkestSecret;

//         contacts[numContacts] = Contact(firstName, lastName, nickname, phoneNumber, darkestSecret);
//         numContacts++;
//     }

//     void displayContacts() const {
//         std::cout << "INDEX    | FIRST NAME | LAST NAME  | NICKNAME  " << std::endl;
//         std::cout << "------------------------------------------" << std::endl;

//         for (int i = 0; i < numContacts; ++i) {
//             std::string truncatedFirstName = truncateString(contacts[i].getFirstName(), 10);
//             std::string truncatedLastName = truncateString(contacts[i].getLastName(), 10);
//             std::string truncatedNickname = truncateString(contacts[i].getNickname(), 10);

//             std::cout << i << "         | " << truncatedFirstName << " | " << truncatedLastName
//                       << " | " << truncatedNickname << std::endl;
//         }
//     }

//     void searchContact() const {
//         int index;
//         std::cout << "Enter the index of the contact to display: ";
//         std::cin >> index;

//         if (index >= 0 && static_cast<size_t>(index) < (size_t)numContacts) {
//             std::cout << "First Name: " << contacts[index].getFirstName() << std::endl;
//             std::cout << "Last Name: " << contacts[index].getLastName() << std::endl;
//             std::cout << "Nickname: " << contacts[index].getNickname() << std::endl;
//             std::cout << "Phone Number: " << contacts[index].getPhoneNumber() << std::endl;
//             std::cout << "Darkest Secret: " << contacts[index].getDarkestSecret() << std::endl;
//         } else {
//             std::cout << "Invalid index. Contact not found." << std::endl;
//         }
//     }

// private:
//     Contact contacts[MAX_CONTACTS];
//     int numContacts;

//     std::string truncateString(const std::string& str, int maxLength) const {
//         if (str.length() <= static_cast<size_t>(maxLength)) {
//             return str;
//         } else {
//             return str.substr(0, maxLength - 1) + ".";
//         }
//     }
// };

// int main() {
//     PhoneBook phoneBook;

//     while (true) {
//         std::string command;
//         std::cout << "Enter command (ADD, SEARCH, or EXIT): ";
//         std::cin >> command;

//         if (command == "ADD") {
//             phoneBook.addContact();
//         } else if (command == "SEARCH") {
//             phoneBook.displayContacts();
//             phoneBook.searchContact();
//         } else if (command == "EXIT") {
//             break;
//         } else {
//             std::cout << "Invalid command. Please try again." << std::endl;
//         }
//     }

//     return 0;
// }

