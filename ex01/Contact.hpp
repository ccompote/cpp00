#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <string>
#include <iomanip>
#include <cctype> 

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

		const std::string& getFirstName() const;
		const std::string& getLastName() const;
		const std::string& getNickname() const;
		const std::string& getPhoneNumber() const;
		const std::string& getDarkestSecret() const;

};

#endif