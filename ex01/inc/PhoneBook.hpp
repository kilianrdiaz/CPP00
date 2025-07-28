#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <string>
# include <sstream>
# include "Contact.hpp"

class PhoneBook {
    private:
        Contact _agenda[8];
        int     _contactCount;
        int     _oldestIndex;

    public:
        PhoneBook(void);
        ~PhoneBook(void);

        void	setInfo();
        void    showContacts() const;
		void	getInfo() const;
};

#endif