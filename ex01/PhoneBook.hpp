#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include <iomanip>
#include <cctype> 
#include "Contact.hpp"

const int MAX_CONTACTS = 8;

class PhoneBook
{
	private:
		Contact contacts[MAX_CONTACTS];
		int numContacts;

		std::string truncateString(const std::string& str, int maxLength) const ;

	public:
	//Constructor
		PhoneBook() : numContacts(0) {}

		int addContact() ;

		void displayContacts() const ;

		int searchContact() const ;
};

#endif