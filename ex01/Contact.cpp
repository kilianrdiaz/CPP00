#include "Contact.hpp"

Contact::Contact(void) {}

Contact::~Contact(void) {}

void    Contact::setContact()
{
    // Error con el std::cin al poner mas de una palabra, cambiar por getline!!!
    std::cout << "Please enter the first name: ";
    getline(std::cin, this->firstName);
    std::cout << "Please enter the last name: ";
    getline(std::cin, this->lastName);
    std::cout << "Please enter the nickname: ";
    getline(std::cin, this->nickname);
    std::cout << "Please enter the phone number: ";
    getline(std::cin, this->phoneNumber);
    std::cout << "Please enter the darkest secret: ";
    std::getline(std::cin, this->darkestSecret);
}

void    Contact::getContact(void) const
{
    std::cout << "> First Name: " << firstName << std::endl;
    std::cout << "> Last Name: " << lastName << std::endl;
    std::cout << "> Nickname: " << nickname << std::endl;
    std::cout << "> Phone Number: " << phoneNumber << std::endl;
    std::cout << "> Darkest Secret: " << darkestSecret << std::endl;
}

void    Contact::previewContact(void) const
{
    if (firstName.length() > 10)
        std::cout << firstName.substr(0, 9) << ".";
    else 
        std::cout << std::setw(10) << firstName;
    std::cout << "|";
    if (lastName.length() > 10)
        std::cout << lastName.substr(0, 9) << ".";
    else 
        std::cout << std::setw(10) << lastName;
    std::cout << "|";
    if (nickname.length() > 10)
        std::cout << nickname.substr(0, 9) << ".";
    else 
        std::cout << std::setw(10) << nickname;
    std::cout << "|" << std::endl;
}
