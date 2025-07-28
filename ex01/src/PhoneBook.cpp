#include "../inc/PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
    _contactCount = 0;
    _oldestIndex = 0;
}

PhoneBook::~PhoneBook(void) {}

void	PhoneBook::setInfo()
{
    if (_contactCount == 8)
    {
        std::cout << "* The agenda is full, the oldest contact will be removed... *" << std::endl;
        this->_agenda[_oldestIndex].setContact();
        if (_oldestIndex == 7)
            _oldestIndex = 0;
        else
            _oldestIndex += 1;
    }
    else
    {
        this->_agenda[_contactCount].setContact();
        _contactCount++;
    }
}

void    PhoneBook::showContacts() const
{
    if (_contactCount > 0)
    {
        std::cout << "|-------------------------------------------|" << std::endl;
        std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
        std::cout << "|----------|----------|----------|----------|" << std::endl;
        for (int i = 0; i < _contactCount; i++)
        {
            std::cout << "|";
            std::cout << std::setw(10) << i + 1;
            std::cout << "|";
            this->_agenda[i].previewContact();
        }
        std::cout << "|-------------------------------------------|" << std::endl << std::endl;
    }
    else
    {
        std::cout << std::endl << "- Contact agenda is empty! :(" << std::endl << std::endl;
        return ;
    }

    int index;
    std::string input;

    while (true)
    {
        std::cout << "> Enter a contact index: ";
        std::getline(std::cin, input);

        if (input.empty())
            continue;
        std::stringstream ss(input);
        if (!(ss >> index)) {
            std::cout << "- Invalid input. Please enter a number." << std::endl;
            continue;
        }

        if (index > 0 && index <= _contactCount) {
            std::cout << std::endl << "Contact #" << index << ": " << std::endl;
            _agenda[index - 1].getContact();
            break;
        } else {
            std::cout << "- Index is out of range. Try again!" << std::endl;
        }
    }
}