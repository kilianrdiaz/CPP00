#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
    contactCount = 0;
    oldestIndex = 0;
}

PhoneBook::~PhoneBook(void) {}

void	PhoneBook::setInfo()
{
    if (contactCount == 8)
    {
        std::cout << "* The agenda is full, the oldest contact will be removed... *" << std::endl;
        this->agenda[oldestIndex].setContact();
        if (oldestIndex == 7)
            oldestIndex = 0;
        else
            oldestIndex += 1;
    }
    else
    {
        this->agenda[contactCount].setContact();
        contactCount++;
    }
}

void    PhoneBook::showContacts() const
{
    int index;

    if (contactCount > 0)
    {
        std::cout << "|-------------------------------------------|" << std::endl;
        std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
        std::cout << "|----------|----------|----------|----------|" << std::endl;
        for (int i = 0; i < contactCount; i++)
        {
            std::cout << "|";
            std::cout << std::setw(10) << i + 1;
            std::cout << "|";
            this->agenda[i].previewContact();
        }
        std::cout << "|-------------------------------------------|" << std::endl;
    }
    else
    {
        std::cout << "Contact agenda is empty! :(" << std::endl;
        return ;
    }

    while (true)
    {
        std::cout << "Enter a contact index: ";
        std::cin >> index;
        std::cin.ignore();
        if (std::cin.fail())
        {
            std::cin.clear(); // Clear the error flag
            std::cin.ignore(10000, '\n'); // Discard invalid input
            std::cout << "Invalid input. Please enter a number." << std::endl;
            continue;
        }
        if (index > 0 && index <= contactCount)
        {
            std::cout << "Contact #" << index << ": " << std::endl;
            agenda[index - 1].getContact();
            break ;
        }
        std::cout << "Index is out of range. Try again!" << std::endl;
    }
}