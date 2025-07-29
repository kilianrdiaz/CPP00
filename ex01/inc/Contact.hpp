#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib>

class Contact {
	private:
		static std::string	_fields[5];
		std::string			_informations[11];

		enum Field {
			FirstName = 0,
			LastName,
			NickName,
			PhoneNumber,
			DarkestSecret
		};

	public:
		Contact(void);
		~Contact(void);

		void		setContact(void);
		void		getContact(void) const;
		void		previewContact(void) const;
};

#endif