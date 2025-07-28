#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib>

class Contact {
	private:
		std::string	_firstName;
		std::string	_lastName;
		std::string	_phoneNumber;
		std::string	_nickname;
		std::string	_darkestSecret;

	public:
		Contact(void);
		~Contact(void);

		void		setContact(void);
		void		getContact(void) const;
		void		previewContact(void) const;
};

#endif