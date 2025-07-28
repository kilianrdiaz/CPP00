#include "../inc/Contact.hpp"

Contact::Contact(void) {}

Contact::~Contact(void) {}

void    Contact::setContact()
{
    // Error con el std::cin al poner mas de una palabra, cambiar por getline!!!
    std::cout << "-> Please enter the first name: ";
    getline(std::cin, this->_firstName);
    std::cout << "-> Please enter the last name: ";
    getline(std::cin, this->_lastName);
    std::cout << "-> Please enter the nickname: ";
    getline(std::cin, this->_nickname);
    std::cout << "-> Please enter the phone number: ";
    getline(std::cin, this->_phoneNumber);
    std::cout << "-> Please enter the darkest secret: ";
    getline(std::cin, this->_darkestSecret);
    if (std::cin.eof() == true)
    {
        std::cout << std::endl << "You Pressed ^D. Exiting phonebook now." << std::endl;
        exit(0);
    }
    std::cout << ">> Contact succesfully created! <<" << std::endl << std::endl;
}

void    Contact::getContact(void) const
{
    std::cout << "> First Name: " << _firstName << std::endl;
    std::cout << "> Last Name: " << _lastName << std::endl;
    std::cout << "> Nickname: " << _nickname << std::endl;
    std::cout << "> Phone Number: " << _phoneNumber << std::endl;
    std::cout << "> Darkest Secret: " << _darkestSecret << std::endl << std::endl;
}

void    Contact::previewContact(void) const
{
    if (_firstName.length() > 10)
        std::cout << _firstName.substr(0, 9) << ".";
    else 
        std::cout << std::setw(10) << _firstName;
    std::cout << "|";
    if (_lastName.length() > 10)
        std::cout << _lastName.substr(0, 9) << ".";
    else 
        std::cout << std::setw(10) << _lastName;
    std::cout << "|";
    if (_nickname.length() > 10)
        std::cout << _nickname.substr(0, 9) << ".";
    else 
        std::cout << std::setw(10) << _nickname;
    std::cout << "|" << std::endl;
}
