#include <iostream>
#include <string>
#include "Phonebook.hpp"

PhoneBook::PhoneBook(void)
{
    contactCount = 0;
    oldestIndex = 0;
    std::cout << "PhoneBook created." << std::endl;
}

PhoneBook::~PhoneBook(void) {}

void	PhoneBook::setContact()
{
    std::cout << "Setting a contact..." << std::endl;
    // This function should prompt the user for contact details and store them in the agenda array
}

void	PhoneBook::getContact() const
{
    std::cout << "Getting a contact..." << std::endl;
    // This function should display the contacts stored in the agenda array
}

void    showContacts() const
{
    std::cout << "Showing contacts..." << std::endl;
    for (int i = 0; i < contactCount; ++i)
    {
        std::cout << "Contact " << i + 1 << ": " 
                  << agenda[i].getFirstName() << " "
                  << agenda[i].getLastName() << " "
                  << agenda[i].getPhoneNumber() << " "
                  << agenda[i].getEmail() << " "
                  << agenda[i].getDarkestSecret() << std::endl;
    }
}
