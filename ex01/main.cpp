#include <iostream>
#include <string>
#include "PhoneBook.hpp"

int main(void)
{
    PhoneBook phonebook;
    std::string command;

    while (true)
    {
        std::cout << "Enter command (ADD, SEARCH, EXIT): ";
        std::cin >> command;
        if (command == "ADD")
        {
            std::cout << "Adding a contact..." << std::endl;
            phonebook.setInfo();
        }
        else if (command == "SEARCH")
        {
            std::cout << "Searching for a contact..." << std::endl;
            phonebook.showContacts();
        }
        else if (command == "EXIT")
        {
            std::cout << "Exiting the phonebook." << std::endl;
            break;
        }
        else
        {
            std::cout << "Invalid command. Please try again." << std::endl;
        }
    }
    return 0;
}