#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <string>

class Contact {
	public:
		Contact(void);
		~Contact(void);

		std::string	firstName;
		std::string	lastName;
		std::string	phoneNumber;
		std::string	email;
		std::string	darkestSecret;

		std::string getFirstName(void) const;
		std::string getLastName(void) const;
		std::string getPhoneNumber(void) const;
		std::string getEmail(void) const;
		std::string getDarkestSecret(void) const;
};

# endif