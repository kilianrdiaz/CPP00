#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <string>
# include "Contact.hpp"

class PhoneBook {
    private:
        Contact agenda[8];
        int     contactCount;
        int     oldestIndex;

    public:
        PhoneBook(void);
        ~PhoneBook(void);

        void	setInfo();
        void    showContacts() const;
		void	getInfo() const;
};

#endif