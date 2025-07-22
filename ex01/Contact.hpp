#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib>

class Contact {
	private:
		std::string	firstName;
		std::string	lastName;
		std::string	phoneNumber;
		std::string	nickname;
		std::string	darkestSecret;

	public:
		Contact(void);
		~Contact(void);

		void		setContact(void);
		void		getContact(void) const;
		void		previewContact(void) const;
};

#endif