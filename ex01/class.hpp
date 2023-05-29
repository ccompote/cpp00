#ifndef CLASS_HPP
# define CLASS_HPP

#include <iostream>
#include <string>

const int MAX_CONTACTS = 8;

class Contact
{
	private:
		std::string firstName;
		std::string lastName;
		std::string nickname;
		std::string phoneNumber;
		std::string darkestSecret;

	public:
	//Constructor
		Contact() {}

		Contact(const std::string& newFirstName, const std::string& newLastName,
				const std::string& newNickname, const std::string& newPhoneNumber,
				const std::string& newDarkestSecret)
			: firstName(newFirstName), lastName(newLastName), nickname(newNickname),
			phoneNumber(newPhoneNumber), darkestSecret(newDarkestSecret) {}

		const std::string& getFirstName() const { return firstName; }
		const std::string& getLastName() const { return lastName; }
		const std::string& getNickname() const { return nickname; }
		const std::string& getPhoneNumber() const { return phoneNumber; }
		const std::string& getDarkestSecret() const { return darkestSecret; }

};

class PhoneBook
{
	private:
		Contact contacts[MAX_CONTACTS];
		int numContacts;

		std::string truncateString(const std::string& str, int maxLength) const {
			if (str.length() <= static_cast<size_t>(maxLength)) {
				return str;
			} else {
				return str.substr(0, maxLength - 1) + ".";
			}
		}

	public:
	//Constructor
		PhoneBook() : numContacts(0) {}

    void addContact() {
        if (numContacts == MAX_CONTACTS) {
            std::cout << "Phonebook is full. Cannot add more contacts." << std::endl;
            return;
        }

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

        contacts[numContacts] = Contact(firstName, lastName, nickname, phoneNumber, darkestSecret);
        numContacts++;
    }

};

#endif