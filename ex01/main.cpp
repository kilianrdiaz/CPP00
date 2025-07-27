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
        getline(std::cin, command);
        if (command == "ADD" || command == "add")
        {
            std::cout << "Adding a contact..." << std::endl;
            phonebook.setInfo();
        }
        else if (command == "SEARCH" || command == "search")
        {
            std::cout << "Searching for a contact..." << std::endl;
            phonebook.showContacts();
        }
        else if (command == "EXIT" || command == "exit")
        {
            std::cout << "Exiting the phonebook." << std::endl;
            break;
        }
        else if (command == "\0")
            continue;
        else
        {
            std::cout << "Invalid command. Please try again." << std::endl;
            continue;
        }
        std::cout << std::flush;
    }
    return 0;
}