#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include "Contact.hpp"

class PhoneBook {
    public:
        Contact agenda[8];
        int     contactCount;
        int     oldestIndex;

        PhoneBook(void);
        ~PhoneBook(void);

        void	setContact();
        void    showContacts() const;
		void	getContact() const;
};

# endif