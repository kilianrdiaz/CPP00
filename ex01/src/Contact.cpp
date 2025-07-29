#include "../inc/Contact.hpp"

std::string Contact::_fields[5] =
{
	"first name",
	"last name",
	"nickname",
	"phone number",
	"darkest secret"
};

Contact::Contact(void)
{
    for (int i = FirstName; i <= DarkestSecret; i++)
		this->_informations[i] = std::string();
	return;
}

Contact::~Contact(void) {}

void    Contact::setContact()
{
    for (int i = FirstName; i <= DarkestSecret; i++)
	{
		std::cout << "Please enter the " << Contact::_fields[i] << ": ";
		while ( !(std::getline(std::cin, this->_informations[i])) || this->_informations[i].length() == 0)
		{
			if (std::cin.eof() == true)
			{
				std::cout << "You Pressed ^D. Exiting phonebook." << std::endl;
				std::exit(0);
			}
			else if (this->_informations[i].length() == 0)
			{
				this->_informations[i].clear();
				std::cout << "Empty contact information not allowed." << std::endl;
				std::cout << "Please enter the " << Contact::_fields[i] << ": ";
			}
		}
	}
    std::cout << ">> Contact succesfully created! <<" << std::endl << std::endl;
}

void    Contact::getContact(void) const
{
    for (int i = FirstName; i <= DarkestSecret; i++)
    {
        std::cout << "> " << _fields[i] << ": " << _informations[i] << std::endl;
    }
    std::cout << std::endl;
}

void    Contact::previewContact(void) const
{
    if (_informations[0].length() > 10)
        std::cout << _informations[0].substr(0, 9) << ".";
    else 
        std::cout << std::setw(10) << _informations[0];
    std::cout << "|";
    if (_informations[1].length() > 10)
        std::cout << _informations[1].substr(0, 9) << ".";
    else 
        std::cout << std::setw(10) << _informations[1];
    std::cout << "|";
    if (_informations[2].length() > 10)
        std::cout << _informations[2].substr(0, 9) << ".";
    else 
        std::cout << std::setw(10) << _informations[2];
    std::cout << "|" << std::endl;
}
