#ifndef CLASS_HPP
# define CLASS_HPP

#include <iostream>
#include <string>
#include <iomanip>
#include <cctype> 

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

		std::string truncateString(const std::string& str, int maxLength) const ;

	public:
	//Constructor
		PhoneBook() : numContacts(0) {}

		Contact getContact(int ix) const;

		void addContact() ;

		void displayContacts() const ;

		int searchContact() const ;
};

#endif